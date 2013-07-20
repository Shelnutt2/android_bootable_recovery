
#define Loki_Image "/tmp/loki_image"
#define BOOT_PARTITION "/dev/block/platform/msm_sdcc.1/by-name/boot"
#define RECOVERY_PARTITION "/dev/block/platform/msm_sdcc.1/by-name/recovery"

int loki_patch_shellcode(unsigned int addr);

int loki_patch(char *partition, char *partitionPath);

int loki_flash(char *partition);

int loki_check_partition(char *partition);

int loki_check();

