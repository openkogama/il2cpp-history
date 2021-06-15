
/* Context() */

void Assembly-CSharp.dll::Sentry::Context::Context_2__ctor(Context_2 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  BStack_1 = BatteryStatus__Enum_Unknown;
  DStack_2 = DeviceType__Enum_Unknown;
  NStack_3 = NPOTSupport__Enum_None;
  GStack_4 = GraphicsDeviceType__Enum_OpenGL2;
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  method_00 = TypeInfo__Sentry__OperatingSystem;
  pSVar5 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(pSVar5,0.0,(MethodInfo *)method_00);
  pSVar6 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetOperatingSystem
                     ((MethodInfo *)0x0);
  this_00 = (Il2CppClass *)0x0;
  if (pSVar5 == (ScaleAnimationBase *)0x0) goto code_?;
  (pSVar5->fields)._._._._.m_CachedPtr = pSVar6;
  (this->fields).os = (OperatingSystem_1 *)pSVar5;
  this_00 = (Il2CppClass *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this_00,0.0,unaff_ESI);
  (this->fields).device = (Device *)this_00;
  DVar7 = UnityEngine.CoreModule.dll::UnityEngine::Input::Input_get_deviceOrientation
                    ((MethodInfo *)0x0);
  switch(DVar7) {
  case DeviceOrientation__Enum_Portrait:
  case DeviceOrientation__Enum_PortraitUpsideDown:
    pDVar8 = (this->fields).device;
    pSVar6 = StringLiteral_portrait;
    break;
  case DeviceOrientation__Enum_LandscapeLeft:
  case DeviceOrientation__Enum_LandscapeRight:
    pDVar8 = (this->fields).device;
    pSVar6 = StringLiteral_landscape;
    break;
  default:
    goto code_?;
  }
  if (pDVar8 != (Device *)0x0) {
    (pDVar8->fields).orientation = pSVar6;
code_?:
    this_00 = (Il2CppClass *)
              UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetDeviceModel
                        ((MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    bVar9 = mscorlib.dll::System::String::String_op_Inequality
                      ((String *)this_00,StringLiteral_n_a,(MethodInfo *)0x0);
    if (bVar9 != 0) {
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      bVar9 = mscorlib.dll::System::String::String_op_Inequality
                        ((String *)this_00,StringLiteral_System_Product_Name__System_manu,
                         (MethodInfo *)0x0);
      if (bVar9 != 0) {
        pDVar8 = (this->fields).device;
        if (pDVar8 == (Device *)0x0) goto code_?;
        (pDVar8->fields).model = (String *)this_00;
      }
    }
    pDVar8 = (this->fields).device;
    fVar10 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetBatteryLevel
                       ((MethodInfo *)0x0);
    this_00 = (Il2CppClass *)0x0;
    if (pDVar8 != (Device *)0x0) {
      (pDVar8->fields).battery_level = fVar10 * _UNK_?;
      pDVar8 = (this->fields).device;
      BStack_1 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetBatteryStatus
                           ((MethodInfo *)0x0);
      this_00 = (Il2CppClass *)func_?();
      if (this_00 != (Il2CppClass *)0x0) {
        pSVar6 = (String *)(**(code **)&((Il2CppClass_0 *)&this_00->image)->image[4].dynamic)();
        pBVar11 = (BatteryStatus__Enum *)func_?();
        BStack_1 = *pBVar11;
        if (pDVar8 != (Device *)0x0) {
          (pDVar8->fields).battery_status = pSVar6;
          iVar12 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::
                   SystemInfo_GetPhysicalMemoryMB((MethodInfo *)0x0);
          if (iVar12 != 0) {
            pDVar8 = (this->fields).device;
            iVar12 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::
                     SystemInfo_GetPhysicalMemoryMB((MethodInfo *)0x0);
            this_00 = (Il2CppClass *)0x0;
            if (pDVar8 == (Device *)0x0) goto code_?;
            (pDVar8->fields).memory_size = (longlong)iVar12 * 0x100000;
          }
          pDVar8 = (this->fields).device;
          DStack_2 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::SystemInfo_GetDeviceType
                               ((MethodInfo *)0x0);
          this_00 = (Il2CppClass *)func_?();
          if (this_00 != (Il2CppClass *)0x0) {
            pSVar6 = (String *)(**(code **)&((Il2CppClass_0 *)&this_00->image)->image[4].dynamic)();
            method_01 = (MethodInfo *)&UNK_?;
            pDVar13 = (DeviceType__Enum *)func_?();
            DStack_2 = *pDVar13;
            if (pDVar8 != (Device *)0x0) {
              (pDVar8->fields).device_type = pSVar6;
              this_00 = (Il2CppClass *)(this->fields).device;
              pSVar6 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::
                       SystemInfo_GetProcessorType((MethodInfo *)0x0);
              if (this_00 != (Il2CppClass *)0x0) {
                *(String **)&(this_00->this_arg).attrs = pSVar6;
                pDVar8 = (this->fields).device;
                if (pDVar8 != (Device *)0x0) {
                  (pDVar8->fields).simulator = 0;
                  pIVar14 = (Il2CppClass *)func_?();
                  ScaleAnimationBase::ScaleAnimationBase_Play
                            ((ScaleAnimationBase *)pIVar14,0.0,method_01);
                  pcVar15 = (char *)UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::
                                    SystemInfo_GetGraphicsDeviceID((MethodInfo *)0x0);
                  this_00 = pIVar14;
                  if (pIVar14 != (Il2CppClass *)0x0) {
                    pIVar14->namespaze = pcVar15;
                    pSVar6 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::
                             SystemInfo_GetGraphicsDeviceName((MethodInfo *)0x0);
                    pIVar14->name = (char *)pSVar6;
                    iVar12 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::
                             SystemInfo_GetGraphicsDeviceVendorID((MethodInfo *)0x0);
                    (pIVar14->byval_arg).data.__klassIndex = iVar12;
                    pSVar6 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::
                             SystemInfo_GetGraphicsDeviceVendor((MethodInfo *)0x0);
                    *(String **)&(pIVar14->byval_arg).attrs = pSVar6;
                    iVar12 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::
                             SystemInfo_GetGraphicsMemorySize((MethodInfo *)0x0);
                    (pIVar14->this_arg).data.__klassIndex = iVar12;
                    bVar9 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::
                            SystemInfo_GetGraphicsMultiThreaded((MethodInfo *)0x0);
                    *(bool *)&pIVar14->element_class = bVar9;
                    NStack_3 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::
                                SystemInfo_GetNPOTSupport((MethodInfo *)0x0);
                    piVar16 = (int *)func_?();
                    if (piVar16 != (int *)0x0) {
                      this_00 = (Il2CppClass *)(**(code **)(*piVar16 + 0xd8))();
                      pNVar17 = (NPOTSupport__Enum *)func_?();
                      NStack_3 = *pNVar17;
                      pIVar14->declaringType = this_00;
                      pIVar18 = (Il2CppClass *)
                                UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::
                                SystemInfo_GetGraphicsDeviceVersion((MethodInfo *)0x0);
                      pIVar14->castClass = pIVar18;
                      GStack_4 = UnityEngine.CoreModule.dll::UnityEngine::SystemInfo::
                                  SystemInfo_GetGraphicsDeviceType((MethodInfo *)0x0);
                      piVar16 = (int *)func_?(
                                                  TypeInfo__UnityEngine__Rendering__GraphicsDeviceType
                                                  ,&GStack_4);
                      if (piVar16 != (int *)0x0) {
                        uVar19 = (**(code **)(*piVar16 + 0xd8))();
                        pGVar20 = (GraphicsDeviceType__Enum *)func_?();
                        GStack_4 = *pGVar20;
                        (pIVar14->this_arg).attrs = (short)uVar19;
                        (pIVar14->this_arg).type = (char)((uint)uVar19 >> 0x10);
                        (pIVar14->this_arg).field_0x7 = (char)((uint)uVar19 >> 0x18);
                        (this->fields).gpu = (Gpu *)pIVar14;
                        method_02 = TypeInfo__Sentry__App;
                        pSVar5 = (ScaleAnimationBase *)func_?();
                        ScaleAnimationBase::ScaleAnimationBase_Play
                                  (pSVar5,0.0,(MethodInfo *)method_02);
                        (this->fields).app = (App *)pSVar5;
                        if ((((uint)(TypeInfo__System__DateTimeOffset->vtable).Equals.methodPtr &
                             0x2000000) != 0) &&
                           ((TypeInfo__System__DateTimeOffset->_1).cctor_started == 0)) {
                          func_?();
                        }
                        mscorlib.dll::System::DateTimeOffset::DateTimeOffset_get_UtcNow
                                  ((DateTimeOffset *)&stack0xffffff9c,(MethodInfo *)0x0);
                        UnityEngine.CoreModule.dll::UnityEngine::Time::
                        Time_1_get_realtimeSinceStartup((MethodInfo *)0x0);
                        func_?();
                        pIVar14 = (Il2CppClass *)0x0;
                        iVar12 = func_?();
                        this_00 = (Il2CppClass *)0x0;
                        if (pSVar5 != (ScaleAnimationBase *)0x0) {
                          (pSVar5->fields).state = iVar12;
                          this_00 = pIVar14;
                          if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr &
                               0x2000000) != 0) &&
                             ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
                            this_00 = (Il2CppClass *)TypeInfo__UnityEngine__Debug;
                            func_?();
                          }
                          bVar9 = UnityEngine.CoreModule.dll::UnityEngine::Debug::
                                  Debug_1_get_isDebugBuild((MethodInfo *)0x0);
                          pAVar21 = (this->fields).app;
                          if (bVar9 == 0) {
                            if (pAVar21 != (App *)0x0) {
                              (pAVar21->fields).build_type = StringLiteral_release;
                              return;
                            }
                          }
                          else if (pAVar21 != (App *)0x0) {
                            (pAVar21->fields).build_type = StringLiteral_debug;
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
        }
      }
    }
  }
code_?:
  bVar22 = 0;
  uVar23 = func_?();
  puVar24 = (uint *)uVar23;
  bVar25 = CARRY1(*unaff_EBX,extraout_CH) || CARRY1(*unaff_EBX + extraout_CH,bVar22);
  *unaff_EBX = *unaff_EBX + extraout_CH + bVar22;
  bVar26 = (byte)((uint)unaff_EBX >> 8);
  bVar22 = *(char *)&((Il2CppClass_0 *)&this_00->image)->image + bVar26;
  bVar27 = CARRY1(*(byte *)&((Il2CppClass_0 *)&this_00->image)->image,bVar26) ||
           CARRY1(bVar22,bVar25);
  *(byte *)&((Il2CppClass_0 *)&this_00->image)->image = bVar22 + bVar25;
  bVar22 = *unaff_EBX;
  bVar26 = *unaff_EBX;
  *unaff_EBX = bVar26 + extraout_CH + bVar27;
  *(char *)(puVar24 + 4) =
       (char)puVar24[4] + (char)((ulonglong)uVar23 >> 0x20) +
       (CARRY1(bVar22,extraout_CH) || CARRY1(bVar26 + extraout_CH,bVar27));
  bVar25 = (uint)((ulonglong)uVar23 >> 0x20) < *puVar24;
  uVar28 = *puVar24;
  bVar22 = *unaff_EBX;
  bVar26 = *unaff_EBX;
  *unaff_EBX = bVar26 + extraout_CH + bVar25;
  unaff_EBX[0x10] =
       unaff_EBX[0x10] + (char)((ulonglong)uVar23 >> 8) +
       (CARRY1(bVar22,extraout_CH) || CARRY1(bVar26 + extraout_CH,bVar25));
  sVar29 = (((short)((ulonglong)uVar23 >> 0x20) - (short)uVar28) - (short)*puVar24 & 3U) -
          ((ushort)*puVar24 & 3);
  *(ushort *)puVar24 = (ushort)*puVar24 + (ushort)(0 < sVar29) * sVar29;
  pcVar30 = (code *)swi(3);
  (*pcVar30)();
  return;
}

