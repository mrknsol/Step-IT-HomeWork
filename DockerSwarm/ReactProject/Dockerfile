FROM node:18 AS build-stage

WORKDIR /app

COPY package*.json ./

RUN npm install

COPY . ./

RUN npm run build

FROM nginx:1.23 AS production-stage

WORKDIR /usr/share/nginx/html

RUN rm -rf ./*

COPY --from=build-stage /app/dist .

EXPOSE 80

CMD ["nginx", "-g", "daemon off;"]