
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
  a = (Device *)0x0;
  if (value == (OperatingSystem *)0x0) goto code_?;
  (value->fields).name = pSVar1;
  func_?();
  (this->fields).os = value;
  func_?(&(this->fields).os);
  method_01 = TypeInfo__Sentry__Device;
  a = (Device *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)a,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
  (this->fields).device = a;
  func_?(&(this->fields).device,a);
  DVar2 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_get_deviceOrientation
                    ((MethodInfo *)0x0);
  switch(DVar2) {
  case DeviceOrientation__Enum_Portrait:
  case DeviceOrientation__Enum_PortraitUpsideDown:
    pDVar3 = (this->fields).device;
    if (pDVar3 == (Device *)0x0) goto code_?;
    (pDVar3->fields).orientation = StringLiteral_portrait;
    break;
  case DeviceOrientation__Enum_LandscapeLeft:
  case DeviceOrientation__Enum_LandscapeRight:
    pDVar3 = (this->fields).device;
    if (pDVar3 == (Device *)0x0) goto code_?;
    (pDVar3->fields).orientation = StringLiteral_landscape;
    break;
  default:
    goto code_?;
  }
  func_?();
code_?:
  a = (Device *)
      UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetDeviceModel
                ((MethodInfo *)0x0);
  bVar4 = mscorlib.dll::System::String::String_op_Inequality
                    ((String *)a,StringLiteral_n_a,(MethodInfo *)0x0);
  if ((bVar4 != 0) &&
     (bVar4 = mscorlib.dll::System::String::String_op_Inequality
                        ((String *)a,StringLiteral_System_Product_Name__System_manu,
                         (MethodInfo *)0x0), bVar4 != 0)) {
    pDVar3 = (this->fields).device;
    if (pDVar3 == (Device *)0x0) goto code_?;
    (pDVar3->fields).model = (String *)a;
    EStack_5.klass = (Enum__Class *)&(pDVar3->fields).model;
    EStack_5.monitor = (MonitorData *)a;
    func_?();
  }
  pDVar3 = (this->fields).device;
  fStack_6 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetBatteryLevel
                       ((MethodInfo *)0x0);
  a = (Device *)0x0;
  if (pDVar3 != (Device *)0x0) {
    (pDVar3->fields).battery_level = fStack_6 * _UNK_?;
    pDVar3 = (this->fields).device;
    DStack_7 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetBatteryStatus
                         ((MethodInfo *)0x0);
    EStack_8.klass = (Enum__Class *)TypeInfo__UnityEngine__BatteryStatus;
    EStack_8.monitor = (MonitorData *)0xffffffff;
    pSVar1 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_8,(MethodInfo *)0x0);
    a = (Device *)0x0;
    if (pDVar3 != (Device *)0x0) {
      (pDVar3->fields).battery_status = pSVar1;
      EStack_5.monitor = (MonitorData *)&(pDVar3->fields).battery_status;
      EStack_5.klass = (Enum__Class *)&UNK_?;
      func_?();
      iVar9 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetPhysicalMemoryMB
                        ((MethodInfo *)0x0);
      if (iVar9 != 0) {
        pDVar3 = (this->fields).device;
        iVar9 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetPhysicalMemoryMB
                          ((MethodInfo *)0x0);
        a = (Device *)0x0;
        if (pDVar3 == (Device *)0x0) goto code_?;
        (pDVar3->fields).memory_size = (longlong)iVar9 * 0x100000;
      }
      pDVar3 = (this->fields).device;
      DStack_7 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetDeviceType
                           ((MethodInfo *)0x0);
      EStack_8.klass = (Enum__Class *)TypeInfo__UnityEngine__DeviceType;
      EStack_8.monitor = (MonitorData *)0xffffffff;
      pSVar1 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_8,(MethodInfo *)0x0);
      a = (Device *)0x0;
      if (pDVar3 != (Device *)0x0) {
        (pDVar3->fields).device_type = pSVar1;
        func_?();
        a = (this->fields).device;
        method_02 = (MethodInfo *)0x0;
        pSVar1 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetProcessorType
                           ((MethodInfo *)0x0);
        if (a != (Device *)0x0) {
          (a->fields).cpu_description = pSVar1;
          func_?();
          pDVar3 = (this->fields).device;
          if (pDVar3 != (Device *)0x0) {
            (pDVar3->fields).simulator = 0;
            pDVar3 = (Device *)func_?();
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                      ((Object *)pDVar3,ExceptionArgument__Enum_obj,method_02);
            pSVar1 = (String *)
                     UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::
                     SystemInfo_GetGraphicsDeviceID((MethodInfo *)0x0);
            a = (Device *)0x0;
            if (pDVar3 != (Device *)0x0) {
              (pDVar3->fields).family = pSVar1;
              pSVar1 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::
                       SystemInfo_GetGraphicsDeviceName((MethodInfo *)0x0);
              (pDVar3->fields).name = pSVar1;
              func_?();
              pSVar1 = (String *)
                       UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::
                       SystemInfo_GetGraphicsDeviceVendorID((MethodInfo *)0x0);
              (pDVar3->fields).model = pSVar1;
              pSVar1 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::
                       SystemInfo_GetGraphicsDeviceVendor((MethodInfo *)0x0);
              (pDVar3->fields).model_id = pSVar1;
              func_?(&(pDVar3->fields).model_id);
              pSVar1 = (String *)
                       UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::
                       SystemInfo_GetGraphicsMemorySize((MethodInfo *)0x0);
              (pDVar3->fields).arch = pSVar1;
              bVar4 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::
                      SystemInfo_GetGraphicsMultiThreaded((MethodInfo *)0x0);
              *(bool *)&(pDVar3->fields).battery_level = bVar4;
              UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetNPOTSupport
                        ((MethodInfo *)0x0);
              pSVar1 = mscorlib.dll::System::Enum::Enum_ToString
                                 ((Enum *)&stack0xffffffe0,(MethodInfo *)0x0);
              (pDVar3->fields).orientation = pSVar1;
              func_?(&(pDVar3->fields).orientation,pSVar1);
              pSVar1 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::
                       SystemInfo_GetGraphicsDeviceVersion((MethodInfo *)0x0);
              (pDVar3->fields).battery_status = pSVar1;
              func_?(&(pDVar3->fields).battery_status,pSVar1);
              UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetGraphicsDeviceType
                        ((MethodInfo *)0x0);
              EStack_5.klass = (Enum__Class *)TypeInfo__UnityEngine__Rendering__GraphicsDeviceType;
              EStack_5.monitor = (MonitorData *)&UNK_?;
              pSVar1 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_5,(MethodInfo *)0x0);
              (pDVar3->fields).cpu_description = pSVar1;
              EStack_5.monitor = (MonitorData *)&UNK_?;
              func_?();
              EStack_5.klass = (Enum__Class *)&(this->fields).gpu;
              (this->fields).gpu = (Gpu *)pDVar3;
              EStack_5.monitor = (MonitorData *)pDVar3;
              func_?();
              method_03 = TypeInfo__Sentry__App;
              pAVar10 = (App *)func_?();
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                        ((Object *)pAVar10,ExceptionArgument__Enum_obj,(MethodInfo *)method_03);
              (this->fields).app = pAVar10;
              func_?();
              pAVar10 = (this->fields).app;
              if ((TypeInfo__System__DateTimeOffset->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__System__DateTimeOffset);
              }
              mscorlib.dll::System::DateTimeOffset::DateTimeOffset_get_UtcNow
                        ((DateTimeOffset *)&stack0xffffffb4,(MethodInfo *)0x0);
              fStack_6 = UnityEngine.CoreModule.dll::UnityEngine::Time::
                         Time_1_get_realtimeSinceStartup((MethodInfo *)0x0);
              mscorlib.dll::System::DateTimeOffset::DateTimeOffset_AddSeconds
                        ((DateTimeOffset *)&stack0xffffffb4,(DateTimeOffset *)&stack0xffffffc4,
                         (double)(float)((uint)fStack_6 ^
                                        __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                        ),(MethodInfo *)0x0);
              pDVar3 = (Device *)
                       mscorlib.dll::System::DateTimeOffset::DateTimeOffset_ToString_1
                                 ((DateTimeOffset *)&stack0xffffffc4,
                                  StringLiteral_yyyy_MM_ddTHH__mm__ssZ,(MethodInfo *)0x0);
              a = (Device *)0x0;
              if (pAVar10 != (App *)0x0) {
                (pAVar10->fields).app_start_time = (String *)pDVar3;
                pCVar11 = (Context *)&(pAVar10->fields).app_start_time;
                func_?();
                a = pDVar3;
                if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__UnityEngine__Debug);
                  a = pDVar3;
                }
                bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_get_isDebugBuild
                                  ((MethodInfo *)0x0);
                pAVar10 = (this->fields).app;
                this = pCVar11;
                if (bVar4 == 0) {
                  if (pAVar10 != (App *)0x0) {
                    (pAVar10->fields).build_type = StringLiteral_release;
                    func_?();
                    return;
                  }
                }
                else if (pAVar10 != (App *)0x0) {
                  (pAVar10->fields).build_type = StringLiteral_debug;
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
  cVar12 = '\0';
  func_?();
  *(char *)((int)&this[0x35185ab].fields.app + extraout_ECX * 2) = extraout_AH;
  *(char *)(unaff_EBX + -0x5cefb05c) = *(char *)(unaff_EBX + -0x5cefb05c) + extraout_AH + cVar12;
  *(undefined1 *)&this->klass = *(undefined1 *)&a->klass;
  *(undefined1 *)&this->klass = *(undefined1 *)((int)&a->klass + 1);
  *(undefined1 *)&this->klass = *(undefined1 *)((int)&a->klass + 2);
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}

