
/* Context() */

void Assembly-CSharp.dll::Sentry::Context::Context__ctor(Context *this,MethodInfo *method)

{
  puVar1 = (undefined4 *)&stack0xfffffffc;
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
  pSVar2 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetOperatingSystem
                     ((MethodInfo *)0x0);
  if (value == (OperatingSystem *)0x0) goto code_?;
  (value->fields).name = pSVar2;
  func_?();
  (this->fields).os = value;
  func_?(&(this->fields).os);
  method_01 = TypeInfo__Sentry__Device;
  pDVar3 = (Device *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)pDVar3,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
  (this->fields).device = pDVar3;
  func_?(&(this->fields).device,pDVar3);
  DVar4 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_get_deviceOrientation
                    ((MethodInfo *)0x0);
  switch(DVar4) {
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
  pGVar5 = (Gpu *)UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetDeviceModel
                            ((MethodInfo *)0x0);
  bVar6 = mscorlib.dll::System::String::String_op_Inequality
                    ((String *)pGVar5,StringLiteral_n_a,(MethodInfo *)0x0);
  if ((bVar6 != 0) &&
     (bVar6 = mscorlib.dll::System::String::String_op_Inequality
                        ((String *)pGVar5,StringLiteral_System_Product_Name__System_manu,
                         (MethodInfo *)0x0), bVar6 != 0)) {
    pDVar3 = (this->fields).device;
    if (pDVar3 == (Device *)0x0) goto code_?;
    (pDVar3->fields).model = (String *)pGVar5;
    EStack_7.klass = (Enum__Class *)&(pDVar3->fields).model;
    EStack_7.monitor = (MonitorData *)pGVar5;
    func_?();
  }
  pDVar3 = (this->fields).device;
  fStack_8 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetBatteryLevel
                       ((MethodInfo *)0x0);
  if (pDVar3 != (Device *)0x0) {
    (pDVar3->fields).battery_level = fStack_8 * _UNK_?;
    pDVar3 = (this->fields).device;
    DStack_9 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetBatteryStatus
                         ((MethodInfo *)0x0);
    EStack_10.klass = (Enum__Class *)TypeInfo__UnityEngine__BatteryStatus;
    EStack_10.monitor = (MonitorData *)0xffffffff;
    pSVar2 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_10,(MethodInfo *)0x0);
    if (pDVar3 != (Device *)0x0) {
      (pDVar3->fields).battery_status = pSVar2;
      EStack_7.monitor = (MonitorData *)&(pDVar3->fields).battery_status;
      EStack_7.klass = (Enum__Class *)&UNK_?;
      func_?();
      iVar11 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetPhysicalMemoryMB
                        ((MethodInfo *)0x0);
      if (iVar11 != 0) {
        pDVar3 = (this->fields).device;
        iVar11 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetPhysicalMemoryMB
                          ((MethodInfo *)0x0);
        if (pDVar3 == (Device *)0x0) goto code_?;
        (pDVar3->fields).memory_size = (longlong)iVar11 * 0x100000;
      }
      pDVar3 = (this->fields).device;
      DStack_9 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetDeviceType
                           ((MethodInfo *)0x0);
      EStack_10.klass = (Enum__Class *)TypeInfo__UnityEngine__DeviceType;
      EStack_10.monitor = (MonitorData *)0xffffffff;
      pSVar2 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_10,(MethodInfo *)0x0);
      if (pDVar3 != (Device *)0x0) {
        (pDVar3->fields).device_type = pSVar2;
        func_?();
        pDVar3 = (this->fields).device;
        method_02 = (MethodInfo *)0x0;
        pSVar2 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetProcessorType
                           ((MethodInfo *)0x0);
        if (pDVar3 != (Device *)0x0) {
          (pDVar3->fields).cpu_description = pSVar2;
          func_?();
          pDVar3 = (this->fields).device;
          if (pDVar3 != (Device *)0x0) {
            (pDVar3->fields).simulator = 0;
            pGVar5 = (Gpu *)func_?();
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                      ((Object *)pGVar5,ExceptionArgument__Enum_obj,method_02);
            iVar11 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::
                    SystemInfo_GetGraphicsDeviceID((MethodInfo *)0x0);
            if (pGVar5 != (Gpu *)0x0) {
              (pGVar5->fields).id = iVar11;
              pSVar2 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::
                       SystemInfo_GetGraphicsDeviceName((MethodInfo *)0x0);
              (pGVar5->fields).name = pSVar2;
              func_?();
              iVar11 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::
                      SystemInfo_GetGraphicsDeviceVendorID((MethodInfo *)0x0);
              (pGVar5->fields).vendor_id = iVar11;
              pSVar2 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::
                       SystemInfo_GetGraphicsDeviceVendor((MethodInfo *)0x0);
              (pGVar5->fields).vendor_name = pSVar2;
              func_?(&(pGVar5->fields).vendor_name);
              iVar11 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::
                      SystemInfo_GetGraphicsMemorySize((MethodInfo *)0x0);
              (pGVar5->fields).memory_size = iVar11;
              bVar6 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::
                      SystemInfo_GetGraphicsMultiThreaded((MethodInfo *)0x0);
              (pGVar5->fields).multi_threaded_rendering = bVar6;
              UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetNPOTSupport
                        ((MethodInfo *)0x0);
              pSVar2 = mscorlib.dll::System::Enum::Enum_ToString
                                 ((Enum *)&stack0xffffffe0,(MethodInfo *)0x0);
              (pGVar5->fields).npot_support = pSVar2;
              func_?(&(pGVar5->fields).npot_support,pSVar2);
              pSVar2 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::
                       SystemInfo_GetGraphicsDeviceVersion((MethodInfo *)0x0);
              (pGVar5->fields).version = pSVar2;
              func_?(&(pGVar5->fields).version,pSVar2);
              UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetGraphicsDeviceType
                        ((MethodInfo *)0x0);
              EStack_7.klass = (Enum__Class *)TypeInfo__UnityEngine__Rendering__GraphicsDeviceType;
              EStack_7.monitor = (MonitorData *)&UNK_?;
              pSVar2 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_7,(MethodInfo *)0x0);
              (pGVar5->fields).api_type = pSVar2;
              EStack_7.monitor = (MonitorData *)&UNK_?;
              func_?();
              EStack_7.klass = (Enum__Class *)&(this->fields).gpu;
              (this->fields).gpu = pGVar5;
              EStack_7.monitor = (MonitorData *)pGVar5;
              func_?();
              method_03 = TypeInfo__Sentry__App;
              pAVar12 = (App *)func_?();
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                        ((Object *)pAVar12,ExceptionArgument__Enum_obj,(MethodInfo *)method_03);
              (this->fields).app = pAVar12;
              func_?();
              pAVar12 = (this->fields).app;
              if ((TypeInfo__System__DateTimeOffset->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__System__DateTimeOffset);
              }
              mscorlib.dll::System::DateTimeOffset::DateTimeOffset_get_UtcNow
                        ((DateTimeOffset *)&stack0xffffffb4,(MethodInfo *)0x0);
              fStack_8 = UnityEngine.CoreModule.dll::UnityEngine::Time::
                         Time_1_get_realtimeSinceStartup((MethodInfo *)0x0);
              mscorlib.dll::System::DateTimeOffset::DateTimeOffset_AddSeconds
                        ((DateTimeOffset *)&stack0xffffffb4,(DateTimeOffset *)&stack0xffffffc4,
                         (double)(float)((uint)fStack_8 ^
                                        __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field
                                        ),(MethodInfo *)0x0);
              pSVar2 = mscorlib.dll::System::DateTimeOffset::DateTimeOffset_ToString_1
                                 ((DateTimeOffset *)&stack0xffffffc4,
                                  StringLiteral_yyyy_MM_ddTHH__mm__ssZ,(MethodInfo *)0x0);
              if (pAVar12 != (App *)0x0) {
                (pAVar12->fields).app_start_time = pSVar2;
                func_?();
                if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__UnityEngine__Debug);
                }
                bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_get_isDebugBuild
                                  ((MethodInfo *)0x0);
                pAVar12 = (this->fields).app;
                if (bVar6 == 0) {
                  if (pAVar12 != (App *)0x0) {
                    (pAVar12->fields).build_type = StringLiteral_release;
                    func_?();
                    return;
                  }
                }
                else if (pAVar12 != (App *)0x0) {
                  (pAVar12->fields).build_type = StringLiteral_debug;
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
  cVar13 = '\0';
  iRam_? = func_?();
  *unaff_EBX = (char)unaff_EBX;
  *(char *)(iRam_? + -0x5cefafe5) =
       *(char *)(iRam_? + -0x5cefafe5) + extraout_CL + cVar13;
  puVar14 = (undefined4 *)&stack0xffffffb8;
  cVar13 = '\x0f';
  do {
    puVar1 = puVar1 + -1;
    puVar14 = puVar14 + -1;
    *puVar14 = *puVar1;
    cVar13 = cVar13 + -1;
  } while ('\0' < cVar13);
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}

