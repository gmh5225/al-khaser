#pragma once

VOID loaded_dlls();
BOOL NumberOfProcessors();
BOOL idt_trick();
BOOL ldt_trick();
BOOL gdt_trick();
BOOL str_trick();
BOOL number_cores_wmi();
BOOL disk_size_wmi();
BOOL setupdi_diskdrive();
BOOL mouse_movement();
BOOL memory_space();
BOOL dizk_size_deviceiocontrol();
BOOL disk_size_getdiskfreespace();
BOOL accelerated_sleep();
BOOL cpuid_is_hypervisor();
BOOL cpuid_hypervisor_vendor();
BOOL serial_number_bios_wmi();
BOOL model_computer_system_wmi();
BOOL manufacturer_computer_system_wmi();
BOOL current_temperature_acpi_wmi();
BOOL process_id_processor_wmi();
BOOL power_capabilities();
BOOL hybridanalysismacdetect();
BOOL cpu_fan_wmi();
BOOL query_license_value();