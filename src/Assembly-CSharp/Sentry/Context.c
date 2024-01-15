
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  method_00 = TypeInfo__Sentry__OperatingSystem;
  value = (OperatingSystem *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  pSVar1 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetOperatingSystem
                     ((MethodInfo *)0x0);
  bVar2 = (int)value < 0;
  if (value == (OperatingSystem *)0x0) goto code_?;
  (value->fields).name = pSVar1;
  func_?();
  (this->fields).os = value;
  func_?(&(this->fields).os);
  method_01 = TypeInfo__Sentry__Device;
  pDVar3 = (Device *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)pDVar3,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
  (this->fields).device = pDVar3;
  func_?(&(this->fields).device,pDVar3);
  DVar4 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_get_deviceOrientation
                     ((MethodInfo *)0x0);
  switch(DVar4) {
  case DeviceOrientation__Enum_Portrait:
  case DeviceOrientation__Enum_PortraitUpsideDown:
    pDVar3 = (this->fields).device;
    bVar2 = (int)pDVar3 < 0;
    if (pDVar3 == (Device *)0x0) goto code_?;
    (pDVar3->fields).orientation = StringLiteral_portrait;
    break;
  case DeviceOrientation__Enum_LandscapeLeft:
  case DeviceOrientation__Enum_LandscapeRight:
    pDVar3 = (this->fields).device;
    bVar2 = (int)pDVar3 < 0;
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
    bVar2 = (int)pDVar3 < 0;
    if (pDVar3 == (Device *)0x0) goto code_?;
    (pDVar3->fields).model = (String *)pGVar5;
    EStack_7.klass = (Enum__Class *)&(pDVar3->fields).model;
    EStack_7.monitor = (MonitorData *)pGVar5;
    func_?();
  }
  pDVar3 = (this->fields).device;
  CStack_8.a = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetBatteryLevel
                          ((MethodInfo *)0x0);
  bVar2 = (int)pDVar3 < 0;
  if (pDVar3 != (Device *)0x0) {
    (pDVar3->fields).battery_level = CStack_8.a * _UNK_?;
    pDVar3 = (this->fields).device;
    CStack_8.b = (float)UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::
                         SystemInfo_GetBatteryStatus((MethodInfo *)0x0);
    CStack_8.r = (float)TypeInfo__UnityEngine__BatteryStatus;
    CStack_8.g = -NAN;
    pSVar1 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&CStack_8,(MethodInfo *)0x0);
    bVar2 = (int)pDVar3 < 0;
    if (pDVar3 != (Device *)0x0) {
      (pDVar3->fields).battery_status = pSVar1;
      EStack_7.monitor = (MonitorData *)&(pDVar3->fields).battery_status;
      EStack_7.klass = (Enum__Class *)&UNK_?;
      func_?();
      iVar9 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetPhysicalMemoryMB
                         ((MethodInfo *)0x0);
      if (iVar9 != 0) {
        pDVar3 = (this->fields).device;
        iVar9 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetPhysicalMemoryMB
                           ((MethodInfo *)0x0);
        bVar2 = (int)pDVar3 < 0;
        if (pDVar3 == (Device *)0x0) goto code_?;
        (pDVar3->fields).memory_size = (longlong)iVar9 * 0x100000;
      }
      pDVar3 = (this->fields).device;
      CStack_8.b = (float)UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::
                           SystemInfo_GetDeviceType((MethodInfo *)0x0);
      CStack_8.r = (float)TypeInfo__UnityEngine__DeviceType;
      CStack_8.g = -NAN;
      pSVar1 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&CStack_8,(MethodInfo *)0x0);
      bVar2 = (int)pDVar3 < 0;
      if (pDVar3 != (Device *)0x0) {
        (pDVar3->fields).device_type = pSVar1;
        func_?();
        pDVar3 = (this->fields).device;
        method_02 = (MethodInfo *)0x0;
        pSVar1 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetProcessorType
                           ((MethodInfo *)0x0);
        bVar2 = (int)pDVar3 < 0;
        if (pDVar3 != (Device *)0x0) {
          (pDVar3->fields).cpu_description = pSVar1;
          func_?();
          pDVar3 = (this->fields).device;
          bVar2 = (int)pDVar3 < 0;
          if (pDVar3 != (Device *)0x0) {
            (pDVar3->fields).simulator = 0;
            pGVar5 = (Gpu *)func_?();
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                      ((Object *)pGVar5,ExceptionArgument__Enum_obj,method_02);
            iVar9 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::
                     SystemInfo_GetGraphicsDeviceID((MethodInfo *)0x0);
            bVar2 = (int)pGVar5 < 0;
            if (pGVar5 != (Gpu *)0x0) {
              (pGVar5->fields).id = iVar9;
              pSVar1 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::
                       SystemInfo_GetGraphicsDeviceName((MethodInfo *)0x0);
              (pGVar5->fields).name = pSVar1;
              func_?();
              iVar9 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::
                       SystemInfo_GetGraphicsDeviceVendorID((MethodInfo *)0x0);
              (pGVar5->fields).vendor_id = iVar9;
              pSVar1 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::
                       SystemInfo_GetGraphicsDeviceVendor((MethodInfo *)0x0);
              (pGVar5->fields).vendor_name = pSVar1;
              func_?(&(pGVar5->fields).vendor_name);
              iVar9 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::
                       SystemInfo_GetGraphicsMemorySize((MethodInfo *)0x0);
              (pGVar5->fields).memory_size = iVar9;
              bVar6 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::
                      SystemInfo_GetGraphicsMultiThreaded((MethodInfo *)0x0);
              (pGVar5->fields).multi_threaded_rendering = bVar6;
              UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetNPOTSupport
                        ((MethodInfo *)0x0);
              pSVar1 = mscorlib.dll::System::Enum::Enum_ToString
                                 ((Enum *)&stack0xffffffe0,(MethodInfo *)0x0);
              (pGVar5->fields).npot_support = pSVar1;
              func_?(&(pGVar5->fields).npot_support,pSVar1);
              pSVar1 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::
                       SystemInfo_GetGraphicsDeviceVersion((MethodInfo *)0x0);
              (pGVar5->fields).version = pSVar1;
              func_?(&(pGVar5->fields).version,pSVar1);
              UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetGraphicsDeviceType
                        ((MethodInfo *)0x0);
              EStack_7.klass = (Enum__Class *)TypeInfo__UnityEngine__Rendering__GraphicsDeviceType;
              EStack_7.monitor = (MonitorData *)&UNK_?;
              pSVar1 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_7,(MethodInfo *)0x0);
              (pGVar5->fields).api_type = pSVar1;
              EStack_7.monitor = (MonitorData *)&UNK_?;
              func_?();
              EStack_7.klass = (Enum__Class *)&(this->fields).gpu;
              (this->fields).gpu = pGVar5;
              EStack_7.monitor = (MonitorData *)pGVar5;
              func_?();
              method_03 = TypeInfo__Sentry__App;
              pAVar10 = (App *)func_?();
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                        ((Object *)pAVar10,ExceptionArgument__Enum_obj,(MethodInfo *)method_03);
              (this->fields).app = pAVar10;
              func_?();
              pAVar10 = (this->fields).app;
              if ((TypeInfo__System__DateTimeOffset->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__System__DateTimeOffset);
              }
              mscorlib.dll::System::DateTimeOffset::DateTimeOffset_get_UtcNow
                        ((DateTimeOffset *)&stack0xffffffb4,(MethodInfo *)0x0);
              CStack_8.a = UnityEngine.CoreModule.dll::UnityEngine::Time::
                            Time_1_get_realtimeSinceStartup((MethodInfo *)0x0);
              mscorlib.dll::System::DateTimeOffset::DateTimeOffset_AddSeconds
                        ((DateTimeOffset *)&stack0xffffffb4,(DateTimeOffset *)&stack0xffffffc4,
                         (double)(float)((uint)CStack_8.a ^
                                        __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field
                                        ),(MethodInfo *)0x0);
              pSVar1 = mscorlib.dll::System::DateTimeOffset::DateTimeOffset_ToString_1
                                 ((DateTimeOffset *)&stack0xffffffc4,
                                  StringLiteral_yyyy_MM_ddTHH__mm__ssZ,(MethodInfo *)0x0);
              bVar2 = (int)pAVar10 < 0;
              if (pAVar10 != (App *)0x0) {
                (pAVar10->fields).app_start_time = pSVar1;
                func_?();
                if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__UnityEngine__Debug);
                }
                bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_get_isDebugBuild
                                  ((MethodInfo *)0x0);
                pAVar10 = (this->fields).app;
                if (bVar6 == 0) {
                  bVar2 = (int)pAVar10 < 0;
                  if (pAVar10 != (App *)0x0) {
                    (pAVar10->fields).build_type = StringLiteral_release;
                    func_?();
                    return;
                  }
                }
                else {
                  bVar2 = (int)pAVar10 < 0;
                  if (pAVar10 != (App *)0x0) {
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
  }
code_?:
  bVar11 = 0;
  uVar12 = func_?();
  if (!bVar2) {
    pbVar13 = (byte *)((int)uVar12 + 0x53);
    bVar14 = (byte)((uint)unaff_EBX >> 8);
    bVar2 = CARRY1(*pbVar13,bVar14) || CARRY1(*pbVar13 + bVar14,bVar11);
    *pbVar13 = *pbVar13 + bVar14 + bVar11;
    pbVar13 = (byte *)(unaff_EBX + -0x6cefb2ad);
    bVar11 = *pbVar13;
    bVar15 = (byte)((uint6)uVar12 >> 0x20);
    bVar16 = *pbVar13 + bVar15;
    *pbVar13 = bVar16 + bVar2;
    pcVar17 = (char *)((int)uVar12 + -0x47efb2ad);
    *pcVar17 = *pcVar17 + bVar14 + (CARRY1(bVar11,bVar15) || CARRY1(bVar16,bVar2));
    pcVar18 = (code *)swi(3);
    (*pcVar18)();
    return;
  }
  cVar19 = method._2_1_ + (char)((uint6)uVar12 >> 0x28);
  method._0_3_ = CONCAT12(cVar19,method._0_2_);
  func_?();
  hashtable = TypeInfo__Assets__Scripts__WorldObjectTypes__Costume__CostumeData->static_fields->
              defaultItemValues;
  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pCVar20 = Extensions::Extensions_GetColor(&CStack_8,hashtable,(String *)method,(MethodInfo *)0x0)
  ;
  pMVar21 = (MonitorData *)pCVar20->g;
  pAVar10 = (App *)pCVar20->b;
  pGVar5 = (Gpu *)pCVar20->a;
  this->klass = (Context__Class *)pCVar20->r;
  this->monitor = pMVar21;
  (this->fields).app = pAVar10;
  (this->fields).gpu = pGVar5;
  return;
}

