
/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* Context() */

void Assembly-CSharp.dll::Sentry::Context::Context__ctor(Context *this,MethodInfo *method)

{
  puVar1 = (undefined4 *)&stack0xfffffffc;
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
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
  uVar3 = true;
  puVar4 = (undefined4 *)&stack0xfffffffc;
  if (value == (OperatingSystem *)0x0) goto code_?;
  (value->fields).name = pSVar2;
  in_stack_5 = (Context *)&value->fields;
  func_?();
  (this->fields).os = value;
  func_?();
  method_01 = TypeInfo__Sentry__Device;
  pDVar6 = (Device *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)pDVar6,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
  (this->fields).device = pDVar6;
  func_?();
  DVar7 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_get_deviceOrientation
                    ((MethodInfo *)0x0);
  switch(DVar7) {
  case DeviceOrientation__Enum_Portrait:
  case DeviceOrientation__Enum_PortraitUpsideDown:
    pDVar6 = (this->fields).device;
    uVar3 = true;
    puVar4 = (undefined4 *)&stack0xfffffffc;
    if (pDVar6 == (Device *)0x0) goto code_?;
    (pDVar6->fields).orientation = StringLiteral_portrait;
    break;
  case DeviceOrientation__Enum_LandscapeLeft:
  case DeviceOrientation__Enum_LandscapeRight:
    pDVar6 = (this->fields).device;
    uVar3 = true;
    puVar4 = (undefined4 *)&stack0xfffffffc;
    if (pDVar6 == (Device *)0x0) goto code_?;
    (pDVar6->fields).orientation = StringLiteral_landscape;
    break;
  default:
    goto code_?;
  }
  func_?();
code_?:
  pGVar8 = (Gpu *)UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetDeviceModel
                            ((MethodInfo *)0x0);
  in_stack_5 = (Context *)StringLiteral_n_a;
  bVar9 = mscorlib.dll::System::String::String_op_Inequality
                    ((String *)pGVar8,StringLiteral_n_a,(MethodInfo *)0x0);
  if ((bVar9 != 0) &&
     (bVar9 = mscorlib.dll::System::String::String_op_Inequality
                        ((String *)pGVar8,StringLiteral_System_Product_Name__System_manu,
                         (MethodInfo *)0x0), bVar9 != 0)) {
    pDVar6 = (this->fields).device;
    uVar3 = true;
    puVar4 = (undefined4 *)&stack0xfffffffc;
    if (pDVar6 == (Device *)0x0) goto code_?;
    (pDVar6->fields).model = (String *)pGVar8;
    EStack_10.klass = (Enum__Class *)&(pDVar6->fields).model;
    EStack_10.monitor = (MonitorData *)pGVar8;
    func_?();
  }
  pDVar6 = (this->fields).device;
  fStack_11 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetBatteryLevel
                       ((MethodInfo *)0x0);
  uVar3 = true;
  puVar4 = (undefined4 *)&stack0xfffffffc;
  if (pDVar6 == (Device *)0x0) goto code_?;
  (pDVar6->fields).battery_level = fStack_11 * _UNK_?;
  pDVar6 = (this->fields).device;
  DStack_12 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetBatteryStatus
                       ((MethodInfo *)0x0);
  EStack_13.klass = (Enum__Class *)TypeInfo__UnityEngine__BatteryStatus;
  EStack_13.monitor = (MonitorData *)0xffffffff;
  pSVar2 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_13,(MethodInfo *)0x0);
  uVar3 = true;
  puVar4 = (undefined4 *)&stack0xfffffffc;
  if (pDVar6 == (Device *)0x0) goto code_?;
  (pDVar6->fields).battery_status = pSVar2;
  EStack_10.monitor = (MonitorData *)&(pDVar6->fields).battery_status;
  EStack_10.klass = (Enum__Class *)&UNK_?;
  func_?();
  iVar14 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetPhysicalMemoryMB
                    ((MethodInfo *)0x0);
  if (iVar14 != 0) {
    pDVar6 = (this->fields).device;
    iVar14 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetPhysicalMemoryMB
                      ((MethodInfo *)0x0);
    uVar3 = true;
    puVar4 = (undefined4 *)&stack0xfffffffc;
    if (pDVar6 == (Device *)0x0) goto code_?;
    (pDVar6->fields).memory_size = (longlong)iVar14 * 0x100000;
  }
  pDVar6 = (this->fields).device;
  DStack_12 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetDeviceType
                       ((MethodInfo *)0x0);
  EStack_13.klass = (Enum__Class *)TypeInfo__UnityEngine__DeviceType;
  EStack_13.monitor = (MonitorData *)0xffffffff;
  pSVar2 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_13,(MethodInfo *)0x0);
  uVar3 = true;
  puVar4 = (undefined4 *)&stack0xfffffffc;
  if (pDVar6 == (Device *)0x0) goto code_?;
  (pDVar6->fields).device_type = pSVar2;
  in_stack_5 = (Context *)&(pDVar6->fields).device_type;
  func_?();
  pDVar6 = (this->fields).device;
  method_02 = (MethodInfo *)0x0;
  pSVar2 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetProcessorType
                     ((MethodInfo *)0x0);
  uVar3 = true;
  puVar4 = (undefined4 *)&stack0xfffffffc;
  if (pDVar6 == (Device *)0x0) goto code_?;
  (pDVar6->fields).cpu_description = pSVar2;
  in_stack_5 = (Context *)&(pDVar6->fields).cpu_description;
  func_?();
  pDVar6 = (this->fields).device;
  uVar3 = true;
  puVar4 = (undefined4 *)&stack0xfffffffc;
  if (pDVar6 == (Device *)0x0) goto code_?;
  (pDVar6->fields).simulator = 0;
  in_stack_5 = (Context *)&UNK_?;
  pGVar8 = (Gpu *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)pGVar8,ExceptionArgument__Enum_obj,method_02);
  iVar14 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetGraphicsDeviceID
                    ((MethodInfo *)0x0);
  uVar3 = true;
  puVar4 = (undefined4 *)&stack0xfffffffc;
  if (pGVar8 == (Gpu *)0x0) goto code_?;
  (pGVar8->fields).id = iVar14;
  pSVar2 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetGraphicsDeviceName
                     ((MethodInfo *)0x0);
  (pGVar8->fields).name = pSVar2;
  in_stack_5 = (Context *)&pGVar8->fields;
  func_?();
  iVar14 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetGraphicsDeviceVendorID
                    ((MethodInfo *)0x0);
  (pGVar8->fields).vendor_id = iVar14;
  pSVar2 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetGraphicsDeviceVendor
                     ((MethodInfo *)0x0);
  (pGVar8->fields).vendor_name = pSVar2;
  func_?();
  iVar14 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetGraphicsMemorySize
                    ((MethodInfo *)0x0);
  (pGVar8->fields).memory_size = iVar14;
  bVar9 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetGraphicsMultiThreaded
                    ((MethodInfo *)0x0);
  (pGVar8->fields).multi_threaded_rendering = bVar9;
  UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetNPOTSupport((MethodInfo *)0x0);
  pSVar2 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xffffffe0,(MethodInfo *)0x0);
  (pGVar8->fields).npot_support = pSVar2;
  func_?();
  pSVar2 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetGraphicsDeviceVersion
                     ((MethodInfo *)0x0);
  (pGVar8->fields).version = pSVar2;
  func_?();
  UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetGraphicsDeviceType
            ((MethodInfo *)0x0);
  EStack_10.klass = (Enum__Class *)TypeInfo__UnityEngine__Rendering__GraphicsDeviceType;
  EStack_10.monitor = (MonitorData *)&UNK_?;
  pSVar2 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_10,(MethodInfo *)0x0);
  (pGVar8->fields).api_type = pSVar2;
  EStack_10.monitor = (MonitorData *)&UNK_?;
  func_?();
  EStack_10.klass = (Enum__Class *)&(this->fields).gpu;
  (this->fields).gpu = pGVar8;
  EStack_10.monitor = (MonitorData *)pGVar8;
  func_?();
  method_03 = TypeInfo__Sentry__App;
  pAVar15 = (App *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)pAVar15,ExceptionArgument__Enum_obj,(MethodInfo *)method_03);
  (this->fields).app = pAVar15;
  func_?();
  pAVar15 = (this->fields).app;
  if ((TypeInfo__System__DateTimeOffset->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  mscorlib.dll::System::DateTimeOffset::DateTimeOffset_get_UtcNow
            ((DateTimeOffset *)&stack0xffffffb4,(MethodInfo *)0x0);
  fStack_11 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                       ((MethodInfo *)0x0);
  mscorlib.dll::System::DateTimeOffset::DateTimeOffset_AddSeconds
            ((DateTimeOffset *)&stack0xffffffb4,(DateTimeOffset *)&stack0xffffffc4,
             (double)(float)((uint)fStack_11 ^
                            __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                            ),(MethodInfo *)0x0);
  pSVar2 = mscorlib.dll::System::DateTimeOffset::DateTimeOffset_ToString_1
                     ((DateTimeOffset *)&stack0xffffffc4,StringLiteral_yyyy_MM_ddTHH__mm__ssZ,
                      (MethodInfo *)0x0);
  uVar3 = true;
  puVar4 = (undefined4 *)&stack0xfffffffc;
  if (pAVar15 == (App *)0x0) goto code_?;
  (pAVar15->fields).app_start_time = pSVar2;
  in_stack_5 = (Context *)&(pAVar15->fields).app_start_time;
  func_?();
  uVar3 = (TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0;
  pCVar16 = this;
  do {
    this = in_stack_5;
    if ((bool)uVar3) {
      func_?();
      this = in_stack_5;
    }
    bVar9 = UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_get_isDebugBuild
                      ((MethodInfo *)0x0);
    pAVar15 = (pCVar16->fields).app;
    puVar4 = puVar1;
    in_stack_5 = this;
    if (bVar9 == 0) {
      uVar3 = pAVar15 == (App *)0x0;
      if (!(bool)uVar3) {
        (pAVar15->fields).build_type = StringLiteral_release;
        func_?();
        return;
      }
    }
    else {
      uVar3 = pAVar15 == (App *)0x0;
      if (!(bool)uVar3) {
        (pAVar15->fields).build_type = StringLiteral_debug;
        func_?();
        return;
      }
    }
code_?:
    func_?();
    puVar1 = (undefined4 *)&stack0x00009f50;
    puVar17 = (undefined4 *)&stack0x00009f50;
    cVar18 = '\x0f';
    do {
      puVar4 = puVar4 + -1;
      puVar1 = puVar1 + -1;
      *puVar1 = *puVar4;
      cVar18 = cVar18 + -1;
    } while ('\0' < cVar18);
    puVar4 = (undefined4 *)&stack0x00004f80;
    puVar1 = (undefined4 *)&stack0x00004f80;
    cVar18 = '\x0f';
    do {
      puVar17 = puVar17 + -1;
      puVar4 = puVar4 + -1;
      *puVar4 = *puVar17;
      cVar18 = cVar18 + -1;
    } while ('\0' < cVar18);
    pCVar16 = this;
  } while (extraout_ECX == 0);
  *(undefined2 *)((int)&(this->fields).gpu + 3) = in_CS;
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}

