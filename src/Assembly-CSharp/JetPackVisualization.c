
/* Void DoOverheatBlinking() */

void Assembly-CSharp.dll::JetPackVisualization::JetPackVisualization_DoOverheatBlinking
               (JetPackVisualization *this,MethodInfo *method)

{
  this_00 = (this->fields).vehicleBlinker;
  if (this_00 != (VehicleBlinker *)0x0) {
    BlinkerBase::BlinkerBase_StartBlinking
              ((BlinkerBase *)this_00,BlinkType__Enum_Damage,0.3,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void EnableThruster(Boolean) */

void Assembly-CSharp.dll::JetPackVisualization::JetPackVisualization_EnableThruster
               (JetPackVisualization *this,bool enable,MethodInfo *method)

{
  pJVar1 = this;
  uStack_2 = 0xffffffff;
  puStack_3 = &DAT_?;
  uStack_4 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_4;
  puStack_5 = &stack0xffffffb8;
  pJStack_6 = this;
  puVar7 = &stack0xffffffb8;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::ParticleSystem>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::ParticleSystem>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::ParticleSystem>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::ParticleSystem>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar7 = puStack_5;
  }
  puStack_5 = puVar7;
  method_00 = (MethodInfo *)(pJVar1->fields).thrusters;
  this = (JetPackVisualization *)0x0;
  LStack_8._list = (List_1_System_Object_ *)0x0;
  LStack_8._index = 0;
  LStack_8._version = 0;
  LStack_8._current = (Object *)0x0;
  if (method_00 != (MethodInfo *)0x0) {
    pLVar9 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_10,
                        (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                        method_00,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::ParticleSystem>__GetEnumerator__
                       );
    LStack_8._list = (List_1_System_Object_ *)pLVar9->_list;
    LStack_8._index = pLVar9->_index;
    LStack_8._version = pLVar9->_version;
    LStack_8._current = *(Object **)&pLVar9->_current;
    LStack_10._version = 0;
    uStack_2 = 1;
    LStack_10._current = (RegexCharClass_SingleRange)&LStack_8;
    while( true ) {
      bVar11 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_8,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::ParticleSystem>__MoveNext__
                        );
      if (bVar11 == 0) break;
      if ((RegexCharClass_SingleRange)LStack_8._current == (RegexCharClass_SingleRange)0x0)
      goto code_?;
      this = (JetPackVisualization *)
             UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
             ParticleSystem_get_collision((ParticleSystem *)LStack_8._current,(MethodInfo *)0x0);
      method_00 = _enable;
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+EmissionModule::
      ParticleSystem_EmissionModule_set_enabled_Injected
                ((ParticleSystem_EmissionModule *)&this,(bool)_enable,(MethodInfo *)0x0);
    }
    uStack_2 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)&LStack_8,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::ParticleSystem>__Dispose__
               ,method_00);
    uStack_2 = 0xffffffff;
    this_00 = (pJVar1->fields).moving;
    if (enable == 0) {
      if (this_00 != (AudioSource *)0x0) {
        value = 0.0;
code_?:
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_volume
                  (this_00,value,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_4;
        return;
      }
    }
    else if (this_00 != (AudioSource *)0x0) {
      value = 1.0;
      goto code_?;
    }
  }
code_?:
  uVar12 = func_?();
  func_?(uVar12);
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void HandleJetMode() */

void Assembly-CSharp.dll::JetPackVisualization::JetPackVisualization_HandleJetMode
               (JetPackVisualization *this,MethodInfo *method)

{
  if (((this->fields).modeChanged != 0) || ((this->fields).mode == 2)) {
    (this->fields).modeChanged = 0;
  }
  return;
}


/* Void Init(Boolean, Transform, MVRuntimeDataVariable) */

void Assembly-CSharp.dll::JetPackVisualization::JetPackVisualization_Init
               (JetPackVisualization *this,bool isInSpawner,Transform *jetPackCubeModel,
               MVRuntimeDataVariable *jetMode,MethodInfo *method)

{
  pIStack_1 = (Il2CppClass *)0xffffffff;
  pcStack_2 = &DAT_?;
  pIStack_3 = (InvokerMethod)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pIStack_3;
  pIStack_4 = (Il2CppMethodPointer)&stack0xffffff9c;
  pIVar5 = (Il2CppMethodPointer)&stack0xffffff9c;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::ParticleSystem>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::ParticleSystem>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::ParticleSystem>__get_Current__
                   );
    func_?(&
                    UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______
                   );
    func_?(&TypeInfo__MVJetPack__JetModeType);
    func_?(&MethodInfo__JetPackVisualization___Init_b__16_0_System__Object_);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::ParticleSystem>__GetEnumerator__
                   );
    func_?(&TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    cRam_? = '\x01';
    pIVar5 = pIStack_4;
  }
  pIStack_4 = pIVar5;
  pMStack_6 = (MVRuntimeDataVariable_OnChangeDelegate__Class *)0x0;
  if (jetPackCubeModel == (Transform *)0x0) {
code_?:
    uVar7 = func_?();
    uVar8 = func_?(uVar7);
  }
  else {
    pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                       ((Vector3 *)&stack0xffffffc8,jetPackCubeModel,(MethodInfo *)0x0);
    value_00 = *pVVar9;
    pQVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localRotation
                       ((Quaternion *)&stack0xffffffc4,jetPackCubeModel,(MethodInfo *)0x0);
    pLVar11 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)pQVar10->x;
    fVar12 = pQVar10->y;
    fVar13 = pQVar10->z;
    RVar14 = (RegexCharClass_SingleRange)pQVar10->w;
    method_00 = (MethodInfo *)&UNK_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
              (jetPackCubeModel,(this->fields).JetPackRoot,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
              (jetPackCubeModel,value_00,(MethodInfo *)0x0);
    value.y = fVar12;
    value.x = (float)pLVar11;
    value.z = fVar13;
    value.w = (float)RVar14;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
              (jetPackCubeModel,value,(MethodInfo *)0x0);
    if (jetMode == (MVRuntimeDataVariable *)0x0) goto code_?;
    pMStack_6 = TypeInfo__MVRuntimeDataVariable__OnChangeDelegate;
    a = (jetMode->fields).OnChange;
    this_01 = (VideoCapture_OnVideoCaptureResourceCreatedCallback *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
    VideoCapture+OnVideoCaptureResourceCreatedCallback::
    VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
              (this_01,(Object *)this,
               MethodInfo__JetPackVisualization___Init_b__16_0_System__Object_,(MethodInfo *)0x0);
    pJVar15 = (JetPackVisualization *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)this_01,(MethodInfo *)0x0);
    this_03 = (JetPackVisualization *)0x0;
    if (pJVar15 == (JetPackVisualization *)0x0) {
      (jetMode->fields).OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
    }
    else {
      if ((MVRuntimeDataVariable_OnChangeDelegate__Class *)pJVar15->klass ==
          TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
        this_03 = pJVar15;
      }
      if (this_03 == (JetPackVisualization *)0x0) {
        func_?();
        goto code_?;
      }
      (jetMode->fields).OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)this_03;
      this_03 = (JetPackVisualization *)0x0;
      if ((MVRuntimeDataVariable_OnChangeDelegate__Class *)pJVar15->klass ==
          TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
        this_03 = pJVar15;
      }
      if (this_03 == (JetPackVisualization *)0x0) goto code_?;
    }
    func_?();
    (this_03->fields)._.isInSpawner = isInSpawner;
    if (isInSpawner != 0) {
      jetPackCubeModel._0_1_ = 0;
code_?:
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)this_03,(bool)jetPackCubeModel,(MethodInfo *)0x0);
      pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this_03,(MethodInfo *)0x0);
      if (pTVar16 != (Transform *)0x0) {
        pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           ((Vector3 *)&stack0xffffffb8,pTVar16,(MethodInfo *)0x0);
        fVar13 = pVVar9->y;
        fVar12 = pVVar9->z;
        (this_03->fields).prevWorldPosition.x = pVVar9->x;
        (this_03->fields).prevWorldPosition.y = fVar13;
        (this_03->fields).prevWorldPosition.z = fVar12;
        *unaff_FS_OFFSET = pIStack_3;
        return;
      }
      goto code_?;
    }
    pLVar11 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this_03->fields).thrusters;
    if (pLVar11 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
    goto code_?;
    pLVar17 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                         *)&stack0xffffffc4,pLVar11,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::ParticleSystem>__GetEnumerator__
                       );
    pIStack_1 = (Il2CppClass *)0x1;
    RVar14 = pLVar17->_current;
    while( true ) {
      bVar18 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffa8,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::ParticleSystem>__MoveNext__
                        );
      if (bVar18 == 0) break;
      if (RVar14 == (RegexCharClass_SingleRange)0x0) goto code_?;
      RVar19 = RVar14;
      pMStack_6 = (MVRuntimeDataVariable_OnChangeDelegate__Class *)
                   UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
                   ParticleSystem_get_collision((ParticleSystem *)RVar14,(MethodInfo *)0x0);
      method_00 = (MethodInfo *)&pMStack_6;
      fVar12 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
               ParticleSystem_MainModule_get_startSizeMultiplier_Injected
                         ((ParticleSystem_MainModule *)method_00,(MethodInfo *)0x0);
      (this_03->fields).originalMaxSize = fVar12;
      if (RVar14 == (RegexCharClass_SingleRange)0x0) goto code_?;
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
      ParticleSystem_get_collision((ParticleSystem *)RVar14,(MethodInfo *)0x0);
      fVar12 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+EmissionModule::
               ParticleSystem_EmissionModule_get_rateOverTimeMultiplier_Injected
                         ((ParticleSystem_EmissionModule *)&stack0xffffffe4,(MethodInfo *)0x0);
      (this_03->fields).originalMaxEmission = fVar12;
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play_1
                ((ParticleSystem *)RVar14,(MethodInfo *)0x0);
      RVar14 = RVar19;
    }
    pIStack_1 = (Il2CppClass *)0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)&stack0xffffffa8,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::ParticleSystem>__Dispose__
               ,method_00);
    pIStack_1 = (Il2CppClass *)0xffffffff;
    pOVar20 = MVRuntimeDataVariable::MVRuntimeDataVariable_get_Value(jetMode,(MethodInfo *)0x0);
    uVar8 = CONCAT44(TypeInfo__MVJetPack__JetModeType,pOVar20);
    if (pOVar20 == (Object *)0x0) goto code_?;
    if ((pOVar20->klass->_0).element_class == (TypeInfo__MVJetPack__JetModeType->_0).element_class) {
      pbVar21 = (byte *)func_?(pOVar20);
      JetPackVisualization_OnJetModeChange(this_03,(uint)*pbVar21,(MethodInfo *)0x0);
      this_00 = (this_03->fields).moving;
      if (this_00 != (AudioSource *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)this_00,1,(MethodInfo *)0x0);
        pTVar16 = (this_03->fields).JetPackRoot;
        pVVar22 = (this_03->fields).vehicleBlinker;
        if (pTVar16 != (Transform *)0x0) {
          this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pTVar16,(MethodInfo *)0x0);
          if (this_02 != (GameObject *)0x0) {
            pMVar23 = (MeshFilter__Array *)
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                      GameObject_GetComponentsInChildren
                                (this_02,
                                 UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______
                                );
            if (pVVar22 != (VehicleBlinker *)0x0) {
              (pVVar22->fields)._.meshFilters = pMVar23;
              func_?(&(pVVar22->fields)._.meshFilters,pMVar23);
              pVVar22 = (this_03->fields).vehicleBlinker;
              if (pVVar22 != (VehicleBlinker *)0x0) {
                (pVVar22->fields)._.visible = 1;
                jetPackCubeModel._0_1_ = 1;
                goto code_?;
              }
            }
          }
        }
      }
      goto code_?;
    }
  }
  func_?(uVar8);
code_?:
  func_?();
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
  return;
}


/* Void JetPackPitch() */

void Assembly-CSharp.dll::JetPackVisualization::JetPackVisualization_JetPackPitch
               (JetPackVisualization *this,MethodInfo *method)

{
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (pTVar1 != (Transform *)0x0) {
    pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                       ((Quaternion *)&stack0xffffffc4,pTVar1,(MethodInfo *)0x0);
    puVar3 = (undefined *)pQVar2->y;
    fVar4 = pQVar2->w;
    if (cRam_? == '\0') {
      puVar3 = &UNK_?;
      func_?();
      cRam_? = '\x01';
    }
    pVVar5 = &TypeInfo__UnityEngine__Vector3->static_fields->forwardVector;
    uVar6 = pVVar5->y;
    rotation.y = (float)puVar3;
    rotation.x = (float)uVar6;
    rotation.z = 0.0;
    rotation.w = fVar4;
    UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
              (&VStack_7,rotation,*pVVar5,(MethodInfo *)0x0);
    puVar8 = (undefined8 *)func_?();
    uVar9 = *puVar8;
    fVar4 = *(float *)(puVar8 + 1);
    puVar8 = (undefined8 *)func_?();
    VStack_7._0_8_ = *puVar8;
    VStack_7.z = *(float *)(puVar8 + 1);
    fStack_10 = (this->fields).smoothPitchFactor;
    fStack_11 = (this->fields).smoothMoveSpeed;
    fStack_12 = (this->fields).pitchFactor;
    fStack_13 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                          ((MethodInfo *)0x0);
    fStack_14 = (float)uVar9;
    fStack_15 = (float)((ulonglong)uVar9 >> 0x20);
    fVar16 = fStack_13 * (this->fields).pitchSpeedTime;
    if (fVar16 < 0.0) {
      fVar16 = 0.0;
    }
    else if (_UNK_? < fVar16) {
      fVar16 = _UNK_?;
    }
    fVar17 = fVar16 * _UNK_? * fVar16 * fVar16 + fVar16 * _UNK_? * fVar16;
    fVar16 = (float)((uint)(this->fields).pitchMax ^
                    __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
    pTVar1 = (this->fields).JetPackRoot;
    fStack_11 = (_UNK_? - fVar17) * fStack_10 +
               fVar17 * (VStack_7.y * fStack_15 + VStack_7.x * fStack_14 + VStack_7.z * fVar4) *
                       fStack_11 * fStack_12;
    (this->fields).smoothPitchFactor = fStack_11;
    if ((fStack_11 < fVar16) || (fVar16 = (this->fields).pitchMax, fVar16 < fStack_11)) {
      fStack_11 = fVar16;
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                       ((Quaternion *)&stack0xffffffc4,fStack_11,
                        TypeInfo__UnityEngine__Vector3->static_fields->rightVector,(MethodInfo *)0x0
                       );
    if (pTVar1 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                (pTVar1,*pQVar2,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void JetPackRoll() */

void Assembly-CSharp.dll::JetPackVisualization::JetPackVisualization_JetPackRoll
               (JetPackVisualization *this,MethodInfo *method)

{
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (pTVar1 != (Transform *)0x0) {
    pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                       ((Quaternion *)&stack0xffffffb0,pTVar1,(MethodInfo *)0x0);
    fVar3 = pQVar2->x;
    fVar4 = pQVar2->y;
    fVar5 = pQVar2->z;
    fVar6 = pQVar2->w;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    rotation.y = fVar4;
    rotation.x = fVar3;
    rotation.z = fVar5;
    rotation.w = fVar6;
    UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
              (&VStack_7,rotation,TypeInfo__UnityEngine__Vector3->static_fields->rightVector,
               (MethodInfo *)0x0);
    puVar8 = (undefined8 *)func_?();
    VStack_7._4_8_ = *puVar8;
    fStack_9 = *(float *)(puVar8 + 1);
    puVar8 = (undefined8 *)func_?(&stack0xffffffb0,&(this->fields).posDiff);
    uVar10 = *puVar8;
    fVar3 = *(float *)(puVar8 + 1);
    fStack_11 = (this->fields).smoothRollFactor;
    fStack_12 = (this->fields).smoothMoveSpeed;
    fStack_13 = (this->fields).pitchFactor;
    fStack_14 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                          ((MethodInfo *)0x0);
    fStack_15 = (float)((ulonglong)uVar10 >> 0x20);
    fStack_16 = (float)uVar10;
    fVar4 = fStack_14 * (this->fields).pitchSpeedTime;
    if (fVar4 < 0.0) {
      fVar4 = 0.0;
    }
    else if (_UNK_? < fVar4) {
      fVar4 = _UNK_?;
    }
    fVar4 = fVar4 * _UNK_? * fVar4 * fVar4 + fVar4 * _UNK_? * fVar4;
    pTVar1 = (this->fields).JetPackRoot;
    (this->fields).smoothRollFactor =
         (_UNK_? - fVar4) * fStack_11 +
         fVar4 * (float)((uint)(VStack_7.y * fStack_16 + VStack_7.z * fStack_15 +
                               fStack_9 * fVar3) ^
                        __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field) *
                 fStack_12 * fStack_13;
    if (pTVar1 != (Transform *)0x0) {
      pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localRotation
                         ((Quaternion *)&stack0xffffffb0,pTVar1,(MethodInfo *)0x0);
      fVar3 = (float)((uint)(this->fields).pitchMax ^
                     __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
      fVar4 = pQVar2->x;
      fVar5 = pQVar2->y;
      fVar6 = pQVar2->z;
      fVar17 = pQVar2->w;
      fStack_12 = (this->fields).smoothRollFactor;
      if ((fStack_12 < fVar3) || (fVar3 = (this->fields).pitchMax, fVar3 < fStack_12)) {
        fStack_12 = fVar3;
      }
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                         ((Quaternion *)&stack0xffffffa0,fStack_12,
                          TypeInfo__UnityEngine__Vector3->static_fields->forwardVector,
                          (MethodInfo *)0x0);
      VStack_7.x = pQVar2->x;
      fVar3 = pQVar2->y;
      fVar18 = pQVar2->z;
      VStack_7.y = pQVar2->y;
      VStack_7.z = pQVar2->z;
      fStack_9 = pQVar2->w;
      fStack_11 = (fStack_9 * fVar4 + VStack_7.x * fVar17 + fVar18 * fVar5) - fVar3 * fVar6;
      value.y = (fVar3 * fVar17 + fVar5 * fStack_9 + fVar6 * pQVar2->x) - fVar18 * fVar4;
      value.x = fStack_11;
      value.z = (fVar18 * fVar17 + fVar6 * fStack_9 + fVar3 * fVar4) - fVar5 * pQVar2->x;
      value.w = ((fStack_9 * fVar17 - fVar4 * VStack_7.x) - fVar3 * fVar5) - fVar6 * fVar18;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                (pTVar1,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* Void OnJetModeChange(MVJetPack+JetModeType) */

void Assembly-CSharp.dll::JetPackVisualization::JetPackVisualization_OnJetModeChange
               (JetPackVisualization *this,MVJetPack_JetModeType__Enum newMode,MethodInfo *method)

{
  if ((this->fields).mode != (undefined1)newMode) {
    if ((this->fields).mode == 2) {
      JetPackVisualization_SetMaxSizeForThrusters
                (this,(this->fields).originalMaxSize,(this->fields).originalMaxEmission,
                 (MethodInfo *)0x0);
    }
    MVar1 = newMode & 0xff;
    if (MVar1 == MVJetPack_JetModeType__Enum_Off) {
      JetPackVisualization_EnableThruster(this,0,(MethodInfo *)0x0);
    }
    else {
      if (MVar1 == MVJetPack_JetModeType__Enum_On) {
        JetPackVisualization_EnableThruster(this,1,(MethodInfo *)0x0);
        (this->fields).mode = (undefined1)newMode;
        return;
      }
      if (MVar1 == MVJetPack_JetModeType__Enum_Overheating) {
        JetPackVisualization_SetMaxSizeForThrusters(this,3.0,10.0,(MethodInfo *)0x0);
        (this->fields).mode = (undefined1)newMode;
        return;
      }
    }
  }
  (this->fields).mode = (undefined1)newMode;
  return;
}


/* Void SetMaxSizeForThrusters(Single, Single) */

void Assembly-CSharp.dll::JetPackVisualization::JetPackVisualization_SetMaxSizeForThrusters
               (JetPackVisualization *this,float maxSize,float maxEmission,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb4;
  puVar5 = &stack0xffffffb4;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::ParticleSystem>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::ParticleSystem>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::ParticleSystem>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::ParticleSystem>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  PStack_6.m_ParticleSystem = (ParticleSystem *)0x0;
  PStack_7.m_ParticleSystem = (ParticleSystem *)0x0;
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).thrusters;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_9,this_00,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::ParticleSystem>__GetEnumerator__
                       );
    this_01 = pLVar8->_current;
    LStack_9._version = 0;
    uStack_1 = 1;
    LStack_9._current = (RegexCharClass_SingleRange)&stack0xffffffc0;
    while( true ) {
      bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffc0,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::ParticleSystem>__MoveNext__
                        );
      if (bVar10 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&stack0xffffffc0,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::ParticleSystem>__Dispose__
                   ,unaff_EDI);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if (this_01 == (RegexCharClass_SingleRange)0x0) break;
      PStack_6.m_ParticleSystem =
           (ParticleSystem *)
           UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
           ParticleSystem_get_collision((ParticleSystem *)this_01,(MethodInfo *)0x0);
      unaff_EDI = (MethodInfo *)maxSize;
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
      ParticleSystem_MainModule_set_startSizeMultiplier_Injected
                (&PStack_6,maxSize,(MethodInfo *)0x0);
      PStack_7.m_ParticleSystem =
           (ParticleSystem *)
           UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
           ParticleSystem_get_collision((ParticleSystem *)this_01,(MethodInfo *)0x0);
      this_01.First = 0;
      this_01.Last = 0;
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+EmissionModule::
      ParticleSystem_EmissionModule_set_rateOverTimeMultiplier_Injected
                (&PStack_7,maxEmission,(MethodInfo *)0x0);
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void ShowOverHeatWarning() */

void Assembly-CSharp.dll::JetPackVisualization::JetPackVisualization_ShowOverHeatWarning
               (JetPackVisualization *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__NotificationController);
    cRam_? = '\x01';
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  if (_UNK_? < fVar1 - (this->fields).lastOverHeatNotificationTime) {
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    (this->fields).lastOverHeatNotificationTime = fVar1;
    if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__NotificationController);
    }
    NotificationController::NotificationController_PushNotification_1
              (NotificationType__Enum_JetPackOverheating,NotificationLifetime__Enum_High,
               (MethodInfo *)0x0);
  }
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::JetPackVisualization::JetPackVisualization_Update
               (JetPackVisualization *this,MethodInfo *method)

{
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xffffffd8,this_00,(MethodInfo *)0x0);
    uVar2 = pVVar1->x;
    uVar3 = pVVar1->y;
    fVar4 = pVVar1->z;
    uVar5 = (this->fields).prevWorldPosition.x;
    uVar6 = (this->fields).prevWorldPosition.y;
    fVar7 = (this->fields).prevWorldPosition.z;
    (this->fields).posDiff.x = (float)uVar2 - (float)uVar5;
    (this->fields).posDiff.y = (float)uVar3 - (float)uVar6;
    (this->fields).posDiff.z = fVar4 - fVar7;
    (this->fields).prevWorldPosition.x = (float)uVar2;
    (this->fields).prevWorldPosition.y = (float)uVar3;
    (this->fields).prevWorldPosition.z = fVar4;
    fVar8 = (float10)func_?(&(this->fields).posDiff);
    fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fVar4 = (this->fields).smoothMoveSpeed;
    fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fVar7 = fVar7 * (this->fields).smoothMoveSpeedTime;
    if (fVar7 < 0.0) {
      fVar7 = 0.0;
    }
    else if (_UNK_? < fVar7) {
      fVar7 = _UNK_?;
    }
    fVar7 = fVar7 * _UNK_? * fVar7 * fVar7 + fVar7 * _UNK_? * fVar7;
    (this->fields).smoothMoveSpeed =
         (_UNK_? - fVar7) * fVar4 + fVar7 * ((float)fVar8 / fVar9);
    JetPackVisualization_JetPackPitch(this,(MethodInfo *)0x0);
    JetPackVisualization_JetPackRoll(this,(MethodInfo *)0x0);
    if (((this->fields).modeChanged != 0) || ((this->fields).mode == 2)) {
      (this->fields).modeChanged = 0;
    }
    return;
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void UpdateSpartialValues() */

void Assembly-CSharp.dll::JetPackVisualization::JetPackVisualization_UpdateSpartialValues
               (JetPackVisualization *this,MethodInfo *method)

{
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xffffffd8,this_00,(MethodInfo *)0x0);
    uVar2 = pVVar1->x;
    uVar3 = pVVar1->y;
    fVar4 = pVVar1->z;
    uVar5 = (this->fields).prevWorldPosition.x;
    uVar6 = (this->fields).prevWorldPosition.y;
    fVar7 = (this->fields).prevWorldPosition.z;
    (this->fields).posDiff.x = (float)uVar2 - (float)uVar5;
    (this->fields).posDiff.y = (float)uVar3 - (float)uVar6;
    (this->fields).posDiff.z = fVar4 - fVar7;
    (this->fields).prevWorldPosition.x = (float)uVar2;
    (this->fields).prevWorldPosition.y = (float)uVar3;
    (this->fields).prevWorldPosition.z = fVar4;
    fVar8 = (float10)func_?(&(this->fields).posDiff);
    fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fVar4 = (this->fields).smoothMoveSpeed;
    fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fVar7 = fVar7 * (this->fields).smoothMoveSpeedTime;
    if (fVar7 < 0.0) {
      fVar7 = 0.0;
    }
    else if (_UNK_? < fVar7) {
      fVar7 = _UNK_?;
    }
    fVar7 = fVar7 * _UNK_? * fVar7 * fVar7 + fVar7 * _UNK_? * fVar7;
    (this->fields).smoothMoveSpeed =
         (_UNK_? - fVar7) * fVar4 + fVar7 * ((float)fVar8 / fVar9);
    return;
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void <Init>b__16_0(Object) */

void Assembly-CSharp.dll::JetPackVisualization::JetPackVisualization__Init_b__16_0
               (JetPackVisualization *this,Object *jetModeVal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (jetModeVal == (Object *)0x0) {
    uVar1 = func_?(&stack0xfffffff0);
    func_?(uVar1);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((jetModeVal->klass->_0).element_class != (TypeInfo__MVJetPack__JetModeType->_0).element_class)
  {
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  puVar3 = (uint8_t *)func_?();
  uVar4 = *puVar3;
  if ((this->fields).mode != uVar4) {
    if ((this->fields).mode == 2) {
      JetPackVisualization_SetMaxSizeForThrusters
                (this,(this->fields).originalMaxSize,(this->fields).originalMaxEmission,
                 (MethodInfo *)0x0);
    }
    if (uVar4 == 0) {
      JetPackVisualization_EnableThruster(this,0,(MethodInfo *)0x0);
    }
    else {
      if (uVar4 == 1) {
        JetPackVisualization_EnableThruster(this,1,(MethodInfo *)0x0);
        (this->fields).mode = 1;
        return;
      }
      if (uVar4 == 2) {
        JetPackVisualization_SetMaxSizeForThrusters(this,3.0,10.0,(MethodInfo *)0x0);
        (this->fields).mode = 2;
        return;
      }
    }
  }
  (this->fields).mode = uVar4;
  return;
}


/* JetPackVisualization() */

void Assembly-CSharp.dll::JetPackVisualization::JetPackVisualization__ctor
               (JetPackVisualization *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::ParticleSystem>__List__
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::ParticleSystem>);
    cRam_? = '\x01';
  }
  (this->fields).pitchMax = 60.0;
  (this->fields).pitchSpeedTime = 15.0;
  (this->fields).pitchFactor = 2.5;
  (this->fields).smoothMoveSpeedTime = 10.0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->zeroVector).y;
  fVar3 = (pVVar1->zeroVector).z;
  (this->fields).posDiff.x = (pVVar1->zeroVector).x;
  (this->fields).posDiff.y = fVar2;
  (this->fields).posDiff.z = fVar3;
  this_00 = (List_1_UnityEngine_ParticleSystem_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<UnityEngine::ParticleSystem>
                           );
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<UnityEngine::ParticleSystem>__List__);
  (this->fields).thrusters = this_00;
  func_?(&(this->fields).thrusters,this_00);
  (this->fields).mode = 3;
  VehicleVisualizationBase::VehicleVisualizationBase__ctor
            ((VehicleVisualizationBase *)this,(MethodInfo *)0x0);
  return;
}

