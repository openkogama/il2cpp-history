
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
  if (method_00 != (MethodInfo *)0x0) {
    pLVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_9,
                        (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                        method_00,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::ParticleSystem>__GetEnumerator__
                       );
    LStack_10._list = (List_1_System_Object_ *)pLVar8->_list;
    LStack_10._index = pLVar8->_index;
    LStack_10._version = pLVar8->_version;
    LStack_10._current = *(Object **)&pLVar8->_current;
    LStack_9._version = 0;
    uStack_2 = 1;
    LStack_9._current = (RegexCharClass_SingleRange)&LStack_10;
    while( true ) {
      bVar11 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_10,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::ParticleSystem>__MoveNext__
                        );
      if (bVar11 == 0) break;
      if ((RegexCharClass_SingleRange)LStack_10._current == (RegexCharClass_SingleRange)0x0)
      goto code_?;
      this = (JetPackVisualization *)
             UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
             ParticleSystem_get_collision((ParticleSystem *)LStack_10._current,(MethodInfo *)0x0);
      method_00 = _enable;
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+EmissionModule::
      ParticleSystem_EmissionModule_set_enabled_Injected
                ((ParticleSystem_EmissionModule *)&this,(bool)_enable,(MethodInfo *)0x0);
    }
    uStack_2 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)&LStack_10,
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
  pIStack_4 = (Il2CppMethodPointer)&stack0xffffff98;
  pIVar5 = (Il2CppMethodPointer)&stack0xffffff98;
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
  pPStack_6 = (ParticleSystem *)0x0;
  PStack_7.m_ParticleSystem = (ParticleSystem *)0x0;
  if (jetPackCubeModel != (Transform *)0x0) {
    pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                       ((Vector3 *)&stack0xffffffc4,jetPackCubeModel,(MethodInfo *)0x0);
    value_00 = *pVVar8;
    pQVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localRotation
                       ((Quaternion *)&stack0xffffffc0,jetPackCubeModel,(MethodInfo *)0x0);
    pLVar10 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)pQVar9->x;
    fVar11 = pQVar9->y;
    fVar12 = pQVar9->z;
    RVar13 = (RegexCharClass_SingleRange)pQVar9->w;
    method_00 = (MethodInfo *)&UNK_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
              (jetPackCubeModel,(this->fields).JetPackRoot,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
              (jetPackCubeModel,value_00,(MethodInfo *)0x0);
    value.y = fVar11;
    value.x = (float)pLVar10;
    value.z = fVar12;
    value.w = (float)RVar13;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
              (jetPackCubeModel,value,(MethodInfo *)0x0);
    if (jetMode != (MVRuntimeDataVariable *)0x0) {
      PStack_7.m_ParticleSystem =
           (ParticleSystem *)TypeInfo__MVRuntimeDataVariable__OnChangeDelegate;
      pMVar14 = (jetMode->fields).OnChange;
      this_01 = (VideoCapture_OnVideoCaptureResourceCreatedCallback *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
      VideoCapture+OnVideoCaptureResourceCreatedCallback::
      VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
                (this_01,(Object *)this,
                 MethodInfo__JetPackVisualization___Init_b__16_0_System__Object_,(MethodInfo *)0x0);
      pMVar14 = (MVRuntimeDataVariable_OnChangeDelegate *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pMVar14,(Delegate *)this_01,(MethodInfo *)0x0);
      uVar15 = CONCAT44(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate,pMVar14);
      if (pMVar14 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
        pMVar16 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
        (jetMode->fields).OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
      }
      else {
        pMVar16 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
        if (pMVar14->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
          pMVar16 = pMVar14;
        }
        if (pMVar16 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
        (jetMode->fields).OnChange = pMVar16;
        pMVar16 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
        if (pMVar14->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
          pMVar16 = pMVar14;
        }
        if (pMVar16 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
          func_?(pMVar14,TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
          goto code_?;
        }
      }
      func_?(&(jetMode->fields).OnChange,pMVar16);
      (this->fields)._.isInSpawner = isInSpawner;
      if (isInSpawner == 0) {
        pLVar10 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                  (this->fields).thrusters;
        if (pLVar10 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
          pLVar17 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                   RegularExpressions::RegexCharClass+SingleRange]::
                   List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                             ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                               *)&stack0xffffffc0,pLVar10,
                              MethodInfo__System__Collections__Generic__List<UnityEngine::ParticleSystem>__GetEnumerator__
                             );
          pIStack_1 = (Il2CppClass *)0x1;
          RVar13 = pLVar17->_current;
          while( true ) {
            bVar18 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                    ::List_1_T_Enumerator_System_Object__MoveNext
                              ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffa4,
                               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::ParticleSystem>__MoveNext__
                              );
            if (bVar18 == 0) break;
            if (RVar13 == (RegexCharClass_SingleRange)0x0) goto code_?;
            RVar19 = RVar13;
            pPStack_6 = (ParticleSystem *)
                         UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
                         ParticleSystem_get_collision((ParticleSystem *)RVar13,(MethodInfo *)0x0);
            method_00 = (MethodInfo *)&pPStack_6;
            fVar11 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
                     ParticleSystem_MainModule_get_startSizeMultiplier_Injected
                               ((ParticleSystem_MainModule *)method_00,(MethodInfo *)0x0);
            (this->fields).originalMaxSize = fVar11;
            PStack_7.m_ParticleSystem =
                 (ParticleSystem *)
                 UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
                 ParticleSystem_get_collision((ParticleSystem *)RVar13,(MethodInfo *)0x0);
            fVar11 = UnityEngine.ParticleSystemModule.dll::UnityEngine::
                     ParticleSystem+EmissionModule::
                     ParticleSystem_EmissionModule_get_rateOverTimeMultiplier_Injected
                               (&PStack_7,(MethodInfo *)0x0);
            (this->fields).originalMaxEmission = fVar11;
            UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play_1
                      ((ParticleSystem *)RVar13,(MethodInfo *)0x0);
            RVar13 = RVar19;
          }
          pIStack_1 = (Il2CppClass *)0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                    ((Object *)&stack0xffffffa4,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::ParticleSystem>__Dispose__
                     ,method_00);
          pIStack_1 = (Il2CppClass *)0xffffffff;
          pOVar20 = MVRuntimeDataVariable::MVRuntimeDataVariable_get_Value
                              (jetMode,(MethodInfo *)0x0);
          uVar15 = CONCAT44(TypeInfo__MVJetPack__JetModeType,pOVar20);
          if (pOVar20 != (Object *)0x0) {
            if ((pOVar20->klass->_0).element_class !=
                (TypeInfo__MVJetPack__JetModeType->_0).element_class) goto code_?;
            pbVar21 = (byte *)func_?(pOVar20);
            JetPackVisualization_OnJetModeChange(this,(uint)*pbVar21,(MethodInfo *)0x0);
            this_00 = (this->fields).moving;
            if (this_00 != (AudioSource *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                        ((Behaviour *)this_00,1,(MethodInfo *)0x0);
              pTVar22 = (this->fields).JetPackRoot;
              pVVar23 = (this->fields).vehicleBlinker;
              if (pTVar22 != (Transform *)0x0) {
                this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject((Component *)pTVar22,(MethodInfo *)0x0);
                if (this_02 != (GameObject *)0x0) {
                  pMVar24 = (MeshFilter__Array *)
                            UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_GetComponentsInChildren
                                      (this_02,
                                       UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______
                                      );
                  if (pVVar23 != (VehicleBlinker *)0x0) {
                    ppMVar25 = &(pVVar23->fields)._.meshFilters;
                    *ppMVar25 = pMVar24;
                    func_?(ppMVar25,pMVar24);
                    pVVar23 = (this->fields).vehicleBlinker;
                    if (pVVar23 != (VehicleBlinker *)0x0) {
                      (pVVar23->fields)._.visible = 1;
                      jetPackCubeModel._0_1_ = 1;
                      goto code_?;
                    }
                  }
                }
              }
            }
          }
        }
      }
      else {
        jetPackCubeModel._0_1_ = 0;
code_?:
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)this,(bool)jetPackCubeModel,(MethodInfo *)0x0);
        pTVar22 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this,(MethodInfo *)0x0);
        if (pTVar22 != (Transform *)0x0) {
          pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             ((Vector3 *)&stack0xffffffb4,pTVar22,(MethodInfo *)0x0);
          fVar12 = pVVar8->y;
          fVar11 = pVVar8->z;
          (this->fields).prevWorldPosition.x = pVVar8->x;
          (this->fields).prevWorldPosition.y = fVar12;
          (this->fields).prevWorldPosition.z = fVar11;
          *unaff_FS_OFFSET = pIStack_3;
          return;
        }
      }
    }
  }
code_?:
  uVar26 = func_?();
  uVar15 = func_?(uVar26);
code_?:
  func_?(uVar15);
  pcVar27 = (code *)swi(3);
  (*pcVar27)();
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
    fVar16 = (this->fields).pitchSpeedTime * fStack_13;
    if (fVar16 < 0.0) {
      fVar16 = 0.0;
    }
    else if (_UNK_? < fVar16) {
      fVar16 = _UNK_?;
    }
    fVar16 = fVar16 * _UNK_? * fVar16 * fVar16 + fVar16 * _UNK_? * fVar16;
    pTVar1 = (this->fields).JetPackRoot;
    fVar16 = (_UNK_? - fVar16) * fStack_10 +
            fVar16 * (VStack_7.y * fStack_15 + VStack_7.x * fStack_14 + VStack_7.z * fVar4) *
                    fStack_11 * fStack_12;
    fVar4 = (this->fields).pitchMax;
    fStack_11 = (float)((uint)fVar4 ^
                      __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
    (this->fields).smoothPitchFactor = fVar16;
    if ((fStack_11 <= fVar16) && (fStack_11 = fVar16, fVar4 < fVar16)) {
      fStack_11 = fVar4;
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
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
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
    fVar4 = (this->fields).pitchSpeedTime * fStack_14;
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
                        __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field) *
                 fStack_12 * fStack_13;
    if (pTVar1 != (Transform *)0x0) {
      pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localRotation
                         ((Quaternion *)&stack0xffffffb0,pTVar1,(MethodInfo *)0x0);
      fVar3 = (this->fields).pitchMax;
      fStack_12 = (float)((uint)fVar3 ^
                         __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
      fVar5 = pQVar2->x;
      fVar6 = pQVar2->y;
      fVar17 = pQVar2->z;
      fVar18 = pQVar2->w;
      fVar4 = (this->fields).smoothRollFactor;
      if ((fStack_12 <= fVar4) && (fStack_12 = fVar4, fVar3 < fVar4)) {
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
      fVar4 = pQVar2->z;
      VStack_7.y = pQVar2->y;
      VStack_7.z = pQVar2->z;
      fStack_9 = pQVar2->w;
      fStack_11 = (fStack_9 * fVar5 + VStack_7.x * fVar18 + fVar4 * fVar6) - fVar3 * fVar17;
      value.y = (fVar3 * fVar18 + fVar6 * fStack_9 + fVar17 * pQVar2->x) - fVar4 * fVar5;
      value.x = fStack_11;
      value.z = (fVar4 * fVar18 + fVar17 * fStack_9 + fVar3 * fVar5) - fVar6 * pQVar2->x;
      value.w = ((fStack_9 * fVar18 - fVar5 * VStack_7.x) - fVar3 * fVar6) - fVar17 * fVar4;
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
  uVar1 = (this->fields).mode;
  if (uVar1 != (undefined1)newMode) {
    if (uVar1 == MVJetPack_JetModeType__Enum_Overheating) {
      JetPackVisualization_SetMaxSizeForThrusters
                (this,(this->fields).originalMaxSize,(this->fields).originalMaxEmission,
                 (MethodInfo *)0x0);
    }
    MVar2 = newMode & 0xff;
    if (MVar2 == MVJetPack_JetModeType__Enum_Off) {
      JetPackVisualization_EnableThruster(this,0,(MethodInfo *)0x0);
    }
    else {
      if (MVar2 == MVJetPack_JetModeType__Enum_On) {
        JetPackVisualization_EnableThruster(this,1,(MethodInfo *)0x0);
        (this->fields).mode = (undefined1)newMode;
        return;
      }
      if (MVar2 == MVJetPack_JetModeType__Enum_Overheating) {
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
    pVVar1 = &(this->fields).posDiff;
    pVVar1->x = (float)uVar2 - (float)uVar5;
    pVVar1->y = (float)uVar3 - (float)uVar6;
    (this->fields).prevWorldPosition.x = (float)uVar2;
    (this->fields).prevWorldPosition.y = (float)uVar3;
    (this->fields).posDiff.z = fVar4 - fVar7;
    (this->fields).prevWorldPosition.z = fVar4;
    fVar8 = (float10)func_?(pVVar1);
    fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fVar4 = (this->fields).smoothMoveSpeed;
    fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fVar7 = (this->fields).smoothMoveSpeedTime * fVar7;
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
    pVVar1 = &(this->fields).posDiff;
    pVVar1->x = (float)uVar2 - (float)uVar5;
    pVVar1->y = (float)uVar3 - (float)uVar6;
    (this->fields).prevWorldPosition.x = (float)uVar2;
    (this->fields).prevWorldPosition.y = (float)uVar3;
    (this->fields).posDiff.z = fVar4 - fVar7;
    (this->fields).prevWorldPosition.z = fVar4;
    fVar8 = (float10)func_?(pVVar1);
    fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fVar4 = (this->fields).smoothMoveSpeed;
    fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fVar7 = (this->fields).smoothMoveSpeedTime * fVar7;
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
  uVar5 = (this->fields).mode;
  if (uVar5 != uVar4) {
    if (uVar5 == 2) {
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
  ppLVar4 = &(this->fields).thrusters;
  *ppLVar4 = this_00;
  func_?(ppLVar4,this_00);
  (this->fields).mode = 3;
  VehicleVisualizationBase::VehicleVisualizationBase__ctor
            ((VehicleVisualizationBase *)this,(MethodInfo *)0x0);
  return;
}

