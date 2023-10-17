
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
    func_?(&TypeInfo__Sentry__Gpu);
    func_?(&TypeInfo__UnityEngine__Rendering__GraphicsDeviceType);
    func_?(&TypeInfo__UnityEngine__NPOTSupport);
    func_?();
    func_?(&StringLiteral_System_Product_Name__System_manu);
    func_?(&StringLiteral_debug);
    func_?(&StringLiteral_landscape);
    func_?(&StringLiteral_n_a);
    func_?(&StringLiteral_portrait);
    func_?(&StringLiteral_yyyy_MM_ddTHH__mm__ssZ);
    func_?(&StringLiteral_release);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  value = (OperatingSystem *)func_?(TypeInfo__Sentry__OperatingSystem);
  if (value == (OperatingSystem *)0x0) goto code_?;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)value,ExceptionArgument__Enum_obj,in_stack_1);
  pSVar2 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetOperatingSystem
                     ((MethodInfo *)0x0);
  (value->fields).name = pSVar2;
  func_?(&value->fields,pSVar2);
  (this->fields).os = value;
  func_?(&(this->fields).os,value);
  pDVar3 = (Device *)func_?(TypeInfo__Sentry__Device);
  if (pDVar3 == (Device *)0x0) goto code_?;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)pDVar3,ExceptionArgument__Enum_obj,in_stack_1);
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
    pSVar2 = StringLiteral_portrait;
    break;
  case DeviceOrientation__Enum_LandscapeLeft:
  case DeviceOrientation__Enum_LandscapeRight:
    pDVar3 = (this->fields).device;
    if (pDVar3 == (Device *)0x0) goto code_?;
    (pDVar3->fields).orientation = StringLiteral_landscape;
    pSVar2 = StringLiteral_landscape;
    break;
  default:
    goto code_?;
  }
  func_?(&(pDVar3->fields).orientation,pSVar2);
code_?:
  pSVar2 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetDeviceModel
                     ((MethodInfo *)0x0);
  bVar5 = mscorlib.dll::System::String::String_op_Inequality
                    (pSVar2,StringLiteral_n_a,(MethodInfo *)0x0);
  if (bVar5 != 0) {
    in_stack_1 = (MethodInfo *)&UNK_?;
    bVar5 = mscorlib.dll::System::String::String_op_Inequality
                      (pSVar2,StringLiteral_System_Product_Name__System_manu,(MethodInfo *)0x0);
    if (bVar5 != 0) {
      pDVar3 = (this->fields).device;
      if (pDVar3 == (Device *)0x0) goto code_?;
      (pDVar3->fields).model = pSVar2;
      func_?();
    }
  }
  pDVar3 = (this->fields).device;
  fStack_6 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetBatteryLevel
                       ((MethodInfo *)0x0);
  if (pDVar3 != (Device *)0x0) {
    (pDVar3->fields).battery_level = fStack_6 * _UNK_?;
    pDVar3 = (this->fields).device;
    DStack_7 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetBatteryStatus
                         ((MethodInfo *)0x0);
    EStack_8.klass = (Enum__Class *)TypeInfo__UnityEngine__BatteryStatus;
    EStack_8.monitor = (MonitorData *)0xffffffff;
    pSVar2 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_8,(MethodInfo *)0x0);
    if (pDVar3 != (Device *)0x0) {
      (pDVar3->fields).battery_status = pSVar2;
      func_?();
      iVar9 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetPhysicalMemoryMB
                        ((MethodInfo *)0x0);
      if (iVar9 != 0) {
        pDVar3 = (this->fields).device;
        iVar9 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetPhysicalMemoryMB
                          ((MethodInfo *)0x0);
        if (pDVar3 == (Device *)0x0) goto code_?;
        (pDVar3->fields).memory_size = (longlong)iVar9 * 0x100000;
      }
      pDVar3 = (this->fields).device;
      DStack_7 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetDeviceType
                           ((MethodInfo *)0x0);
      EStack_8.klass = (Enum__Class *)TypeInfo__UnityEngine__DeviceType;
      EStack_8.monitor = (MonitorData *)0xffffffff;
      pSVar2 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_8,(MethodInfo *)0x0);
      if (pDVar3 != (Device *)0x0) {
        (pDVar3->fields).device_type = pSVar2;
        func_?(&(pDVar3->fields).device_type,pSVar2);
        pDVar3 = (this->fields).device;
        pSVar2 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetProcessorType
                           ((MethodInfo *)0x0);
        if (pDVar3 != (Device *)0x0) {
          (pDVar3->fields).cpu_description = pSVar2;
          func_?(&(pDVar3->fields).cpu_description,pSVar2);
          pDVar3 = (this->fields).device;
          if (pDVar3 != (Device *)0x0) {
            (pDVar3->fields).simulator = 0;
            value_00 = (Gpu *)func_?(TypeInfo__Sentry__Gpu);
            if (value_00 != (Gpu *)0x0) {
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                        ((Object *)value_00,ExceptionArgument__Enum_obj,in_stack_1);
              iVar9 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::
                      SystemInfo_GetGraphicsDeviceID((MethodInfo *)0x0);
              (value_00->fields).id = iVar9;
              pSVar2 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::
                       SystemInfo_GetGraphicsDeviceName((MethodInfo *)0x0);
              (value_00->fields).name = pSVar2;
              func_?(&value_00->fields,pSVar2);
              iVar9 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::
                      SystemInfo_GetGraphicsDeviceVendorID((MethodInfo *)0x0);
              (value_00->fields).vendor_id = iVar9;
              pSVar2 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::
                       SystemInfo_GetGraphicsDeviceVendor((MethodInfo *)0x0);
              (value_00->fields).vendor_name = pSVar2;
              func_?(&(value_00->fields).vendor_name,pSVar2);
              iVar9 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::
                      SystemInfo_GetGraphicsMemorySize((MethodInfo *)0x0);
              (value_00->fields).memory_size = iVar9;
              bVar5 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::
                      SystemInfo_GetGraphicsMultiThreaded((MethodInfo *)0x0);
              (value_00->fields).multi_threaded_rendering = bVar5;
              NStack_10 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::
                          SystemInfo_GetNPOTSupport((MethodInfo *)0x0);
              EStack_11.klass = (Enum__Class *)TypeInfo__UnityEngine__NPOTSupport;
              EStack_11.monitor = (MonitorData *)0xffffffff;
              pSVar2 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_11,(MethodInfo *)0x0);
              (value_00->fields).npot_support = pSVar2;
              func_?(&(value_00->fields).npot_support,pSVar2);
              pSVar2 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::
                       SystemInfo_GetGraphicsDeviceVersion((MethodInfo *)0x0);
              (value_00->fields).version = pSVar2;
              func_?();
              UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetGraphicsDeviceType
                        ((MethodInfo *)0x0);
              pSVar2 = mscorlib.dll::System::Enum::Enum_ToString
                                 ((Enum *)&stack0xffffffd4,
                                  (MethodInfo *)TypeInfo__UnityEngine__Rendering__GraphicsDeviceType
                                 );
              (value_00->fields).api_type = pSVar2;
              func_?();
              (this->fields).gpu = value_00;
              func_?();
              pAVar12 = (App *)func_?();
              if (pAVar12 != (App *)0x0) {
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                          ((Object *)pAVar12,ExceptionArgument__Enum_obj,in_stack_1);
                (this->fields).app = pAVar12;
                func_?(&this->fields,pAVar12);
                pAVar12 = (this->fields).app;
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
                                          __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field
                                          ),(MethodInfo *)0x0);
                pCVar13 = (Context *)
                         mscorlib.dll::System::DateTimeOffset::DateTimeOffset_ToString_1
                                   ((DateTimeOffset *)&stack0xffffffc4,
                                    StringLiteral_yyyy_MM_ddTHH__mm__ssZ,(MethodInfo *)0x0);
                if (pAVar12 != (App *)0x0) {
                  (pAVar12->fields).app_start_time = (String *)pCVar13;
                  func_?(&(pAVar12->fields).app_start_time);
                  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                    func_?(TypeInfo__UnityEngine__Debug);
                  }
                  bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_get_isDebugBuild
                                    ((MethodInfo *)0x0);
                  pAVar12 = (this->fields).app;
                  this = pCVar13;
                  if (bVar5 == 0) {
                    if (pAVar12 != (App *)0x0) {
                      (pAVar12->fields).build_type = StringLiteral_release;
                      func_?(&(pAVar12->fields).build_type,StringLiteral_release);
                      return;
                    }
                  }
                  else if (pAVar12 != (App *)0x0) {
                    (pAVar12->fields).build_type = StringLiteral_debug;
                    func_?(&(pAVar12->fields).build_type,StringLiteral_debug);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  bVar14 = 0;
  func_?();
  *(char *)&this->klass =
       *(char *)&this->klass + extraout_CL +
       (CARRY1(unaff_BL,extraout_DH) || CARRY1(unaff_BL + extraout_DH,bVar14));
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}

