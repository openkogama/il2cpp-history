
/* Context() */

void Assembly-CSharp.dll::Sentry::Context::Context__ctor(Context *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Sentry__App);
    func_?(&TypeInfo__UnityEngine__BatteryStatus);
    func_?(&TypeInfo__System__DateTimeOffset);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__UnityEngine__DeviceType);
    func_?(&TypeInfo__Sentry__Device);
    func_?();
    func_?(&TypeInfo__UnityEngine__Rendering__GraphicsDeviceType);
    func_?(&TypeInfo__UnityEngine__NPOTSupport);
    func_?(&TypeInfo__Sentry__OperatingSystem);
    func_?(&StringLiteral_System_Product_Name__System_manu);
    func_?(&StringLiteral_debug);
    func_?(&StringLiteral_landscape);
    func_?(&StringLiteral_n_a);
    func_?(&StringLiteral_portrait);
    func_?(&StringLiteral_yyyy_MM_ddTHH__mm__ssZ);
    func_?(&StringLiteral_release);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  method_00 = TypeInfo__Sentry__OperatingSystem;
  value = (OperatingSystem *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  pSVar1 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetOperatingSystem
                     ((MethodInfo *)0x0);
  if (value == (OperatingSystem *)0x0) goto code_?;
  (value->fields).name = pSVar1;
  func_?();
  (this->fields).os = value;
  func_?(&(this->fields).os);
  method_01 = TypeInfo__Sentry__Device;
  pDVar2 = (Device *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)pDVar2,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
  (this->fields).device = pDVar2;
  func_?(&(this->fields).device,pDVar2);
  DVar3 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_get_deviceOrientation
                    ((MethodInfo *)0x0);
  switch(DVar3) {
  case DeviceOrientation__Enum_Portrait:
  case DeviceOrientation__Enum_PortraitUpsideDown:
    pDVar2 = (this->fields).device;
    if (pDVar2 == (Device *)0x0) goto code_?;
    (pDVar2->fields).orientation = StringLiteral_portrait;
    break;
  case DeviceOrientation__Enum_LandscapeLeft:
  case DeviceOrientation__Enum_LandscapeRight:
    pDVar2 = (this->fields).device;
    if (pDVar2 == (Device *)0x0) goto code_?;
    (pDVar2->fields).orientation = StringLiteral_landscape;
    break;
  default:
    goto code_?;
  }
  func_?();
code_?:
  pGVar4 = (Gpu *)UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetDeviceModel
                            ((MethodInfo *)0x0);
  bVar5 = mscorlib.dll::System::String::String_op_Inequality
                    ((String *)pGVar4,StringLiteral_n_a,(MethodInfo *)0x0);
  if ((bVar5 != 0) &&
     (bVar5 = mscorlib.dll::System::String::String_op_Inequality
                        ((String *)pGVar4,StringLiteral_System_Product_Name__System_manu,
                         (MethodInfo *)0x0), bVar5 != 0)) {
    pDVar2 = (this->fields).device;
    if (pDVar2 == (Device *)0x0) goto code_?;
    (pDVar2->fields).model = (String *)pGVar4;
    EStack_6.klass = (Enum__Class *)&(pDVar2->fields).model;
    EStack_6.monitor = (MonitorData *)pGVar4;
    func_?();
  }
  pDVar2 = (this->fields).device;
  fStack_7 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetBatteryLevel
                       ((MethodInfo *)0x0);
  if (pDVar2 != (Device *)0x0) {
    (pDVar2->fields).battery_level = fStack_7 * _UNK_?;
    pDVar2 = (this->fields).device;
    DStack_8 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetBatteryStatus
                         ((MethodInfo *)0x0);
    EStack_9.klass = (Enum__Class *)TypeInfo__UnityEngine__BatteryStatus;
    EStack_9.monitor = (MonitorData *)0xffffffff;
    pSVar1 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_9,(MethodInfo *)0x0);
    if (pDVar2 != (Device *)0x0) {
      (pDVar2->fields).battery_status = pSVar1;
      EStack_6.monitor = (MonitorData *)&(pDVar2->fields).battery_status;
      EStack_6.klass = (Enum__Class *)&UNK_?;
      func_?();
      iVar10 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetPhysicalMemoryMB
                        ((MethodInfo *)0x0);
      if (iVar10 != 0) {
        pDVar2 = (this->fields).device;
        iVar10 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetPhysicalMemoryMB
                          ((MethodInfo *)0x0);
        if (pDVar2 == (Device *)0x0) goto code_?;
        (pDVar2->fields).memory_size = (longlong)iVar10 * 0x100000;
      }
      pDVar2 = (this->fields).device;
      DStack_8 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetDeviceType
                           ((MethodInfo *)0x0);
      EStack_9.klass = (Enum__Class *)TypeInfo__UnityEngine__DeviceType;
      EStack_9.monitor = (MonitorData *)0xffffffff;
      pSVar1 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_9,(MethodInfo *)0x0);
      if (pDVar2 != (Device *)0x0) {
        (pDVar2->fields).device_type = pSVar1;
        func_?();
        pDVar2 = (this->fields).device;
        method_02 = (MethodInfo *)0x0;
        pSVar1 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetProcessorType
                           ((MethodInfo *)0x0);
        if (pDVar2 != (Device *)0x0) {
          (pDVar2->fields).cpu_description = pSVar1;
          func_?();
          pDVar2 = (this->fields).device;
          if (pDVar2 != (Device *)0x0) {
            (pDVar2->fields).simulator = 0;
            pGVar4 = (Gpu *)func_?();
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                      ((Object *)pGVar4,ExceptionArgument__Enum_obj,method_02);
            iVar10 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::
                    SystemInfo_GetGraphicsDeviceID((MethodInfo *)0x0);
            if (pGVar4 != (Gpu *)0x0) {
              (pGVar4->fields).id = iVar10;
              pSVar1 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::
                       SystemInfo_GetGraphicsDeviceName((MethodInfo *)0x0);
              (pGVar4->fields).name = pSVar1;
              func_?();
              iVar10 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::
                      SystemInfo_GetGraphicsDeviceVendorID((MethodInfo *)0x0);
              (pGVar4->fields).vendor_id = iVar10;
              pSVar1 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::
                       SystemInfo_GetGraphicsDeviceVendor((MethodInfo *)0x0);
              (pGVar4->fields).vendor_name = pSVar1;
              func_?(&(pGVar4->fields).vendor_name);
              iVar10 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::
                      SystemInfo_GetGraphicsMemorySize((MethodInfo *)0x0);
              (pGVar4->fields).memory_size = iVar10;
              bVar5 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::
                      SystemInfo_GetGraphicsMultiThreaded((MethodInfo *)0x0);
              (pGVar4->fields).multi_threaded_rendering = bVar5;
              UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetNPOTSupport
                        ((MethodInfo *)0x0);
              pSVar1 = mscorlib.dll::System::Enum::Enum_ToString
                                 ((Enum *)&stack0xffffffe0,(MethodInfo *)0x0);
              (pGVar4->fields).npot_support = pSVar1;
              func_?(&(pGVar4->fields).npot_support,pSVar1);
              pSVar1 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::
                       SystemInfo_GetGraphicsDeviceVersion((MethodInfo *)0x0);
              (pGVar4->fields).version = pSVar1;
              func_?(&(pGVar4->fields).version,pSVar1);
              UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetGraphicsDeviceType
                        ((MethodInfo *)0x0);
              EStack_6.klass = (Enum__Class *)TypeInfo__UnityEngine__Rendering__GraphicsDeviceType;
              EStack_6.monitor = (MonitorData *)&UNK_?;
              pSVar1 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_6,(MethodInfo *)0x0);
              (pGVar4->fields).api_type = pSVar1;
              EStack_6.monitor = (MonitorData *)&UNK_?;
              func_?();
              EStack_6.klass = (Enum__Class *)&(this->fields).gpu;
              (this->fields).gpu = pGVar4;
              EStack_6.monitor = (MonitorData *)pGVar4;
              func_?();
              method_03 = TypeInfo__Sentry__App;
              pAVar11 = (App *)func_?();
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                        ((Object *)pAVar11,ExceptionArgument__Enum_obj,(MethodInfo *)method_03);
              (this->fields).app = pAVar11;
              func_?();
              pAVar11 = (this->fields).app;
              if ((TypeInfo__System__DateTimeOffset->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__System__DateTimeOffset);
              }
              mscorlib.dll::System::DateTimeOffset::DateTimeOffset_get_UtcNow
                        ((DateTimeOffset *)&stack0xffffffb4,(MethodInfo *)0x0);
              fStack_7 = UnityEngine.CoreModule.dll::UnityEngine::Time::
                         Time_1_get_realtimeSinceStartup((MethodInfo *)0x0);
              mscorlib.dll::System::DateTimeOffset::DateTimeOffset_AddSeconds
                        ((DateTimeOffset *)&stack0xffffffb4,(DateTimeOffset *)&stack0xffffffc4,
                         (double)(float)((uint)fStack_7 ^
                                        __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                        ),(MethodInfo *)0x0);
              pSVar1 = mscorlib.dll::System::DateTimeOffset::DateTimeOffset_ToString_1
                                 ((DateTimeOffset *)&stack0xffffffc4,
                                  StringLiteral_yyyy_MM_ddTHH__mm__ssZ,(MethodInfo *)0x0);
              if (pAVar11 != (App *)0x0) {
                (pAVar11->fields).app_start_time = pSVar1;
                pCVar12 = (Context *)&(pAVar11->fields).app_start_time;
                func_?();
                if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__UnityEngine__Debug);
                }
                bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_get_isDebugBuild
                                  ((MethodInfo *)0x0);
                pAVar11 = (this->fields).app;
                this = pCVar12;
                if (bVar5 == 0) {
                  if (pAVar11 != (App *)0x0) {
                    (pAVar11->fields).build_type = StringLiteral_release;
                    func_?();
                    return;
                  }
                }
                else if (pAVar11 != (App *)0x0) {
                  (pAVar11->fields).build_type = StringLiteral_debug;
                  func_?();
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  uVar13 = func_?();
  uVar14 = (undefined2)((uint6)uVar13 >> 0x20);
  pcVar15 = (char *)((int)uVar13 + -0x3cefb093);
  *pcVar15 = *pcVar15 + extraout_CH;
  uVar16 = in(uVar14);
  *(undefined4 *)((int)&this[-1].fields.device + 3) = uVar16;
  uVar16 = in(uVar14);
  *(undefined4 *)((int)&this->klass + 2) = uVar16;
  uVar16 = in(uVar14);
  *(undefined4 *)((int)&this->monitor + 1) = uVar16;
  pAVar11 = (App *)in(uVar14);
  (this->fields).app = pAVar11;
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}

