
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
  ppOVar2 = &(this->fields).os;
  *ppOVar2 = value;
  func_?(ppOVar2);
  method_01 = TypeInfo__Sentry__Device;
  pDVar3 = (Device *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)pDVar3,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
  ppDVar4 = &(this->fields).device;
  *ppDVar4 = pDVar3;
  func_?(ppDVar4,pDVar3);
  DVar5 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_get_deviceOrientation
                    ((MethodInfo *)0x0);
  switch(DVar5) {
  case DeviceOrientation__Enum_Portrait:
  case DeviceOrientation__Enum_PortraitUpsideDown:
    if (*ppDVar4 == (Device *)0x0) goto code_?;
    ((*ppDVar4)->fields).orientation = StringLiteral_portrait;
    break;
  case DeviceOrientation__Enum_LandscapeLeft:
  case DeviceOrientation__Enum_LandscapeRight:
    if (*ppDVar4 == (Device *)0x0) goto code_?;
    ((*ppDVar4)->fields).orientation = StringLiteral_landscape;
    break;
  default:
    goto code_?;
  }
  func_?();
code_?:
  pGVar6 = (Gpu *)UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetDeviceModel
                            ((MethodInfo *)0x0);
  bVar7 = mscorlib.dll::System::String::String_op_Inequality
                    ((String *)pGVar6,StringLiteral_n_a,(MethodInfo *)0x0);
  if ((bVar7 != 0) &&
     (bVar7 = mscorlib.dll::System::String::String_op_Inequality
                        ((String *)pGVar6,StringLiteral_System_Product_Name__System_manu,
                         (MethodInfo *)0x0), bVar7 != 0)) {
    if (*ppDVar4 == (Device *)0x0) goto code_?;
    EStack_8.klass = (Enum__Class *)&((*ppDVar4)->fields).model;
    *(Gpu **)EStack_8.klass = pGVar6;
    EStack_8.monitor = (MonitorData *)pGVar6;
    func_?();
  }
  pDVar3 = *ppDVar4;
  fStack_9 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetBatteryLevel
                       ((MethodInfo *)0x0);
  if (pDVar3 != (Device *)0x0) {
    (pDVar3->fields).battery_level = fStack_9 * _UNK_?;
    pDVar3 = *ppDVar4;
    DStack_10 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetBatteryStatus
                         ((MethodInfo *)0x0);
    EStack_11.klass = (Enum__Class *)TypeInfo__UnityEngine__BatteryStatus;
    EStack_11.monitor = (MonitorData *)0xffffffff;
    pSVar1 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_11,(MethodInfo *)0x0);
    if (pDVar3 != (Device *)0x0) {
      EStack_8.monitor = (MonitorData *)&(pDVar3->fields).battery_status;
      *(String **)EStack_8.monitor = pSVar1;
      EStack_8.klass = (Enum__Class *)&UNK_?;
      func_?();
      iVar12 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetPhysicalMemoryMB
                        ((MethodInfo *)0x0);
      if (iVar12 != 0) {
        pDVar3 = *ppDVar4;
        iVar12 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetPhysicalMemoryMB
                          ((MethodInfo *)0x0);
        if (pDVar3 == (Device *)0x0) goto code_?;
        (pDVar3->fields).memory_size = (longlong)iVar12 * 0x100000;
      }
      pDVar3 = *ppDVar4;
      DStack_10 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetDeviceType
                           ((MethodInfo *)0x0);
      EStack_11.klass = (Enum__Class *)TypeInfo__UnityEngine__DeviceType;
      EStack_11.monitor = (MonitorData *)0xffffffff;
      pSVar1 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_11,(MethodInfo *)0x0);
      if (pDVar3 != (Device *)0x0) {
        (pDVar3->fields).device_type = pSVar1;
        func_?();
        pDVar3 = *ppDVar4;
        method_02 = (MethodInfo *)0x0;
        pSVar1 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetProcessorType
                           ((MethodInfo *)0x0);
        if (pDVar3 != (Device *)0x0) {
          (pDVar3->fields).cpu_description = pSVar1;
          func_?();
          if (*ppDVar4 != (Device *)0x0) {
            ((*ppDVar4)->fields).simulator = 0;
            pGVar6 = (Gpu *)func_?();
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                      ((Object *)pGVar6,ExceptionArgument__Enum_obj,method_02);
            iVar12 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::
                    SystemInfo_GetGraphicsDeviceID((MethodInfo *)0x0);
            if (pGVar6 != (Gpu *)0x0) {
              (pGVar6->fields).id = iVar12;
              pSVar1 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::
                       SystemInfo_GetGraphicsDeviceName((MethodInfo *)0x0);
              (pGVar6->fields).name = pSVar1;
              func_?();
              iVar12 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::
                      SystemInfo_GetGraphicsDeviceVendorID((MethodInfo *)0x0);
              (pGVar6->fields).vendor_id = iVar12;
              pSVar1 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::
                       SystemInfo_GetGraphicsDeviceVendor((MethodInfo *)0x0);
              ppSVar13 = &(pGVar6->fields).vendor_name;
              *ppSVar13 = pSVar1;
              func_?(ppSVar13);
              iVar12 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::
                      SystemInfo_GetGraphicsMemorySize((MethodInfo *)0x0);
              (pGVar6->fields).memory_size = iVar12;
              bVar7 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::
                      SystemInfo_GetGraphicsMultiThreaded((MethodInfo *)0x0);
              (pGVar6->fields).multi_threaded_rendering = bVar7;
              UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetNPOTSupport
                        ((MethodInfo *)0x0);
              pSVar1 = mscorlib.dll::System::Enum::Enum_ToString
                                 ((Enum *)&stack0xffffffe0,(MethodInfo *)0x0);
              ppSVar13 = &(pGVar6->fields).npot_support;
              *ppSVar13 = pSVar1;
              func_?(ppSVar13,pSVar1);
              pSVar1 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::
                       SystemInfo_GetGraphicsDeviceVersion((MethodInfo *)0x0);
              ppSVar13 = &(pGVar6->fields).version;
              *ppSVar13 = pSVar1;
              func_?(ppSVar13,pSVar1);
              UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetGraphicsDeviceType
                        ((MethodInfo *)0x0);
              EStack_8.klass = (Enum__Class *)TypeInfo__UnityEngine__Rendering__GraphicsDeviceType;
              EStack_8.monitor = (MonitorData *)&UNK_?;
              pSVar1 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_8,(MethodInfo *)0x0);
              (pGVar6->fields).api_type = pSVar1;
              EStack_8.monitor = (MonitorData *)&UNK_?;
              func_?();
              EStack_8.klass = (Enum__Class *)&(this->fields).gpu;
              *(Gpu **)EStack_8.klass = pGVar6;
              EStack_8.monitor = (MonitorData *)pGVar6;
              func_?();
              method_03 = TypeInfo__Sentry__App;
              pAVar14 = (App *)func_?();
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                        ((Object *)pAVar14,ExceptionArgument__Enum_obj,(MethodInfo *)method_03);
              pCVar15 = &this->fields;
              pCVar15->app = pAVar14;
              func_?();
              pAVar14 = pCVar15->app;
              if ((TypeInfo__System__DateTimeOffset->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__System__DateTimeOffset);
              }
              mscorlib.dll::System::DateTimeOffset::DateTimeOffset_get_UtcNow
                        ((DateTimeOffset *)&stack0xffffffb4,(MethodInfo *)0x0);
              fStack_9 = UnityEngine.CoreModule.dll::UnityEngine::Time::
                         Time_1_get_realtimeSinceStartup((MethodInfo *)0x0);
              mscorlib.dll::System::DateTimeOffset::DateTimeOffset_AddSeconds
                        ((DateTimeOffset *)&stack0xffffffb4,(DateTimeOffset *)&stack0xffffffc4,
                         (double)(float)((uint)fStack_9 ^
                                        __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                        ),(MethodInfo *)0x0);
              pSVar1 = mscorlib.dll::System::DateTimeOffset::DateTimeOffset_ToString_1
                                 ((DateTimeOffset *)&stack0xffffffc4,
                                  StringLiteral_yyyy_MM_ddTHH__mm__ssZ,(MethodInfo *)0x0);
              if (pAVar14 != (App *)0x0) {
                (pAVar14->fields).app_start_time = pSVar1;
                func_?();
                if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__UnityEngine__Debug);
                }
                bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_get_isDebugBuild
                                  ((MethodInfo *)0x0);
                pAVar14 = pCVar15->app;
                if (bVar7 == 0) {
                  if (pAVar14 != (App *)0x0) {
                    (pAVar14->fields).build_type = StringLiteral_release;
                    func_?();
                    return;
                  }
                }
                else if (pAVar14 != (App *)0x0) {
                  (pAVar14->fields).build_type = StringLiteral_debug;
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
  func_?();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

