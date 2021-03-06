void       OnEnvStart();
void       OnEnvDestroy();
void       PeerDestructor(void* data);
int        Crop(IplImage** pointer, char* args, char* gravity);
int        Resize(IplImage** pointer, char* _args, Config* config, int simple);
int        PrepareWatermark(Config* cfg, ngx_pool_t* pool);
int        Watermark(IplImage* image, Config* config);
u_char*    Info(Album* album, ngx_pool_t* pool);
JobResult* RunJob(u_char* blob, size_t size, ngx_http_request_t* req, Config* config);