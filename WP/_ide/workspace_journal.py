# 2026-04-23T16:18:30.818202200
import vitis

client = vitis.create_client()
client.set_workspace(path="WP")

platform = client.create_platform_component(name = "MD_plat",hw_design = "$COMPONENT_LOCATION/../../MicroBlaze_wrapper.xsa",os = "standalone",cpu = "microblaze_0",domain_name = "standalone_microblaze_0",compiler = "gcc")

comp = client.create_app_component(name="MD_App",platform = "$COMPONENT_LOCATION/../MD_plat/export/MD_plat/MD_plat.xpfm",domain = "standalone_microblaze_0",template = "hello_world")

vitis.dispose()

