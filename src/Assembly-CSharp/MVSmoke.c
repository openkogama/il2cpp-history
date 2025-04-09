
/* Void Initialize() */

void Assembly-CSharp.dll::MVSmoke::MVSmoke_Initialize(MVSmoke *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<LogicInputState,_LogicObjectManager>);
    func_?(&TypeInfo__IInputSignalReceiver);
    func_?(&MethodInfo__MVSmoke__OnInputStateUpdate_LogicInputState__LogicObjectManager_);
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  MVLogicObject::MVLogicObject_SetupCulling
            ((MVLogicObject *)this,(this->fields)._._.gameObject,2.0,(MethodInfo *)0x0);
  pPVar1 = (this->fields).particleSystem;
  if (pPVar1 != (ParticleSystem *)0x0) {
    PStack_2.m_ParticleSystem = (ParticleSystem *)&UNK_?;
    UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_get_collision
              (pPVar1,(MethodInfo *)0x0);
    PStack_2.m_ParticleSystem = (ParticleSystem *)&UNK_?;
    radius = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
             ParticleSystem_MainModule_get_startLifetimeMultiplier_Injected
                       (&PStack_2,(MethodInfo *)0x0);
    MVSmoke_SetupSmokeCulling(this,radius,(this->fields)._._.gameObject,(MethodInfo *)0x0);
    MVSmoke_SetSmokeProperties(this,(MethodInfo *)0x0);
    this_00 = (UnityAction_2_System_Int32_System_Int32_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
    UnityAction_2_System_Int32_System_Int32___ctor
              (this_00,(Object *)this,
               MethodInfo__MVSmoke__OnInputStateUpdate_LogicInputState__LogicObjectManager_,
               (MethodInfo *)0x0);
    PStack_2.m_ParticleSystem = (ParticleSystem *)&UNK_?;
    pIVar3 = LogicClientsideFactory::LogicClientsideFactory_CreateStateChangeInputSignalReceiver
                       ((MVWorldObject *)this,1,(Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0,
                        (Action_2_LogicInputState_LogicObjectManager_ *)this_00,(MethodInfo *)0x0);
    (this->fields)._InputSignalReceiver_k__BackingField = pIVar3;
    func_?();
    if ((this->fields)._InputSignalReceiver_k__BackingField != (IInputSignalReceiver *)0x0) {
      PStack_2.m_ParticleSystem = (ParticleSystem *)&UNK_?;
      value = func_?();
      pPVar1 = (this->fields).particleSystem;
      if (pPVar1 != (ParticleSystem *)0x0) {
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
        ParticleSystem_get_collision(pPVar1,(MethodInfo *)0x0);
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+EmissionModule::
        ParticleSystem_EmissionModule_set_enabled_Injected
                  ((ParticleSystem_EmissionModule *)&stack0xfffffff4,value,(MethodInfo *)0x0);
        pPVar1 = (this->fields).particleSystem;
        if (pPVar1 != (ParticleSystem *)0x0) {
          UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play_1
                    (pPVar1,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void InitializeInventory() */

void Assembly-CSharp.dll::MVSmoke::MVSmoke_InitializeInventory(MVSmoke *this,MethodInfo *method)

{
  MVLogicObject::MVLogicObject_InitializeInventory((MVLogicObject *)this,(MethodInfo *)0x0);
  if ((this->fields).particleSystem != (ParticleSystem *)0x0) {
    if (pcRam_? == (code *)0x0) {
      pcRam_? = (code *)func_?();
    }
    uStack1 = 1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam_?)();
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVSmoke::MVSmoke_OnDataUpdate(MVSmoke *this,MethodInfo *method)

{
  MVSmoke_SetSmokeProperties(this,(MethodInfo *)0x0);
  woID = (this->fields)._._._.id;
  worldObjectManager = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  MVWorldObject.dll::LogicObjectManager::LogicObjectManager_ResetChunk
            (woID,(IWorldObjectManager *)worldObjectManager,(MethodInfo *)0x0);
  return;
}


/* Void OnInputStateUpdate(LogicInputState, LogicObjectManager) */

void Assembly-CSharp.dll::MVSmoke::MVSmoke_OnInputStateUpdate
               (MVSmoke *this,LogicInputState__Enum logicInputState,
               LogicObjectManager *logicObjectManager,MethodInfo *method)

{
  if (logicInputState == LogicInputState__Enum_FromColdToHot) {
    pPVar1 = (this->fields).particleSystem;
    if (pPVar1 != (ParticleSystem *)0x0) {
      logicInputState =
           (LogicInputState__Enum)
           UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
           ParticleSystem_get_collision(pPVar1,(MethodInfo *)0x0);
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+EmissionModule::
      ParticleSystem_EmissionModule_set_enabled_Injected
                ((ParticleSystem_EmissionModule *)&logicInputState,1,(MethodInfo *)0x0);
      return;
    }
code_?:
    uVar2 = func_?(&stack0xfffffff0);
    func_?(uVar2);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (logicInputState == LogicInputState__Enum_FromHotToCold) {
    pPVar1 = (this->fields).particleSystem;
    if (pPVar1 == (ParticleSystem *)0x0) goto code_?;
    logicInputState =
         (LogicInputState__Enum)
         UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
         ParticleSystem_get_collision(pPVar1,(MethodInfo *)0x0);
    UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+EmissionModule::
    ParticleSystem_EmissionModule_set_enabled_Injected
              ((ParticleSystem_EmissionModule *)&logicInputState,0,(MethodInfo *)0x0);
  }
  return;
}


/* Void SetSmokeProperties() */

void Assembly-CSharp.dll::MVSmoke::MVSmoke_SetSmokeProperties(MVSmoke *this,MethodInfo *method)

{
  this_01 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__AnimationCurve);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Single);
    func_?(&TypeInfo__System__Single);
    func_?(&StringLiteral_color);
    func_?(&StringLiteral_wind);
    func_?(&StringLiteral_length);
    cRam_? = '\x01';
  }
  PStack_1.m_ParticleSystem = (ParticleSystem *)0x0;
  pPVar2 = (this->fields).particleSystem;
  if (pPVar2 == (ParticleSystem *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
  }
  else {
    PStack_3.m_ParticleSystem =
         (ParticleSystem *)
         UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
         ParticleSystem_get_collision(pPVar2,(MethodInfo *)0x0);
    UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
    ParticleSystem_MainModule_get_startLifetimeMultiplier_Injected(&PStack_3,(MethodInfo *)0x0);
    pDVar4 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
             (this->fields)._._._.data;
    if (pDVar4 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
    goto code_?;
    bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
             UIElements::TextureId]::
             Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                       (pDVar4,(Object *)StringLiteral_color,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                       );
    if (bVar5 == 0) {
code_?:
      pDVar4 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
               (this_01->fields)._._._.data;
      this = (MVSmoke *)0x0;
      if (pDVar4 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
        bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                           (pDVar4,(Object *)StringLiteral_length,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                           );
        if (bVar5 == 0) {
          return;
        }
        pDVar4 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                 (this_01->fields)._._._.data;
        if (pDVar4 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
          bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Object,UnityEngine::UIElements::TextureId]::
                   Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                             (pDVar4,(Object *)StringLiteral_wind,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                             );
          if (bVar5 == 0) {
code_?:
            pDVar4 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                     (this_01->fields)._._._.data;
            if (pDVar4 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
              TVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,UnityEngine::UIElements::TextureId]::
                       Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                 (pDVar4,(Object *)StringLiteral_length,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                 );
              uVar7 = CONCAT44(TypeInfo__System__Single,TVar6.m_Index);
              if (TVar6.m_Index != 0) {
                if (*(Il2CppClass **)(*(int *)TVar6.m_Index + 0x20) !=
                    (TypeInfo__System__Single->_0).element_class) goto code_?;
                pfVar8 = (float *)func_?(TVar6.m_Index);
                fStack_9 = *pfVar8;
                MVSmoke_SetupSmokeCulling
                          (this_01,fStack_9 * (this_01->fields).lengthCullingScale,
                           (this_01->fields)._._.gameObject,(MethodInfo *)0x0);
                pPVar2 = (this_01->fields).particleSystem;
                if (pPVar2 != (ParticleSystem *)0x0) {
                  PStack_10.m_ParticleSystem =
                       (ParticleSystem *)
                       UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
                       ParticleSystem_get_collision(pPVar2,(MethodInfo *)0x0);
                  UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
                  ParticleSystem_MainModule_set_startLifetimeMultiplier_Injected
                            (&PStack_10,fStack_9 / ((float)this + _UNK_?),(MethodInfo *)0x0)
                  ;
                  pPVar2 = (this_01->fields).particleSystem;
                  if (pPVar2 != (ParticleSystem *)0x0) {
                    this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_transform((Component *)pPVar2,(MethodInfo *)0x0);
                    this_00 = (this_01->fields)._._.transform;
                    if ((this_00 != (Transform *)0x0) &&
                       (pQVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                  Transform_get_rotation(&QStack_12,this_00,(MethodInfo *)0x0),
                       this_02 != (Transform *)0x0)) {
                      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                                (this_02,*pQVar11,(MethodInfo *)0x0);
                      pPVar2 = (this_01->fields).particleSystem;
                      if (pPVar2 != (ParticleSystem *)0x0) {
                        PStack_13.m_ParticleSystem =
                             (ParticleSystem *)
                             UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
                             ParticleSystem_get_collision(pPVar2,(MethodInfo *)0x0);
                        this_03 = (AnimationCurve *)
                                  func_?(TypeInfo__UnityEngine__AnimationCurve);
                        UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                        AnimationCurve__ctor_1(this_03,(MethodInfo *)0x0);
                        if (this_03 != (AnimationCurve *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                          AnimationCurve_AddKey(this_03,0.0,0.0,(MethodInfo *)0x0);
                          UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                          AnimationCurve_AddKey(this_03,0.05,(float)this,(MethodInfo *)0x0);
                          fVar14 = 0.0;
                          fVar15 = 0.0;
                          pAVar16 = (AnimationCurve *)0x0;
                          pAVar17 = (AnimationCurve *)0x0;
                          UnityEngine.ParticleSystemModule.dll::UnityEngine::
                          ParticleSystem+MinMaxCurve::ParticleSystem_MinMaxCurve__ctor_2
                                    ((ParticleSystem_MinMaxCurve *)&stack0xffffffc0,1.0,this_03,
                                     this_03,(MethodInfo *)0x0);
                          value_00.m_CurveMultiplier = fVar15;
                          value_00.m_Mode = (int32_t)fVar14;
                          value_00.m_CurveMin = pAVar16;
                          value_00.m_CurveMax = pAVar17;
                          value_00.m_ConstantMin = 0.0;
                          value_00.m_ConstantMax = 0.0;
                          UnityEngine.ParticleSystemModule.dll::UnityEngine::
                          ParticleSystem+ForceOverLifetimeModule::
                          ParticleSystem_ForceOverLifetimeModule_set_x
                                    (&PStack_13,value_00,(MethodInfo *)0x0);
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          else {
            pDVar4 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                     (this_01->fields)._._._.data;
            if (pDVar4 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
              TVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,UnityEngine::UIElements::TextureId]::
                       Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                 (pDVar4,(Object *)StringLiteral_wind,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                 );
              uVar7 = CONCAT44(TypeInfo__System__Single,TVar6.m_Index);
              if (TVar6.m_Index != 0) {
                if (*(Il2CppClass **)(*(int *)TVar6.m_Index + 0x20) !=
                    (TypeInfo__System__Single->_0).element_class) goto code_?;
                puVar18 = (undefined4 *)func_?();
                this = (MVSmoke *)*puVar18;
                goto code_?;
              }
            }
          }
        }
      }
      goto code_?;
    }
    pDVar4 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
             (this->fields)._._._.data;
    if (pDVar4 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
    goto code_?;
    unaff_EBX = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          (pDVar4,(Object *)StringLiteral_color,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
    this = (MVSmoke *)TypeInfo__System__Single;
    if (unaff_EBX.m_Index == 0) {
      iVar19 = 0;
code_?:
      pPVar2 = (this_01->fields).particleSystem;
      if ((pPVar2 == (ParticleSystem *)0x0) ||
         (PStack_1.m_ParticleSystem =
               (ParticleSystem *)
               UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
               ParticleSystem_get_collision(pPVar2,(MethodInfo *)0x0), iVar19 == 0))
      goto code_?;
      if ((*(int *)(iVar19 + 0xc) != 0) &&
         (((1 < *(uint *)(iVar19 + 0xc) && (2 < *(uint *)(iVar19 + 0xc))) &&
          (3 < *(uint *)(iVar19 + 0xc))))) {
        QStack_12.w = *(float *)(iVar19 + 0x1c);
        color.g = *(float *)(iVar19 + 0x14);
        color.r = *(float *)(iVar19 + 0x10);
        color.b = *(float *)(iVar19 + 0x18);
        color.a = QStack_12.w;
        QStack_12.x = *(float *)(iVar19 + 0x10);
        QStack_12.y = *(float *)(iVar19 + 0x14);
        QStack_12.z = *(float *)(iVar19 + 0x18);
        pPVar20 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MinMaxGradient::
                  ParticleSystem_MinMaxGradient_op_Implicit
                            ((ParticleSystem_MinMaxGradient *)&stack0xffffffac,color,
                             (MethodInfo *)0x0);
        uVar21 = (pPVar20->m_ColorMax).b;
        uVar22 = pPVar20->m_Mode;
        uVar23 = pPVar20->m_GradientMin;
        uVar24 = pPVar20->m_GradientMax;
        uVar25 = (pPVar20->m_ColorMin).r;
        uVar26 = (pPVar20->m_ColorMin).g;
        uVar27 = (pPVar20->m_ColorMin).b;
        uVar28 = (pPVar20->m_ColorMin).a;
        value.m_ColorMin.a = (float)uVar28;
        value.m_ColorMin.b = (float)uVar27;
        value.m_ColorMin.g = (float)uVar26;
        value.m_ColorMin.r = (float)uVar25;
        uVar29 = (pPVar20->m_ColorMax).r;
        uVar30 = (pPVar20->m_ColorMax).g;
        value.m_ColorMax.g = (float)uVar30;
        value.m_ColorMax.r = (float)uVar29;
        value.m_GradientMax = (Gradient *)uVar24;
        value.m_GradientMin = (Gradient *)uVar23;
        value.m_Mode = uVar22;
        value.m_ColorMax.b = (float)uVar21;
        value.m_ColorMax.a = (pPVar20->m_ColorMax).a;
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
        ParticleSystem_MainModule_set_startColor(&PStack_1,value,(MethodInfo *)0x0);
        goto code_?;
      }
      goto code_?;
    }
    iVar19 = func_?();
    if (iVar19 != 0) goto code_?;
  }
  uVar7 = func_?(unaff_EBX.m_Index,this);
code_?:
  func_?(uVar7);
  pcVar31 = (code *)swi(3);
  (*pcVar31)();
  return;
}


/* CullingSubscriberBase SetupSmokeCulling(Single, GameObject) */

CullingSubscriberBase *
Assembly-CSharp.dll::MVSmoke::MVSmoke_SetupSmokeCulling
          (MVSmoke *this,float radius,GameObject *lodGameObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>);
    cRam_? = '\x01';
  }
  if ((this->fields)._.cullingSubscriberBase != (CullingSubscriberBase *)0x0) {
    CullingSubscriberBase::CullingSubscriberBase_Destroy
              ((this->fields)._.cullingSubscriberBase,(MethodInfo *)0x0);
  }
  pVVar1 = (Vector3 *)
           (*(code *)(this->klass->vtable).get_WorldPosition_1.method)(&stack0xffffffe8,this);
  position = *pVVar1;
  this_00 = (UnityAction_1_UnityEngine_Vector2_ *)
            func_?(
                           TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>
                           );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[UnityEngine::Vector2]::
  UnityAction_1_UnityEngine_Vector2___ctor
            (this_00,(Object *)this,(this->klass->vtable).UpdateControllerUpdate_1.methodPtr,
             (MethodInfo *)0x0);
  this_01 = (CullingSubscriberBase *)func_?(TypeInfo__CullingSubscriberBase);
  CullingSubscriberBase::CullingSubscriberBase__ctor_2
            (this_01,radius,position,(UnityAction_1_UnityEngine_CullingGroupEvent_ *)this_00,
             (MethodInfo *)0x0);
  (this->fields)._.cullingSubscriberBase = this_01;
  func_?();
  return (this->fields)._.cullingSubscriberBase;
}


/* Void ToggleEmitter(Boolean) */

void Assembly-CSharp.dll::MVSmoke::MVSmoke_ToggleEmitter
               (MVSmoke *this,bool toggle,MethodInfo *method)

{
  this_00 = (this->fields).particleSystem;
  if (this_00 != (ParticleSystem *)0x0) {
    this = (MVSmoke *)
           UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
           ParticleSystem_get_collision(this_00,(MethodInfo *)0x0);
    UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+EmissionModule::
    ParticleSystem_EmissionModule_set_enabled_Injected
              ((ParticleSystem_EmissionModule *)&this,(bool)_toggle,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* MVSmoke(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVSmoke::MVSmoke__ctor
               (MVSmoke *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem__UnityEngine__Vector3__UnityEngine__Quaternion_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  this_00 = this;
  (this->fields).lengthCullingScale = 1.5;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PrefabPool);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 != (PrefabPool *)0x0) {
    MVLogicObject::MVLogicObject__ctor
              ((MVLogicObject *)this_00,data,(pPVar1->fields).mvSmokePrefab,worldObjects,
               (MethodInfo *)0x0);
    piVar2 = &(this_00->fields)._._.interactionFlags;
    *(uint *)piVar2 = (uint)*piVar2 | 0x10000;
    uVar3 = *(undefined4 *)((int)&(this_00->fields)._._.interactionFlags + 4);
    piVar2 = &(this_00->fields)._._.interactionFlags;
    *(uint *)piVar2 = (uint)*piVar2 | 0x8000;
    *(undefined4 *)((int)&(this_00->fields)._._.interactionFlags + 4) = uVar3;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
    if (pPVar1 != (PrefabPool *)0x0) {
      pPVar4 = (pPVar1->fields).particleFluffySmoke;
      pGVar5 = (this_00->fields)._._.gameObject;
      if (pGVar5 != (GameObject *)0x0) {
        pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (pGVar5,(MethodInfo *)0x0);
        if (pTVar6 != (Transform *)0x0) {
          pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              ((Vector3 *)&stack0xffffffe8,pTVar6,(MethodInfo *)0x0);
          position = *pVVar7;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pQVar8 = TypeInfo__UnityEngine__Quaternion->static_fields;
          puVar9 = (undefined *)(pQVar8->identityQuaternion).x;
          pOVar10 = (Object_1__Class *)(pQVar8->identityQuaternion).y;
          fVar11 = (pQVar8->identityQuaternion).z;
          fVar12 = (pQVar8->identityQuaternion).w;
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            puVar9 = &UNK_?;
            pOVar10 = TypeInfo__UnityEngine__Object;
            func_?();
          }
          rotation.y = (float)pOVar10;
          rotation.x = (float)puVar9;
          rotation.z = fVar11;
          rotation.w = fVar12;
          pPVar4 = (ParticleSystem *)
                    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_7
                              ((Object *)pPVar4,position,rotation,
                               UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem__UnityEngine__Vector3__UnityEngine__Quaternion_
                              );
          (this_00->fields).particleSystem = pPVar4;
          func_?(&(this_00->fields).particleSystem);
          pPVar4 = (this_00->fields).particleSystem;
          if (pPVar4 != (ParticleSystem *)0x0) {
            pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               ((Component *)pPVar4,(MethodInfo *)0x0);
            pGVar5 = (this_00->fields)._._.gameObject;
            if (pGVar5 != (GameObject *)0x0) {
              value = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                (pGVar5,(MethodInfo *)0x0);
              if (pTVar6 != (Transform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                          (pTVar6,value,(MethodInfo *)0x0);
                pPVar4 = (this_00->fields).particleSystem;
                if (pPVar4 != (ParticleSystem *)0x0) {
                  UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
                  ParticleSystem_Stop_2(pPVar4,(MethodInfo *)0x0);
                  pPVar4 = (this_00->fields).particleSystem;
                  if (pPVar4 != (ParticleSystem *)0x0) {
                    this = (MVSmoke *)
                           UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
                           ParticleSystem_get_collision(pPVar4,(MethodInfo *)0x0);
                    UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+EmissionModule
                    ::ParticleSystem_EmissionModule_set_enabled_Injected
                              ((ParticleSystem_EmissionModule *)&this,0,(MethodInfo *)0x0);
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
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}

