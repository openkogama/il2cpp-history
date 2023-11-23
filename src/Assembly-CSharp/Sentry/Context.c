
/* WARNING (jumptable): Unable to track spacebase fully for stack */
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
  a = (Device *)0x0;
  if (value == (OperatingSystem *)0x0) goto code_?;
  (value->fields).name = pSVar1;
  func_?();
  (this->fields).os = value;
  func_?(&(this->fields).os);
  method_01 = TypeInfo__Sentry__Device;
  a = (Device *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)a,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
  (this->fields).device = a;
  func_?(&(this->fields).device,a);
  DVar3 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_get_deviceOrientation
                    ((MethodInfo *)0x0);
  switch(DVar3) {
  case DeviceOrientation__Enum_Portrait:
  case DeviceOrientation__Enum_PortraitUpsideDown:
    pDVar4 = (this->fields).device;
    bVar2 = (int)pDVar4 < 0;
    if (pDVar4 == (Device *)0x0) goto code_?;
    (pDVar4->fields).orientation = StringLiteral_portrait;
    break;
  case DeviceOrientation__Enum_LandscapeLeft:
  case DeviceOrientation__Enum_LandscapeRight:
    pDVar4 = (this->fields).device;
    bVar2 = (int)pDVar4 < 0;
    if (pDVar4 == (Device *)0x0) goto code_?;
    (pDVar4->fields).orientation = StringLiteral_landscape;
    break;
  default:
    goto code_?;
  }
  func_?();
code_?:
  a = (Device *)
      UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetDeviceModel
                ((MethodInfo *)0x0);
  bVar5 = mscorlib.dll::System::String::String_op_Inequality
                    ((String *)a,StringLiteral_n_a,(MethodInfo *)0x0);
  if ((bVar5 != 0) &&
     (bVar5 = mscorlib.dll::System::String::String_op_Inequality
                        ((String *)a,StringLiteral_System_Product_Name__System_manu,
                         (MethodInfo *)0x0), bVar5 != 0)) {
    pDVar4 = (this->fields).device;
    bVar2 = (int)pDVar4 < 0;
    if (pDVar4 == (Device *)0x0) goto code_?;
    (pDVar4->fields).model = (String *)a;
    EStack_6.klass = (Enum__Class *)&(pDVar4->fields).model;
    EStack_6.monitor = (MonitorData *)a;
    func_?();
  }
  pDVar4 = (this->fields).device;
  fStack_7 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetBatteryLevel
                       ((MethodInfo *)0x0);
  bVar2 = (int)pDVar4 < 0;
  a = (Device *)0x0;
  if (pDVar4 != (Device *)0x0) {
    (pDVar4->fields).battery_level = fStack_7 * _UNK_?;
    pDVar4 = (this->fields).device;
    DStack_8 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetBatteryStatus
                         ((MethodInfo *)0x0);
    EStack_9.klass = (Enum__Class *)TypeInfo__UnityEngine__BatteryStatus;
    EStack_9.monitor = (MonitorData *)0xffffffff;
    pSVar1 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_9,(MethodInfo *)0x0);
    bVar2 = (int)pDVar4 < 0;
    a = (Device *)0x0;
    if (pDVar4 != (Device *)0x0) {
      (pDVar4->fields).battery_status = pSVar1;
      EStack_6.monitor = (MonitorData *)&(pDVar4->fields).battery_status;
      EStack_6.klass = (Enum__Class *)&UNK_?;
      func_?();
      iVar10 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetPhysicalMemoryMB
                         ((MethodInfo *)0x0);
      if (iVar10 != 0) {
        pDVar4 = (this->fields).device;
        iVar10 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetPhysicalMemoryMB
                           ((MethodInfo *)0x0);
        bVar2 = (int)pDVar4 < 0;
        a = (Device *)0x0;
        if (pDVar4 == (Device *)0x0) goto code_?;
        (pDVar4->fields).memory_size = (longlong)iVar10 * 0x100000;
      }
      pDVar4 = (this->fields).device;
      DStack_8 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetDeviceType
                           ((MethodInfo *)0x0);
      EStack_9.klass = (Enum__Class *)TypeInfo__UnityEngine__DeviceType;
      EStack_9.monitor = (MonitorData *)0xffffffff;
      pSVar1 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_9,(MethodInfo *)0x0);
      bVar2 = (int)pDVar4 < 0;
      a = (Device *)0x0;
      if (pDVar4 != (Device *)0x0) {
        (pDVar4->fields).device_type = pSVar1;
        func_?();
        a = (this->fields).device;
        method_02 = (MethodInfo *)0x0;
        pSVar1 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetProcessorType
                           ((MethodInfo *)0x0);
        bVar2 = (int)a < 0;
        if (a != (Device *)0x0) {
          (a->fields).cpu_description = pSVar1;
          func_?();
          pDVar4 = (this->fields).device;
          bVar2 = (int)pDVar4 < 0;
          if (pDVar4 != (Device *)0x0) {
            (pDVar4->fields).simulator = 0;
            pDVar4 = (Device *)func_?();
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                      ((Object *)pDVar4,ExceptionArgument__Enum_obj,method_02);
            pSVar1 = (String *)
                     UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::
                     SystemInfo_GetGraphicsDeviceID((MethodInfo *)0x0);
            bVar2 = (int)pDVar4 < 0;
            a = (Device *)0x0;
            if (pDVar4 != (Device *)0x0) {
              (pDVar4->fields).family = pSVar1;
              pSVar1 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::
                       SystemInfo_GetGraphicsDeviceName((MethodInfo *)0x0);
              (pDVar4->fields).name = pSVar1;
              func_?();
              pSVar1 = (String *)
                       UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::
                       SystemInfo_GetGraphicsDeviceVendorID((MethodInfo *)0x0);
              (pDVar4->fields).model = pSVar1;
              pSVar1 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::
                       SystemInfo_GetGraphicsDeviceVendor((MethodInfo *)0x0);
              (pDVar4->fields).model_id = pSVar1;
              func_?(&(pDVar4->fields).model_id);
              pSVar1 = (String *)
                       UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::
                       SystemInfo_GetGraphicsMemorySize((MethodInfo *)0x0);
              (pDVar4->fields).arch = pSVar1;
              bVar5 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::
                      SystemInfo_GetGraphicsMultiThreaded((MethodInfo *)0x0);
              *(bool *)&(pDVar4->fields).battery_level = bVar5;
              UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetNPOTSupport
                        ((MethodInfo *)0x0);
              pSVar1 = mscorlib.dll::System::Enum::Enum_ToString
                                 ((Enum *)&stack0xffffffe0,(MethodInfo *)0x0);
              (pDVar4->fields).orientation = pSVar1;
              func_?(&(pDVar4->fields).orientation,pSVar1);
              pSVar1 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::
                       SystemInfo_GetGraphicsDeviceVersion((MethodInfo *)0x0);
              (pDVar4->fields).battery_status = pSVar1;
              func_?(&(pDVar4->fields).battery_status,pSVar1);
              UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetGraphicsDeviceType
                        ((MethodInfo *)0x0);
              EStack_6.klass = (Enum__Class *)TypeInfo__UnityEngine__Rendering__GraphicsDeviceType;
              EStack_6.monitor = (MonitorData *)&UNK_?;
              pSVar1 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_6,(MethodInfo *)0x0);
              (pDVar4->fields).cpu_description = pSVar1;
              EStack_6.monitor = (MonitorData *)&UNK_?;
              func_?();
              EStack_6.klass = (Enum__Class *)&(this->fields).gpu;
              (this->fields).gpu = (Gpu *)pDVar4;
              EStack_6.monitor = (MonitorData *)pDVar4;
              func_?();
              method_03 = TypeInfo__Sentry__App;
              pAVar11 = (App *)func_?();
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
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
                                        __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field
                                        ),(MethodInfo *)0x0);
              pDVar4 = (Device *)
                        mscorlib.dll::System::DateTimeOffset::DateTimeOffset_ToString_1
                                  ((DateTimeOffset *)&stack0xffffffc4,
                                   StringLiteral_yyyy_MM_ddTHH__mm__ssZ,(MethodInfo *)0x0);
              bVar2 = (int)pAVar11 < 0;
              a = (Device *)0x0;
              if (pAVar11 != (App *)0x0) {
                (pAVar11->fields).app_start_time = (String *)pDVar4;
                func_?();
                a = pDVar4;
                if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__UnityEngine__Debug);
                  a = pDVar4;
                }
                bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_get_isDebugBuild
                                  ((MethodInfo *)0x0);
                pAVar11 = (this->fields).app;
                if (bVar5 == 0) {
                  bVar2 = (int)pAVar11 < 0;
                  if (pAVar11 != (App *)0x0) {
                    (pAVar11->fields).build_type = StringLiteral_release;
                    func_?();
                    return;
                  }
                }
                else {
                  bVar2 = (int)pAVar11 < 0;
                  if (pAVar11 != (App *)0x0) {
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
  }
code_?:
  bVar12 = 0;
  uVar13 = 0x104d;
  iVar14 = func_?();
  if (!bVar2) {
    pbVar15 = (byte *)(iVar14 + 0x5f);
    bVar16 = (byte)((uint)unaff_EBX >> 8);
    bVar2 = CARRY1(*pbVar15,bVar16) || CARRY1(*pbVar15 + bVar16,bVar12);
    *pbVar15 = *pbVar15 + bVar16 + bVar12;
    pbVar15 = (byte *)(unaff_EBX + -0x6cefb2a1);
    bVar12 = *pbVar15;
    bVar17 = *pbVar15;
    *pbVar15 = bVar17 + extraout_DL + bVar2;
    *(char *)(iVar14 + -0x47efb2a1) =
         *(char *)(iVar14 + -0x47efb2a1) + bVar16 +
         (CARRY1(bVar12,extraout_DL) || CARRY1(bVar17 + extraout_DL,bVar2));
    pcVar18 = (code *)swi(3);
    (*pcVar18)();
    return;
  }
  iVar14 = CONCAT22(uVar13,in_CS);
  puVar19 = (undefined4 *)func_?();
  puVar20 = (undefined1 *)(iVar14 + -4);
  *(Device **)(iVar14 + -4) = a;
  uVar21 = *puVar19;
  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
    *(Extensions__Class **)(iVar14 + -8) = TypeInfo__Extensions;
    puVar22 = (undefined1 *)(iVar14 + -0xc);
    *(undefined **)(iVar14 + -0xc) = &UNK_?;
    func_?();
    puVar20 = puVar22 + 4;
  }
  *(undefined4 *)(puVar20 + -4) = 0;
  *(MethodInfo **)(puVar20 + -8) = method;
  *(undefined4 *)(puVar20 + -0xc) = uVar21;
  *(Enum **)(puVar20 + -0x10) = &EStack_9;
  *(undefined **)(puVar20 + -0x14) = &UNK_?;
  pCVar23 = Extensions::Extensions_GetColor
                      (*(Color **)(puVar20 + -0x10),
                       *(Dictionary_2_System_Object_System_Object_ **)(puVar20 + -0xc),
                       *(String **)(puVar20 + -8),*(MethodInfo **)(puVar20 + -4));
  pMVar24 = (MonitorData *)pCVar23->g;
  pAVar11 = (App *)pCVar23->b;
  pGVar25 = (Gpu *)pCVar23->a;
  this->klass = (Context__Class *)pCVar23->r;
  this->monitor = pMVar24;
  (this->fields).app = pAVar11;
  (this->fields).gpu = pGVar25;
  return;
}

