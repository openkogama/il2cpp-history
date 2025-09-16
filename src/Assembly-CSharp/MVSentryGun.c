
/* Void ApplyDamage(MVWorldObjectClient, InteractionDataHandlerBase) */

void Assembly-CSharp.dll::MVSentryGun::MVSentryGun_ApplyDamage
               (MVSentryGun *this,MVWorldObjectClient *wo,
               InteractionDataHandlerBase *interactionDataHandlerBase,MethodInfo *method)

{
  uVar1 = (this->fields).beamType;
  if (wo != (MVWorldObjectClient *)0x0) {
    puVar2 = (undefined8 *)
             (*(code *)(wo->klass->vtable).GetTargetPosition.method)
                       (&uStack_3,wo,(wo->klass->vtable).DrawTransformGizmo.methodPtr);
    uStack_4 = *puVar2;
    fStack_5 = *(float *)(puVar2 + 1);
    this_00 = (this->fields)._._.gameObject;
    if (this_00 != (GameObject *)0x0) {
      this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (this_00,(MethodInfo *)0x0);
      if (this_01 != (Transform *)0x0) {
        pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           ((Vector3 *)&IStack_7.impulse.y,this_01,(MethodInfo *)0x0);
        uStack_3._0_4_ = pVVar6->x;
        uStack_3._4_4_ = pVVar6->y;
        fStack_8 = fStack_5 - pVVar6->z;
        value.y = uStack_4._4_4_ - (float)uStack_3._4_4_;
        value.x = (float)uStack_4 - (float)(undefined4)uStack_3;
        value.z = fStack_8;
        pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                           ((Vector3 *)&IStack_7.impulse.y,value,(MethodInfo *)0x0);
        uStack_3._0_4_ = pVVar6->x;
        uStack_3._4_4_ = pVVar6->y;
        fStack_8 = pVVar6->z;
        fStack_5 = (this->fields).pushBackStrength;
        fVar9 = (float)(undefined4)uStack_3 * fStack_5;
        fVar10 = (float)uStack_3._4_4_ * fStack_5;
        fStack_5 = fStack_8 * fStack_5;
        uStack_4 = CONCAT44(fVar10,fVar9);
        if ((uVar1 == 0) || (uVar1 != 1)) {
          impulse_00.y = fVar10;
          impulse_00.x = fVar9;
          impulse_00.z = fStack_5;
          pIVar11 = SentryTowerFirePackage::SentryTowerFirePackage_Create
                             (&IStack_7,impulse_00,(MethodInfo *)0x0);
        }
        else {
          impulse.y = fVar10;
          impulse.x = fVar9;
          impulse.z = fStack_5;
          pIVar11 = SentryTowerIcePackage::SentryTowerIcePackage_Create
                             (&IStack_7,impulse,(MethodInfo *)0x0);
        }
        if (interactionDataHandlerBase != (InteractionDataHandlerBase *)0x0) {
          InteractionDataHandlerBase::InteractionDataHandlerBase_HandleInteraction
                    (interactionDataHandlerBase,*pIVar11,1,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* InteractionData BeamTypeToInteractionPackageType(SentryGunBeamType, Vector3) */

InteractionData *
Assembly-CSharp.dll::MVSentryGun::MVSentryGun_BeamTypeToInteractionPackageType
          (InteractionData *__return_storage_ptr__,SentryGunBeamType__Enum btype,Vector3 impulse,
          MethodInfo *method)

{
  if (((undefined1)btype == SentryGunBeamType__Enum_FireBeam) ||
     ((undefined1)btype != SentryGunBeamType__Enum_IceBeam)) {
    pIVar1 = SentryTowerFirePackage::SentryTowerFirePackage_Create
                       (&IStack_2,impulse,(MethodInfo *)0x0);
  }
  else {
    pIVar1 = SentryTowerIcePackage::SentryTowerIcePackage_Create
                       (&IStack_2,impulse,(MethodInfo *)0x0);
  }
  fVar3 = (pIVar1->impulse).x;
  fVar4 = (pIVar1->impulse).y;
  fVar5 = (pIVar1->impulse).z;
  uVar6 = pIVar1->interactionType;
  uVar7 = pIVar1->playerKilledByType;
  uVar8 = *(undefined2 *)&pIVar1->field_0x12;
  __return_storage_ptr__->damage = pIVar1->damage;
  (__return_storage_ptr__->impulse).x = fVar3;
  (__return_storage_ptr__->impulse).y = fVar4;
  (__return_storage_ptr__->impulse).z = fVar5;
  __return_storage_ptr__->interactionType = uVar6;
  __return_storage_ptr__->playerKilledByType = uVar7;
  *(undefined2 *)&__return_storage_ptr__->field_0x12 = uVar8;
  return __return_storage_ptr__;
}


/* Boolean CompareWithKoGaMaPackage(MVWorldObjectClient, KoGaMaPackageClient, Int32 ByRef) */

bool Assembly-CSharp.dll::MVSentryGun::MVSentryGun_CompareWithKoGaMaPackage
               (MVSentryGun *this,MVWorldObjectClient *wo,KoGaMaPackageClient *koGaMaPackageClient,
               int32_t *insertedBy,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__MVSentryGun);
    func_?(&TypeInfo__SentryGunBeamType);
    func_?(&StringLiteral_beamType);
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)(this->fields)._._._.data
  ;
  if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
    TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (pDVar1,(Object *)StringLiteral_beamType,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    uVar3 = CONCAT44(TypeInfo__SentryGunBeamType,TVar2.m_Index);
    if (TVar2.m_Index != 0) {
      if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) !=
          (TypeInfo__SentryGunBeamType->_0).element_class) goto code_?;
      pcVar4 = (char *)func_?(TVar2.m_Index);
      cVar5 = *pcVar4;
      if (wo != (MVWorldObjectClient *)0x0) {
        if (((TypeInfo__MVSentryGun->_1).naturalAligment <= (wo->klass->_1).naturalAligment) &&
           ((MVSentryGun__Class *)
            (wo->klass->_1).typeHierarchy[(TypeInfo__MVSentryGun->_1).naturalAligment - 1] ==
            TypeInfo__MVSentryGun)) {
          pMVar6 = (MVWorldObjectClient *)0x0;
          if ((MVSentryGun__Class *)
              (wo->klass->_1).typeHierarchy[(TypeInfo__MVSentryGun->_1).naturalAligment - 1] ==
              TypeInfo__MVSentryGun) {
            pMVar6 = wo;
          }
          pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                   (pMVar6->fields)._.data;
          if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
            TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Object,UnityEngine::UIElements::TextureId]::
                    Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                              (pDVar1,(Object *)StringLiteral_beamType,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                              );
            uVar3 = CONCAT44(TypeInfo__SentryGunBeamType,TVar2.m_Index);
            if (TVar2.m_Index != 0) {
              if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) ==
                  (TypeInfo__SentryGunBeamType->_0).element_class) {
                pcVar4 = (char *)func_?();
                return *pcVar4 == cVar5;
              }
              goto code_?;
            }
          }
        }
      }
    }
  }
  uVar3 = func_?();
code_?:
  func_?(uVar3);
  pcVar7 = (code *)swi(3);
  bVar8 = (*pcVar7)();
  return bVar8;
}


/* Void DeSelect() */

void Assembly-CSharp.dll::MVSentryGun::MVSentryGun_DeSelect(MVSentryGun *this,MethodInfo *method)

{
  MVWorldObjectClient::MVWorldObjectClient_set_Selected
            ((MVWorldObjectClient *)this,0,(MethodInfo *)0x0);
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::MVSentryGun::MVSentryGun_Destroy(MVSentryGun *this,MethodInfo *method)

{
  MVLogicObject::MVLogicObject_Destroy((MVLogicObject *)this,(MethodInfo *)0x0);
  if ((this->fields)._.cullingSubscriberBase != (CullingSubscriberBase *)0x0) {
    CullingSubscriberBase::CullingSubscriberBase_Destroy
              ((this->fields)._.cullingSubscriberBase,(MethodInfo *)0x0);
    (this->fields)._.cullingSubscriberBase = (CullingSubscriberBase *)0x0;
    func_?(&(this->fields)._.cullingSubscriberBase,0);
  }
  return;
}


/* Void DoFrameDelete() */

void Assembly-CSharp.dll::MVSentryGun::MVSentryGun_DoFrameDelete
               (MVSentryGun *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_SentryGunBeam>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_SentryGunBeam>__Remove_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_SentryGunBeam>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_SentryGunBeam>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_SentryGunBeam>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_SentryGunBeam>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_SentryGunBeam>__get_Value__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__Clear__);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__get_Item_int_);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  method_00 = (MethodInfo *)(this->fields).woIdsBeamsMap;
  if (method_00 != (MethodInfo *)0x0) {
    pDVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                        &stack0xffffffa0,(Dictionary_2_System_UInt32_System_Object_ *)method_00,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_SentryGunBeam>__GetEnumerator__
                       );
    uVar5 = *(undefined8 *)&(pDVar4->_current).value;
    uStack_1 = 1;
    pMVar6 = (MethodInfo *)(pDVar4->_current).key;
code_?:
    id = pMVar6;
    bVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[System
            ::UInt32,System::Object]::
            Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                      ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                       &stack0xffffff88,
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_SentryGunBeam>__MoveNext__
                      );
    if (bVar7 != 0) {
      x = (Object_1 *)uVar5;
      pMVar6 = id;
      this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (this_02 != (MVWorldObjectClientManager *)0x0) {
        pMVar8 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (this_02,(int32_t)id,(MethodInfo *)0x0);
        if (pMVar8 == (MVWorldObject *)0x0) {
code_?:
          pLVar9 = (this->fields).deleteList;
          if (pLVar9 != (List_1_System_Int32_ *)0x0) goto code_?;
        }
        else {
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          method_00 = (MethodInfo *)&UNK_?;
          bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                            (x,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar7 != 0) goto code_?;
          pLVar10 = pMVar8[1].fields.objectLinkRefs;
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                            ((Object_1 *)pLVar10,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar7 != 0) goto code_?;
          pLVar10 = pMVar8[1].fields.objectLinkRefs;
          pGVar11 = (this->fields)._._.gameObject;
          if (((pGVar11 != (GameObject *)0x0) &&
              (pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                         GameObject_get_transform(pGVar11,(MethodInfo *)0x0),
              pTVar12 != (Transform *)0x0)) &&
             (pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                  ((Vector3 *)&stack0xffffffc4,pTVar12,(MethodInfo *)0x0),
             pLVar10 != (List_1_MV_WorldObject_ObjectLink_ *)0x0)) {
            uVar5._4_4_ = (int32_t)pLVar10;
            uVar5._0_4_ = (Object *)&stack0xffffffb8;
            pMVar6 = (MethodInfo *)&UNK_?;
            UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_ClosestPointOnBounds
                      ((Vector3 *)&stack0xffffffb8,(Collider *)pLVar10,*pVVar13,(MethodInfo *)0x0);
            pGVar11 = (this->fields)._._.gameObject;
            if (pGVar11 != (GameObject *)0x0) {
              pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(pGVar11,(MethodInfo *)0x0);
              if (pTVar12 != (Transform *)0x0) goto code_?;
            }
          }
        }
      }
      goto code_?;
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&stack0xffffff88,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_SentryGunBeam>__Dispose__
               ,method_00);
    uStack_1 = 0xffffffff;
    pLVar9 = (this->fields).deleteList;
    if (pLVar9 == (List_1_System_Int32_ *)0x0) goto code_?;
    iVar14 = (pLVar9->fields)._size;
    index = 0;
    if (0 < iVar14) {
      do {
        this_00 = (this->fields).woIdsBeamsMap;
        this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                  (this->fields).deleteList;
        if ((this_01 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
           (key = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (this_01,index,
                             MethodInfo__System__Collections__Generic__List<int>__get_Item_int_),
           this_00 == (Dictionary_2_System_Int32_SentryGunBeam_ *)0x0)) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Remove
                  ((Dictionary_2_System_Int32_System_Object_ *)this_00,(int32_t)key,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_SentryGunBeam>__Remove_int_
                  );
        index = index + 1;
      } while (index < iVar14);
    }
    pLVar9 = (this->fields).deleteList;
    if (pLVar9 != (List_1_System_Int32_ *)0x0) {
      piVar15 = &(pLVar9->fields)._version;
      *piVar15 = *piVar15 + 1;
      (pLVar9->fields)._size = 0;
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
  }
code_?:
  uVar16 = func_?();
  func_?(uVar16);
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
code_?:
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
            ((Vector3 *)&stack0xffffffac,pTVar12,(MethodInfo *)0x0);
  fVar18 = (float10)func_?();
  pfVar19 = &(this->fields).laserRange;
  if (*pfVar19 <= (float)fVar18 && (float)fVar18 != *pfVar19) {
code_?:
    pLVar9 = (this->fields).deleteList;
    if (pLVar9 == (List_1_System_Int32_ *)0x0) goto code_?;
code_?:
    func_?(pLVar9,id,MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    method_00 = id;
  }
  goto code_?;
}


/* Boolean DoRespawn() */

bool Assembly-CSharp.dll::MVSentryGun::MVSentryGun_DoRespawn(MVSentryGun *this,MethodInfo *method)

{
  if ((this->fields).wasDead != 0) {
    this_00 = (this->fields).interactable;
    if (this_00 == (ClientSideNPCInteractable *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      bVar2 = (*pcVar1)();
      return bVar2;
    }
    bVar2 = ClientSideNPCInteractable::ClientSideNPCInteractable_IsDead(this_00,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      (this->fields).wasDead = 0;
      return 1;
    }
  }
  return 0;
}


/* Boolean HitsTarget(Ray, Int32) */

bool Assembly-CSharp.dll::MVSentryGun::MVSentryGun_HitsTarget
               (MVSentryGun *this,Ray ray,int32_t woID,MethodInfo *method)

{
  func_?(&VStack_1,0,0x48);
  bVar2 = CollisionDetection::CollisionDetection_MVHit_1
                    (ray,&VStack_1,(this->fields).laserRange,
                     (this->fields)._RaycastIgnoreWorldObjectIds_k__BackingField,-5,
                     (MethodInfo *)0x0);
  if (bVar2 == 0) {
    return 1;
  }
  return VStack_1.woId == woID;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVSentryGun::MVSentryGun_Initialize(MVSentryGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<float,_MVPlayer>);
    func_?(&TypeInfo__System__Action<float,_MVPlayer,_MV::Common::PlayerKilledByType>);
    func_?(&TypeInfo__CullingSubscriberBase);
    func_?(&
                    ClientSideNPCInteractable_MethodInfo__UnityEngine__GameObject__AddComponent<ClientSideNPCInteractable>__
                   );
    func_?(&
                    ClientSideNPCInteractionHandler_MethodInfo__UnityEngine__GameObject__GetComponent<ClientSideNPCInteractionHandler>__
                   );
    func_?(&
                    MethodInfo__MVSentryGun__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                   );
    func_?(&MethodInfo__MVSentryGun__OnStateChange_UnityEngine__CullingGroupEvent_);
    func_?(&
                    MethodInfo__MVSentryGun__ReceiveDamage_float__MVPlayer__MV__Common__PlayerKilledByType_
                   );
    func_?(&MethodInfo__MVSentryGun__RecieveHealing_float__MVPlayer_);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>);
    func_?(&
                    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                   );
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  pIVar1 = LogicClientsideFactory::LogicClientsideFactory_CreateStateChangeInputSignalReceiver
                     ((MVWorldObject *)this,1,(Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0,
                      (Action_2_LogicInputState_LogicObjectManager_ *)0x0,(MethodInfo *)0x0);
  (this->fields)._InputSignalReceiver_k__BackingField = pIVar1;
  func_?(&(this->fields)._InputSignalReceiver_k__BackingField,pIVar1);
  pGVar2 = (this->fields)._._.gameObject;
  if (pGVar2 != (GameObject *)0x0) {
    pCVar3 = (ClientSideNPCInteractable *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                       (pGVar2,
                        ClientSideNPCInteractable_MethodInfo__UnityEngine__GameObject__AddComponent<ClientSideNPCInteractable>__
                       );
    (this->fields).interactable = pCVar3;
    func_?();
    pCVar3 = (this->fields).interactable;
    this_01 = (Action_3_Single_Object_ByteEnum_ *)func_?();
    mscorlib.dll::System::Action`3[Single,Object,ByteEnum]::Action_3_Single_Object_ByteEnum___ctor
              (this_01,(Object *)this,
               MethodInfo__MVSentryGun__ReceiveDamage_float__MVPlayer__MV__Common__PlayerKilledByType_
               ,(MethodInfo *)0x0);
    this_02 = (Action_2_Single_Object_ *)func_?();
    mscorlib.dll::System::Action`2[Single,Object]::Action_2_Single_Object___ctor
              (this_02,(Object *)this,MethodInfo__MVSentryGun__RecieveHealing_float__MVPlayer_,
               (MethodInfo *)0x0);
    if (pCVar3 != (ClientSideNPCInteractable *)0x0) {
      ClientSideNPCInteractable::ClientSideNPCInteractable_Init
                (pCVar3,(Action_3_Single_MVPlayer_MV_Common_PlayerKilledByType_ *)this_01,
                 (Action_2_Single_MVPlayer_ *)this_02,(MethodInfo *)0x0);
      MVSentryGun_InitializeCommon(this,(MethodInfo *)0x0);
      pGVar2 = (this->fields)._._.gameObject;
      if ((pGVar2 != (GameObject *)0x0) &&
         (this_03 = (MVComponent *)
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                              (pGVar2,
                               ClientSideNPCInteractionHandler_MethodInfo__UnityEngine__GameObject__GetComponent<ClientSideNPCInteractionHandler>__
                              ), this_03 != (MVComponent *)0x0)) {
        MVComponent::MVComponent_FindWorldObjectParent(this_03,(MethodInfo *)0x0);
        pCVar3 = (this->fields).interactable;
        if (pCVar3 != (ClientSideNPCInteractable *)0x0) {
          bVar4 = ClientSideNPCInteractable::ClientSideNPCInteractable_IsDead
                            (pCVar3,(MethodInfo *)0x0);
          (this->fields).wasDead = bVar4;
          MVSentryGun_UpdateSentryState(this,(MethodInfo *)0x0);
          pUVar5 = (this->fields)._._.PositionChanged;
          this_04 = (UnityAction_2_System_Object_System_Object_ *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    (this_04,(Object *)this,
                     MethodInfo__MVSentryGun__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                     ,(MethodInfo *)0x0);
          pDVar6 = mscorlib.dll::System::Delegate::Delegate_Combine
                             ((Delegate *)pUVar5,(Delegate *)this_04,(MethodInfo *)0x0);
          if (pDVar6 == (Delegate *)0x0) {
            (this->fields)._._.PositionChanged =
                 (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
          }
          else {
            pUVar5 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
                     func_?();
            if (pUVar5 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0)
            goto code_?;
            (this->fields)._._.PositionChanged = pUVar5;
            iVar7 = func_?();
            if (iVar7 == 0) goto code_?;
          }
          func_?();
          puVar8 = (undefined8 *)(*(code *)(this->klass->vtable).get_WorldPosition_1.method)();
          uVar9 = *puVar8;
          fVar10 = *(float *)(puVar8 + 1);
          this_05 = (UnityAction_1_UnityEngine_Vector2_ *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[UnityEngine::Vector2]::
          UnityAction_1_UnityEngine_Vector2___ctor
                    (this_05,(Object *)
                             MethodInfo__MVSentryGun__OnStateChange_UnityEngine__CullingGroupEvent_,
                     MethodInfo__MVSentryGun__OnStateChange_UnityEngine__CullingGroupEvent_,
                     (MethodInfo *)0x0);
          this_06 = (CullingSubscriberBase *)func_?();
          position.y = (float)&UNK_?;
          position.x = (float)(int)uVar9;
          position.z = fVar10;
          CullingSubscriberBase::CullingSubscriberBase__ctor_2
                    (this_06,2.0,position,(UnityAction_1_UnityEngine_CullingGroupEvent_ *)this_05,
                     (MethodInfo *)0x0);
          _UNK_? = this_06;
          func_?();
          if (((_UNK_? != (CullingSubscriberBase *)0x0) &&
              ((_UNK_?->fields)._DistanceBandIndex_k__BackingField = 3, fVar10 = _UNK_?
              , _UNK_? != 0)) && (iVar7 = *(int *)(_UNK_? + 0x18), iVar7 != 0)) {
            MVar11 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
            if (MVar11 != MVGameMode__Enum_Edit) {
              return;
            }
            this_00 = *(SphereVolumeIndicator **)(iVar7 + 0x54);
            if (this_00 != (SphereVolumeIndicator *)0x0) {
              SphereVolumeIndicator::SphereVolumeIndicator_SetRadius
                        (this_00,fVar10,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void InitializeCommon() */

void Assembly-CSharp.dll::MVSentryGun::MVSentryGun_InitializeCommon
               (MVSentryGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__SentryGunBeamType);
    func_?(&StringLiteral_beamType);
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)(this->fields)._._._.data
  ;
  if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      (pDVar1,(Object *)StringLiteral_beamType,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar2 == 0) {
code_?:
      pMVar3 = (this->fields).gunObject;
      if ((pMVar3 != (MVSentryGunObject *)0x0) &&
         (pSVar4 = (pMVar3->fields).sentryGunScript, pSVar4 != (SentryGunScript *)0x0)) {
        uVar5 = (this->fields).beamType;
        if (cRam_? == '\0') {
          func_?(&StringLiteral__TintColor);
          func_?(&StringLiteral__Color);
          cRam_? = '\x01';
        }
        if (uVar5 == 0) {
          pMVar6 = (pSVar4->fields).sentryRenderer;
          if (pMVar6 != (MeshRenderer *)0x0) {
            pMVar7 = (pSVar4->fields).materialFireBeam;
code_?:
            UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                      ((Renderer *)pMVar6,pMVar7,(MethodInfo *)0x0);
            goto code_?;
          }
        }
        else if (uVar5 == 1) {
          pMVar6 = (pSVar4->fields).sentryRenderer;
          if (pMVar6 != (MeshRenderer *)0x0) {
            pMVar7 = (pSVar4->fields).materialIceBeam;
            goto code_?;
          }
        }
        else {
code_?:
          pMVar6 = (pSVar4->fields).sentryRenderer;
          if (pMVar6 != (MeshRenderer *)0x0) {
            pMVar7 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_sharedMaterial
                                ((Renderer *)pMVar6,(MethodInfo *)0x0);
            if (pMVar7 != (Material *)0x0) {
              pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetVector
                                  ((Vector4 *)&stack0xffffffec,pMVar7,StringLiteral__Color,
                                   (MethodInfo *)0x0);
              fVar9 = pVVar8->y;
              fVar10 = pVVar8->z;
              fVar11 = pVVar8->w;
              this_00 = (pSVar4->fields).glowPlaneRenderer;
              (pSVar4->fields).color.r = pVVar8->x;
              (pSVar4->fields).color.g = fVar9;
              (pSVar4->fields).color.b = fVar10;
              (pSVar4->fields).color.a = fVar11;
              if (this_00 != (Renderer *)0x0) {
                pMVar7 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                                    (this_00,(MethodInfo *)0x0);
                if (pMVar7 != (Material *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                            (pMVar7,StringLiteral__TintColor,(Vector4)(pSVar4->fields).color,
                             (MethodInfo *)0x0);
                  if (uVar5 == 0) {
                    this_01 = (pSVar4->fields).audioSource;
                    if (this_01 == (AudioSource *)0x0) goto code_?;
                    value = (pSVar4->fields).audioClipFireBeam;
                  }
                  else {
                    if (uVar5 != 1) goto code_?;
                    this_01 = (pSVar4->fields).audioSource;
                    if (this_01 == (AudioSource *)0x0) goto code_?;
                    value = (pSVar4->fields).audioClipIceBeam;
                  }
                  UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_clip
                            (this_01,value,(MethodInfo *)0x0);
code_?:
                  if ((this->fields).beamType == 0) {
                    (this->fields).interactionType = 10;
                  }
                  if ((this->fields).beamType == 1) {
                    (this->fields).interactionType = 0xb;
                  }
                  return;
                }
              }
            }
          }
        }
      }
    }
    else {
      pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
               (this->fields)._._._.data;
      if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
        TVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                           (pDVar1,(Object *)StringLiteral_beamType,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        if (TVar12.m_Index != 0) {
          if (*(Il2CppClass **)(*(int *)TVar12.m_Index + 0x20) !=
              (TypeInfo__SentryGunBeamType->_0).element_class) goto code_?;
          puVar13 = (uint8_t *)func_?();
          (this->fields).beamType = *puVar13;
          goto code_?;
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void InitializeInventory() */

void Assembly-CSharp.dll::MVSentryGun::MVSentryGun_InitializeInventory
               (MVSentryGun *this,MethodInfo *method)

{
  MVLogicObject::MVLogicObject_InitializeInventory((MVLogicObject *)this,(MethodInfo *)0x0);
  MVSentryGun_InitializeCommon(this,(MethodInfo *)0x0);
  pMVar1 = (this->fields).gunObject;
  if (((pMVar1 != (MVSentryGunObject *)0x0) &&
      (pSVar2 = (pMVar1->fields).sentryGunScript, pSVar2 != (SentryGunScript *)0x0)) &&
     (this_00 = (pSVar2->fields).glowPlane, this_00 != (Transform *)0x0)) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this_00,(MethodInfo *)0x0);
    if (this_01 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,0,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnPositionChanged(MVWorldObjectClient, PositionChangedEventArgs) */

void Assembly-CSharp.dll::MVSentryGun::MVSentryGun_OnPositionChanged
               (MVSentryGun *this,MVWorldObjectClient *wo,
               PositionChangedEventArgs *positionChangedEventArgs,MethodInfo *method)

{
  if ((positionChangedEventArgs != (PositionChangedEventArgs *)0x0) &&
     (this_00 = (this->fields)._.cullingSubscriberBase, this_00 != (CullingSubscriberBase *)0x0)) {
    CullingSubscriberBase::CullingSubscriberBase_set_Position
              (this_00,(positionChangedEventArgs->fields).NewPos,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnStateChange(CullingGroupEvent) */

void Assembly-CSharp.dll::MVSentryGun::MVSentryGun_OnStateChange
               (MVSentryGun *this,CullingGroupEvent cullingGroupEvent,MethodInfo *method)

{
  pMVar1 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CullingApiWrapper);
    cRam_? = '\x01';
  }
  uVar2 = cullingGroupEvent._4_4_;
  iVar3 = cullingGroupEvent.m_Index;
  pCVar4 = (this->fields)._.cullingSubscriberBase;
  if (pCVar4 != (CullingSubscriberBase *)0x0) {
    distanceBandIndex = (pCVar4->fields)._DistanceBandIndex_k__BackingField;
    if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CullingApiWrapper);
    }
    uVar5 = cullingGroupEvent._4_4_;
    cullingGroupEvent.m_PrevState = (uint8_t)uVar2;
    cullingGroupEvent.m_ThisState = SUB41(uVar2,1);
    cullingGroupEvent._6_2_ = SUB42(uVar2,2);
    cullingGroupEvent_00.m_PrevState = cullingGroupEvent.m_PrevState;
    cullingGroupEvent_00.m_ThisState = cullingGroupEvent.m_ThisState;
    cullingGroupEvent_00._6_2_ = cullingGroupEvent._6_2_;
    cullingGroupEvent_00.m_Index = iVar3;
    cullingGroupEvent._4_4_ = uVar5;
    value = CullingApiWrapper::CullingApiWrapper_Visible
                      (cullingGroupEvent_00,distanceBandIndex,(MethodInfo *)0x0);
    iVar3 = UnityEngine.CoreModule.dll::UnityEngine::CullingGroupEvent::
            CullingGroupEvent_get_currentDistance(&cullingGroupEvent,(MethodInfo *)0x0);
    if (iVar3 < 4) {
      value = 1;
    }
    this = (MVSentryGun *)CONCAT31(this._1_3_,value);
    this_00 = (pMVar1->fields)._._.gameObject;
    if (this_00 != (GameObject *)0x0) {
      cullingGroupEvent.m_PrevState = 0;
      cullingGroupEvent.m_ThisState = 0;
      cullingGroupEvent._6_2_ = 0;
      cullingGroupEvent.m_Index = (int32_t)this;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_00,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnUpdate() */

void Assembly-CSharp.dll::MVSentryGun::MVSentryGun_OnUpdate(MVSentryGun *this,MethodInfo *method)

{
  pMVar1 = this;
  uStack_2 = 0xffffffff;
  puStack_3 = &DAT_?;
  uStack_4 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_4;
  puStack_5 = &stack0xfffffedc;
  puVar6 = &stack0xfffffedc;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CollisionDetectionGlobalBuffers);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_SentryGunBeam>__Add_int__SentryGunBeam_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_SentryGunBeam>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_SentryGunBeam>__Remove_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_SentryGunBeam>__TryGetValue_int__SentryGunBeam__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_SentryGunBeam>__get_Count__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_SentryGunBeam>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_SentryGunBeam>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_SentryGunBeam>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__get_Current__
                   );
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    func_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    func_?(&TypeInfo__IInputSignalReceiver);
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_SentryGunBeam>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_SentryGunBeam>__get_Value__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__GetEnumerator__);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<int>);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__UnityEngine__Physics);
    func_?(&StringLiteral_Sentry_gun_have_an_invalid_beam_);
    func_?(&StringLiteral_Player);
    cRam_? = '\x01';
    puVar6 = puStack_5;
  }
  puStack_5 = puVar6;
  pDVar7 = (Dictionary_2_System_UInt32_System_Object_ *)0x0;
  fVar8 = 0.0;
  fVar9 = 0.0;
  fVar10 = 0.0;
  pSStack_11 = (SentryGunBeam *)0x0;
  pOVar12 = (Object *)0x0;
  fVar13 = 0.0;
  auStack_14._0_4_ = (SerializationInfo__Class *)0x0;
  auStack_14._4_4_ = (MonitorData *)0x0;
  auStack_14._8_4_ = (String__Array *)0x0;
  auStack_14._12_4_ = (Object__Array *)0x0;
  auStack_14._16_4_ = (Type__Array *)0x0;
  auStack_14._20_4_ = (Dictionary_2_System_String_System_Int32_ *)0x0;
  pMVar15 = this;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  if ((this->fields).wasDead != 0) {
    pCVar16 = (this->fields).interactable;
    if (pCVar16 == (ClientSideNPCInteractable *)0x0) goto code_?;
    bVar17 = ClientSideNPCInteractable::ClientSideNPCInteractable_IsDead(pCVar16,(MethodInfo *)0x0);
    if (bVar17 == 0) {
      (this->fields).wasDead = 0;
      MVSentryGun_UpdateSentryState(this,(MethodInfo *)0x0);
    }
  }
  if ((this->fields)._InputSignalReceiver_k__BackingField == (IInputSignalReceiver *)0x0)
  goto code_?;
  cVar18 = func_?();
  if (cVar18 != '\0') {
    pCVar16 = (this->fields).interactable;
    if (pCVar16 == (ClientSideNPCInteractable *)0x0) goto code_?;
    pMVar15 = (MVSentryGun *)0x0;
    bVar17 = ClientSideNPCInteractable::ClientSideNPCInteractable_IsDead(pCVar16,(MethodInfo *)0x0);
    if (bVar17 == 0) {
      this_00 = (this->fields).intervalWithRandomSeed;
      if (this_00 == (IntervalWithRandomSeed *)0x0) goto code_?;
      pMVar15 = (MVSentryGun *)&UNK_?;
      bVar17 = IntervalWithRandomSeed::IntervalWithRandomSeed_Update(this_00,(MethodInfo *)0x0);
      if (bVar17 != 0) {
        this_04 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (this_04 == (MVNetworkGame *)0x0) goto code_?;
        bVar17 = MVNetworkGame::MVNetworkGame_get_IsPlaying(this_04,(MethodInfo *)0x0);
        if (bVar17 != 0) {
          pTStack_19 = (Type__Array *)func_?();
          method_01 = (Collider__Array *)&UNK_?;
          System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
          HashSet_1_System_Int32___ctor
                    ((HashSet_1_System_Int32_ *)pTStack_19,
                     MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
          pGVar20 = (this->fields)._._.gameObject;
          if ((pGVar20 == (GameObject *)0x0) ||
             (pTVar21 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(pGVar20,(MethodInfo *)0x0),
             pTVar21 == (Transform *)0x0)) goto code_?;
          pVVar22 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              ((Vector3 *)&stack0xffffff6c,pTVar21,(MethodInfo *)0x0);
          uStack_23._0_4_ = pVVar22->x;
          uStack_23._4_4_ = (SentryGunBeam *)pVVar22->y;
          pMStack_24 = (MethodInfo *)pVVar22->z;
          fStack_25 = (this->fields).laserRange;
          if ((TypeInfo__CollisionDetectionGlobalBuffers->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pCStack_26 = TypeInfo__CollisionDetectionGlobalBuffers->static_fields->colliderBuffer;
          iVar27 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                             (StringLiteral_Player,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Physics->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          method_00 = uStack_23._4_4_;
          position.z = (float)pMStack_24;
          position.x = (float)(undefined4)uStack_23;
          position.y = (float)uStack_23._4_4_;
          iVar27 = UnityEngine.PhysicsModule.dll::UnityEngine::Physics::
                   Physics_OverlapSphereNonAlloc_1
                             (position,fStack_25,pCStack_26,1 << ((byte)iVar27 & 0x1f),
                              (MethodInfo *)0x0);
          uStack_23 = CONCAT44(iVar27,(undefined4)uStack_23);
          fStack_25 = 0.0;
          if (0 < iVar27) {
            pCStack_26 = (Collider__Array *)0x10;
            do {
              if ((TypeInfo__CollisionDetectionGlobalBuffers->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              pCVar28 = TypeInfo__CollisionDetectionGlobalBuffers->static_fields->colliderBuffer;
              if (pCVar28 == (Collider__Array *)0x0) goto code_?;
              if (pCVar28->max_length <= (uint)fStack_25) {
                func_?();
                goto code_?;
              }
              this_01 = *(Component **)
                         ((int)pCVar28->vector +
                         (int)&((MethodInfo *)((int)pCStack_26 + -0x30))->field8_0x20);
              if (this_01 == (Component *)0x0) goto code_?;
              method_00 = (SentryGunBeam *)
                          UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform(this_01,(MethodInfo *)0x0);
              pMVar29 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetMVObject
                                  ((Transform *)method_00,(MethodInfo *)0x0);
              if (pMVar29 != (MVWorldObjectClient *)0x0) {
                pMStack_24 = (MethodInfo *)(pMVar29->fields)._.id;
                pMVar30 = (MethodInfo *)
                          MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                                    (pMVar29,(MethodInfo *)0x0);
                pMStack_31 = pMVar30;
                if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                bVar17 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                                   ((Object_1 *)pMVar30,(Object_1 *)0x0,(MethodInfo *)0x0);
                if (bVar17 == 0) {
                  pSStack_32 = (SentryGunBeam *)
                               CONCAT31(pSStack_32._1_3_,(this->fields).interactionType);
                  if (pMVar30 == (MethodInfo *)0x0) goto code_?;
                  method_00 = pSStack_32;
                  cVar18 = func_?();
                  if (cVar18 != '\0') {
                    pMVar33 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0)
                    ;
                    if ((pMVar33 == (MVWorldObjectClientManager *)0x0) ||
                       (pMVar29 = (MVWorldObjectClient *)
                                  MVWorldObjectClientManager::
                                  MVWorldObjectClientManager_GetWorldObject
                                            (pMVar33,(int32_t)pMStack_24,(MethodInfo *)0x0),
                       pMVar29 == (MVWorldObjectClient *)0x0)) goto code_?;
                    func_?();
                    pGVar20 = (this->fields)._._.gameObject;
                    if ((pGVar20 == (GameObject *)0x0) ||
                       (pTVar21 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                  GameObject_get_transform(pGVar20,(MethodInfo *)0x0),
                       pTVar21 == (Transform *)0x0)) goto code_?;
                    method_01 = (Collider__Array *)&UNK_?;
                    pVVar22 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_get_position
                                        ((Vector3 *)&stack0xfffffeec,pTVar21,(MethodInfo *)0x0);
                    unique0x0000a400 = *(double *)pVVar22;
                    auStack_14._28_4_ = (IFormatterConverter *)pVVar22->z;
                    pGVar20 = (this->fields)._._.gameObject;
                    if ((pGVar20 == (GameObject *)0x0) ||
                       (pTVar21 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                  GameObject_get_transform(pGVar20,(MethodInfo *)0x0),
                       pTVar21 == (Transform *)0x0)) goto code_?;
                    pVVar22 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_get_position
                                        ((Vector3 *)&stack0xfffffef8,pTVar21,(MethodInfo *)0x0);
                    auStack_14._32_4_ = pVVar22->x;
                    auStack_14._36_4_ = pVVar22->y;
                    auStack_14._40_4_ = pVVar22->z;
                    func_?();
                    method_00 = (SentryGunBeam *)auStack_14._28_4_;
                    func_?();
                    ray.m_Origin.y = fVar8;
                    ray.m_Origin.x = (float)pDVar7;
                    ray.m_Origin.z = fVar9;
                    ray.m_Direction.x = fVar10;
                    ray.m_Direction.y = (float)pOVar12;
                    ray.m_Direction.z = fVar13;
                    bVar17 = MVSentryGun_HitsTarget(this,ray,(int32_t)pMStack_24,(MethodInfo *)0x0);
                    if (bVar17 != 0) {
                      if (pTStack_19 == (Type__Array *)0x0) goto code_?;
                      method_01 = (Collider__Array *)pMStack_24;
                      bVar17 = System.Core.dll::System::Collections::Generic::HashSet`1[System::
                               UInt32]::HashSet_1_System_UInt32__Contains
                                         ((HashSet_1_System_UInt32_ *)pTStack_19,
                                          (uint32_t)pMStack_24,
                                          MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_
                                         );
                      if (bVar17 == 0) {
                        pDVar34 = (this->fields).woIdsBeamsMap;
                        if (pDVar34 == (Dictionary_2_System_Int32_SentryGunBeam_ *)0x0)
                        goto code_?;
                        method_01 = (Collider__Array *)&UNK_?;
                        bVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                 Int32,System::Object]::
                                 Dictionary_2_System_Int32_System_Object__TryGetValue
                                           ((Dictionary_2_System_Int32_System_Object_ *)pDVar34,
                                            (pMVar29->fields)._.id,(Object **)&pSStack_11,
                                            MethodInfo__System__Collections__Generic__Dictionary<int,_SentryGunBeam>__TryGetValue_int__SentryGunBeam__
                                           );
                        if (bVar17 == 0) {
code_?:
                          pDVar34 = (this->fields).woIdsBeamsMap;
                          if (pDVar34 == (Dictionary_2_System_Int32_SentryGunBeam_ *)0x0)
                          goto code_?;
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32,System::Object]::Dictionary_2_System_Int32_System_Object__Remove
                                    ((Dictionary_2_System_Int32_System_Object_ *)pDVar34,
                                     (pMVar29->fields)._.id,
                                     MethodInfo__System__Collections__Generic__Dictionary<int,_SentryGunBeam>__Remove_int_
                                    );
                          uVar35 = (this->fields).beamType;
                          if (uVar35 == 0) {
                            iVar36 = func_?();
                            if (iVar36 == 0) goto code_?;
                            pOStack_37 = (Object *)
                                         CONCAT31(pOStack_37._1_3_,(this->fields).beamType);
                            method_01 = (Collider__Array *)&UNK_?;
                            pSStack_11 = SentryGunBeam::SentryGunBeam_Create
                                                   (*(SentryGunBeam **)(iVar36 + 0x144),
                                                    (SentryGunBeamType__Enum)pOStack_37,this,
                                                    (MethodInfo *)0x0);
                          }
                          else if (uVar35 == 1) {
                            iVar36 = func_?();
                            if (iVar36 == 0) goto code_?;
                            pSStack_38 = (SerializationInfo *)
                                         CONCAT31(pSStack_38._1_3_,(this->fields).beamType);
                            pSStack_11 = SentryGunBeam::SentryGunBeam_Create
                                                   (*(SentryGunBeam **)(iVar36 + 0x140),
                                                    (SentryGunBeamType__Enum)pSStack_38,this,
                                                    (MethodInfo *)0x0);
                          }
                          else {
                            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0)
                            {
                              func_?();
                            }
                            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                                      ((Object *)StringLiteral_Sentry_gun_have_an_invalid_beam_,
                                       (MethodInfo *)0x0);
                          }
                          pDVar34 = (this->fields).woIdsBeamsMap;
                          if (pDVar34 == (Dictionary_2_System_Int32_SentryGunBeam_ *)0x0)
                          goto code_?;
                          method_00 = pSStack_11;
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32,System::Object]::Dictionary_2_System_Int32_System_Object__Add
                                    ((Dictionary_2_System_Int32_System_Object_ *)pDVar34,
                                     (pMVar29->fields)._.id,(Object *)pSStack_11,
                                     MethodInfo__System__Collections__Generic__Dictionary<int,_SentryGunBeam>__Add_int__SentryGunBeam_
                                    );
                        }
                        else {
                          auStack_14._28_4_ = pSStack_11;
                          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                            func_?();
                          }
                          method_00 = (SentryGunBeam *)0x0;
                          bVar17 = UnityEngine.CoreModule.dll::UnityEngine::Object::
                                   Object_1_op_Inequality
                                             ((Object_1 *)auStack_14._28_4_,(Object_1 *)0x0,
                                              (MethodInfo *)0x0);
                          if (bVar17 == 0) goto code_?;
                          if (pSStack_11 == (SentryGunBeam *)0x0) goto code_?;
                          (pSStack_11->fields).deleteTimer = 1.0;
                        }
                        MVSentryGun_ApplyDamage
                                  (this,pMVar29,(InteractionDataHandlerBase *)pMStack_31,
                                   (MethodInfo *)0x0);
                        System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
                        HashSet_1_System_Int32__System_Collections_Generic_ICollection_T__Add
                                  ((HashSet_1_System_Int32_ *)pTStack_19,(pMVar29->fields)._.id,
                                   MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_)
                        ;
                      }
                    }
                  }
                }
              }
              fStack_25 = (float)((int)fStack_25 + 1);
              pCStack_26 = (Collider__Array *)&pCStack_26->monitor;
            } while ((int)fStack_25 < (int)uStack_23._4_4_);
          }
          pMVar30 = (MethodInfo *)func_?();
          pCStack_26 = (Collider__Array *)pMVar30;
          mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
          __Il2CppFullySharedGenericType]::
          LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                    ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pMVar30,
                     MethodInfo__System__Collections__Generic__List<int>__List__);
          pDVar7 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).woIdsBeamsMap;
          pMStack_31 = pMVar30;
          if (pDVar7 == (Dictionary_2_System_UInt32_System_Object_ *)0x0) goto code_?;
          pDVar39 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::
                    Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                              ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                               &stack0xffffff3c,pDVar7,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_SentryGunBeam>__GetEnumerator__
                              );
          uStack_40 = 0;
          auStack_14._0_4_ = pDVar39->_dictionary;
          auStack_14._4_4_ = pDVar39->_version;
          auStack_14._8_4_ = pDVar39->_index;
          auStack_14._12_4_ = (pDVar39->_current).key;
          auStack_14._16_8_ = *(undefined8 *)&(pDVar39->_current).value;
          uStack_2 = 1;
          pSStack_38 = (SerializationInfo *)auStack_14;
          while (bVar17 = mscorlib.dll::System::Collections::Generic::
                          Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                          Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                                    ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_
                                      *)auStack_14,
                                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_SentryGunBeam>__MoveNext__
                                    ), bVar17 != 0) {
            stack0xffffffb4 = (double)CONCAT44(auStack_14._16_4_,auStack_14._44_4_);
            uStack_23 = CONCAT44(auStack_14._12_4_,(undefined4)uStack_23);
            if (pTStack_19 == (Type__Array *)0x0) goto code_?;
            bVar17 = System.Core.dll::System::Collections::Generic::HashSet`1[System::UInt32]::
                     HashSet_1_System_UInt32__Contains
                               ((HashSet_1_System_UInt32_ *)pTStack_19,auStack_14._12_4_,
                                MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_
                               );
            if (bVar17 == 0) {
              if (pCStack_26 == (Collider__Array *)0x0) goto code_?;
              method_01 = pCStack_26;
              func_?(pCStack_26,uStack_23._4_4_,
                              MethodInfo__System__Collections__Generic__List<int>__Add_int_);
            }
          }
          uStack_2 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)auStack_14,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_SentryGunBeam>__Dispose__
                     ,(MethodInfo *)method_01);
          uStack_2 = 0xffffffff;
          if (pCStack_26 == (Collider__Array *)0x0) goto code_?;
          pMVar15 = (MVSentryGun *)
                    MethodInfo__System__Collections__Generic__List<int>__GetEnumerator__;
          pLVar41 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                              ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                *)&stack0xffffff04,
                               (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                               pCStack_26,
                               MethodInfo__System__Collections__Generic__List<int>__GetEnumerator__)
          ;
          uStack_23 = ZEXT48((Object *)&stack0xffffff2c) << 0x20;
          key = pLVar41->_current;
          uStack_2 = 4;
          while (bVar17 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                          Text::RegularExpressions::RegexCharClass+SingleRange]::
                          List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange__MoveNext
                                    ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                      *)&stack0xffffff2c,
                                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__
                                    ), bVar17 != 0) {
            pDVar34 = (this->fields).woIdsBeamsMap;
            if (pDVar34 == (Dictionary_2_System_Int32_SentryGunBeam_ *)0x0) goto code_?;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__Remove
                      ((Dictionary_2_System_Int32_System_Object_ *)pDVar34,(int32_t)key,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_SentryGunBeam>__Remove_int_
                      );
          }
          uStack_2 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&stack0xffffff2c,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__Dispose__
                     ,(MethodInfo *)method_00);
          uStack_2 = 0xffffffff;
        }
      }
      pMVar42 = (this->fields).gunObject;
      if ((pMVar42 == (MVSentryGunObject *)0x0) ||
         (pSVar43 = (pMVar42->fields).sentryGunScript, pSVar43 == (SentryGunScript *)0x0))
      goto code_?;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      this_02 = (pSVar43->fields).sentryRenderer;
      if (this_02 == (MeshRenderer *)0x0) goto code_?;
      this_05 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                          ((Renderer *)this_02,(MethodInfo *)0x0);
      pTStack_19 = (Type__Array *)
                   UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0)
      ;
      register0x00001200 = (double)(float)pTStack_19;
      fVar44 = (float10)func_?();
      pMVar45 = (MVSentryGun *)((float)pTStack_19 - (float)fVar44);
      if ((float)pMVar45 < 0.0) {
        pMVar45 = (MVSentryGun *)0x0;
      }
      else if ((float)_UNK_? < (float)pMVar45) {
        pMVar45 = _UNK_?;
      }
      uStack_23 = ZEXT48(pMVar45);
      if (this_05 == (Material *)0x0) goto code_?;
      value.y = 0.0;
      value.x = (float)pMVar45;
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTextureOffset
                (this_05,StringLiteral__MainTex,value,(MethodInfo *)0x0);
    }
  }
  MVSentryGun_DoFrameDelete(this,(MethodInfo *)0x0);
  pDVar7 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).woIdsBeamsMap;
  if (pDVar7 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
    pDVar39 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::
              Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                        ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                         &stack0xffffff3c,pDVar7,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_SentryGunBeam>__GetEnumerator__
                        );
    uStack_46 = 0;
    auStack_14._0_4_ = pDVar39->_dictionary;
    auStack_14._4_4_ = pDVar39->_version;
    auStack_14._8_4_ = pDVar39->_index;
    auStack_14._12_4_ = (pDVar39->_current).key;
    auStack_14._16_8_ = *(undefined8 *)&(pDVar39->_current).value;
    uStack_2 = 7;
    pOStack_37 = (Object *)auStack_14;
    while (bVar17 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                    Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                              ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                               auStack_14,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_SentryGunBeam>__MoveNext__
                              ), bVar17 != 0) {
      uStack_23 = CONCAT44(auStack_14._12_4_,(undefined4)uStack_23);
      pTStack_19 = (Type__Array *)auStack_14._16_4_;
      pMVar33 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar33 == (MVWorldObjectClientManager *)0x0) goto code_?;
      pMVar15 = (MVSentryGun *)0x0;
      pMVar47 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (pMVar33,(int32_t)uStack_23._4_4_,(MethodInfo *)0x0);
      if (pMVar47 == (MVWorldObject *)0x0) goto code_?;
      uStack_23 = CONCAT44(pMVar47[1].fields.objectLinkRefs,(undefined4)uStack_23);
      pGVar20 = (this->fields)._._.gameObject;
      if ((pGVar20 == (GameObject *)0x0) ||
         (pTVar21 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (pGVar20,(MethodInfo *)0x0), pTVar21 == (Transform *)0x0))
      goto code_?;
      pVVar22 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          ((Vector3 *)&stack0xffffff08,pTVar21,(MethodInfo *)0x0);
      auStack_14._24_4_ = pVVar22->x;
      auStack_14._28_4_ = pVVar22->y;
      auStack_14._40_4_ = pVVar22->z;
      auStack_14._32_8_ = auStack_14._24_8_;
      pSStack_38 = (SerializationInfo *)auStack_14._40_4_;
      if (uStack_23._4_4_ == (SentryGunBeam *)0x0) goto code_?;
      pBVar48 = UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_get_bounds
                          ((Bounds *)&stack0xffffff3c,(Collider *)uStack_23._4_4_,(MethodInfo *)0x0)
      ;
      fVar8 = (pBVar48->m_Center).x;
      fVar9 = (pBVar48->m_Center).y;
      pTVar49 = (Type *)(pBVar48->m_Center).z;
      if (pTStack_19 == (Type__Array *)0x0) goto code_?;
      pMStack_31 = (MethodInfo *)
                   UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)pTStack_19,(MethodInfo *)0x0);
      value_00.y = fVar9 - (float)auStack_14._36_4_;
      value_00.x = fVar8 - (float)auStack_14._32_4_;
      value_00.z = (float)pTVar49 - (float)auStack_14._40_4_;
      pVVar22 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                          ((Vector3 *)&stack0xfffffef8,value_00,(MethodInfo *)0x0);
      unique0x0000a400 = *(double *)pVVar22;
      uStack_23 = CONCAT44(pVVar22->z,(undefined4)uStack_23);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      forward.z = (float)uStack_23._4_4_;
      forward._0_8_ = stack0xffffffb4;
      pQVar50 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation
                          ((Quaternion *)&stack0xfffffee8,forward,
                           TypeInfo__UnityEngine__Vector3->static_fields->upVector,(MethodInfo *)0x0
                          );
      if (pMStack_31 == (MethodInfo *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                ((Transform *)pMStack_31,*pQVar50,(MethodInfo *)0x0);
      *(ulonglong *)(pTStack_19->vector + 6) = CONCAT44(fVar9,fVar8);
      pTStack_19->vector[8] = pTVar49;
      this_03 = pTStack_19->vector[0];
      *(undefined8 *)(pTStack_19->vector + 3) = auStack_14._24_8_;
      pTStack_19->vector[5] = (Type *)pSStack_38;
      if (this_03 == (Type *)0x0) goto code_?;
      uVar51 = 0;
      position_00.z = (float)pSStack_38;
      position_00.x = (float)auStack_14._24_4_;
      position_00.y = (float)auStack_14._28_4_;
      UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition
                ((LineRenderer *)this_03,0,position_00,(MethodInfo *)0x0);
      if (pTStack_19->vector[0] == (Type *)0x0) goto code_?;
      position_01.y = fVar9;
      position_01.x = (float)uVar51;
      position_01.z = (float)pTVar49;
      UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition
                ((LineRenderer *)pTStack_19->vector[0],1,position_01,(MethodInfo *)0x0);
    }
    uStack_2 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)auStack_14,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_SentryGunBeam>__Dispose__
               ,(MethodInfo *)pMVar15);
    uStack_2 = 0xffffffff;
    pDVar52 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
              *)(this->fields).woIdsBeamsMap;
    if (pDVar52 != (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                   *)0x0) {
      iVar27 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
               StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
               Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Count
                         (pDVar52,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_SentryGunBeam>__get_Count__
                         );
      if (0 < iVar27) {
        pMVar42 = (this->fields).gunObject;
        if ((pMVar42 == (MVSentryGunObject *)0x0) ||
           (pAVar53 = (pMVar42->fields).audioSource, pAVar53 == (AudioSource *)0x0))
        goto code_?;
        bVar17 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_isPlaying
                           (pAVar53,(MethodInfo *)0x0);
        if (bVar17 == 0) {
          pMVar42 = (this->fields).gunObject;
          if ((pMVar42 == (MVSentryGunObject *)0x0) ||
             (pAVar53 = (pMVar42->fields).audioSource, pAVar53 == (AudioSource *)0x0))
          goto code_?;
          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play_1
                    (pAVar53,(MethodInfo *)0x0);
        }
      }
      pDVar52 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                *)(this->fields).woIdsBeamsMap;
      if (pDVar52 != (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                     *)0x0) {
        iVar27 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                 StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                 Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Count
                           (pDVar52,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_SentryGunBeam>__get_Count__
                           );
        if (iVar27 == 0) {
          pMVar42 = (this->fields).gunObject;
          if ((pMVar42 == (MVSentryGunObject *)0x0) ||
             (pAVar53 = (pMVar42->fields).audioSource, pAVar53 == (AudioSource *)0x0))
          goto code_?;
          bVar17 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_isPlaying
                             (pAVar53,(MethodInfo *)0x0);
          if (bVar17 != 0) {
            pMVar42 = (this->fields).gunObject;
            if ((pMVar42 == (MVSentryGunObject *)0x0) ||
               (pAVar53 = (pMVar42->fields).audioSource, pAVar53 == (AudioSource *)0x0))
            goto code_?;
            UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Stop_1
                      (pAVar53,(MethodInfo *)0x0);
          }
        }
        pDVar52 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                  *)(this->fields).woIdsBeamsMap;
        if (pDVar52 != (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                       *)0x0) {
          iVar27 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements
                   ::StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                   Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Count
                             (pDVar52,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_SentryGunBeam>__get_Count__
                             );
          pMVar15 = _UNK_?;
          if (0 < iVar27) {
            pMVar15 = _UNK_?;
          }
          pCVar16 = (this->fields).interactable;
          if (pCVar16 != (ClientSideNPCInteractable *)0x0) {
            bVar17 = ClientSideNPCInteractable::ClientSideNPCInteractable_IsDead
                               (pCVar16,(MethodInfo *)0x0);
            this = pMVar15;
            if (bVar17 != 0) {
              this = (MVSentryGun *)0x0;
            }
            pMStack_31 = (MethodInfo *)(pMVar1->fields).glowFactor;
            fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                               ((MethodInfo *)0x0);
            pMVar15 = (MVSentryGun *)(fVar8 * _UNK_?);
            if ((float)pMVar15 < 0.0) {
              pMVar15 = (MVSentryGun *)0x0;
            }
            else if ((float)_UNK_? < (float)pMVar15) {
              pMVar15 = _UNK_?;
            }
            (pMVar1->fields).glowFactor =
                 ((float)this - (float)pMStack_31) * (float)pMVar15 + (float)pMStack_31;
            *unaff_FS_OFFSET = uStack_4;
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  func_?();
  func_?();
  func_?();
  pcVar54 = (code *)swi(3);
  (*pcVar54)();
  return;
}


/* Void ReceiveDamage(Single, MVPlayer, PlayerKilledByType) */

void Assembly-CSharp.dll::MVSentryGun::MVSentryGun_ReceiveDamage
               (MVSentryGun *this,float amount,MVPlayer *damageDealer,
               PlayerKilledByType__Enum damageType,MethodInfo *method)

{
  if (amount <= 0.0) {
    return;
  }
  pMVar1 = (this->fields).gunObject;
  if ((pMVar1 != (MVSentryGunObject *)0x0) &&
     (pSVar2 = (pMVar1->fields).sentryGunScript, pSVar2 != (SentryGunScript *)0x0)) {
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    (pSVar2->fields).damageBlinkTimeoutTime = fVar3 + _UNK_?;
    this_00 = (this->fields).interactable;
    if (this_00 != (ClientSideNPCInteractable *)0x0) {
      bVar4 = ClientSideNPCInteractable::ClientSideNPCInteractable_IsDead(this_00,(MethodInfo *)0x0)
      ;
      if (bVar4 == 0) {
code_?:
        MVSentryGun_UpdateSentryState(this,(MethodInfo *)0x0);
        return;
      }
      pMVar1 = (this->fields).gunObject;
      if ((pMVar1 != (MVSentryGunObject *)0x0) &&
         (pSVar2 = (pMVar1->fields).sentryGunScript, pSVar2 != (SentryGunScript *)0x0)) {
        if (cRam_? == '\0') {
          func_?(&
                          UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem__UnityEngine__Vector3__UnityEngine__Quaternion_
                         );
          func_?(&TypeInfo__UnityEngine__Object);
          cRam_? = '\x01';
        }
        if (cRam_? == '\0') {
          func_?(&TypeInfo__PrefabPool);
          cRam_? = '\x01';
        }
        pPVar5 = TypeInfo__PrefabPool->static_fields->instance;
        if (pPVar5 != (PrefabPool *)0x0) {
          pPVar6 = (pPVar5->fields).particleExplosion;
          pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)pSVar2,(MethodInfo *)0x0);
          if (pTVar7 != (Transform *)0x0) {
            pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                ((Vector3 *)&stack0xffffffe8,pTVar7,(MethodInfo *)0x0);
            amount = pVVar8->z;
            pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               ((Component *)pSVar2,(MethodInfo *)0x0);
            if (pTVar7 != (Transform *)0x0) {
              uVar9 = CONCAT44(pTVar7,(Quaternion *)&stack0xffffffe4);
              pQVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                                  ((Quaternion *)&stack0xffffffe4,pTVar7,(MethodInfo *)0x0);
              fVar3 = pQVar10->x;
              fVar11 = pQVar10->y;
              fVar12 = pQVar10->z;
              fVar13 = pQVar10->w;
              if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                amount = (float)TypeInfo__UnityEngine__Object;
                func_?();
              }
              position.z = amount;
              position.x = (float)(int)uVar9;
              position.y = (float)(int)((ulonglong)uVar9 >> 0x20);
              rotation.y = fVar11;
              rotation.x = fVar3;
              rotation.z = fVar12;
              rotation.w = fVar13;
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_7
                        ((Object *)pPVar6,position,rotation,
                         UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem__UnityEngine__Vector3__UnityEngine__Quaternion_
                        );
              pMVar1 = (this->fields).gunObject;
              if (((pMVar1 != (MVSentryGunObject *)0x0) &&
                  (pSVar2 = (pMVar1->fields).sentryGunScript, pSVar2 != (SentryGunScript *)0x0)) &&
                 (pPVar6 = (pSVar2->fields).smokeEffectEmitter, pPVar6 != (ParticleSystem *)0x0)) {
                UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
                ParticleSystem_Play_1(pPVar6,(MethodInfo *)0x0);
                (this->fields).wasDead = 1;
                goto code_?;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::MVSentryGun::MVSentryGun_Reset(MVSentryGun *this,MethodInfo *method)

{
  this_00 = (this->fields).interactable;
  (this->fields).wasDead = 0;
  if (this_00 != (ClientSideNPCInteractable *)0x0) {
    ClientSideNPCInteractable::ClientSideNPCInteractable_Reset(this_00,(MethodInfo *)0x0);
    MVSentryGun_UpdateSentryState(this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Select(Color) */

void Assembly-CSharp.dll::MVSentryGun::MVSentryGun_Select
               (MVSentryGun *this,Color color,MethodInfo *method)

{
  MVWorldObjectClient::MVWorldObjectClient_set_Selected
            ((MVWorldObjectClient *)this,1,(MethodInfo *)0x0);
  return;
}


/* Void UpdateSentryState() */

void Assembly-CSharp.dll::MVSentryGun::MVSentryGun_UpdateSentryState
               (MVSentryGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Extensions);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    func_?(&StringLiteral_health);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).interactable;
  if (this_00 != (ClientSideNPCInteractable *)0x0) {
    bVar1 = ClientSideNPCInteractable::ClientSideNPCInteractable_IsDead(this_00,(MethodInfo *)0x0);
    pMVar2 = (this->fields).gunObject;
    if (bVar1 == 0) {
      if (((pMVar2 != (MVSentryGunObject *)0x0) &&
          (pSVar3 = (pMVar2->fields).sentryGunScript, pSVar3 != (SentryGunScript *)0x0)) &&
         (this_01 = (pSVar3->fields).smokeEffectEmitter, this_01 != (ParticleSystem *)0x0)) {
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Stop_2
                  (this_01,(MethodInfo *)0x0);
        pMVar2 = (this->fields).gunObject;
        if (pMVar2 != (MVSentryGunObject *)0x0) {
          pSVar3 = (pMVar2->fields).sentryGunScript;
          hashtable = (Dictionary_2_System_Object_System_Object_ *)
                      (*(code *)(this->klass->vtable).get_RunTimeData.method)(this);
          if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__Extensions);
          }
          this = (MVSentryGun *)
                 Extensions::Extensions_GetObscuredType
                           (hashtable,StringLiteral_health,(MethodInfo *)0x0);
          if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
              cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
          }
          if (this != (MVSentryGun *)0x0) {
            pOVar4 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat;
            if ((this->klass->_0).element_class !=
                (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_0).element_class)
            goto code_?;
            pOVar5 = (ObscuredFloat *)func_?(this);
            value = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                    ObscuredFloat::ObscuredFloat_op_Implicit_1(*pOVar5,(MethodInfo *)0x0);
            if (pSVar3 != (SentryGunScript *)0x0) {
              SentryGunScript::SentryGunScript_SetHealth(pSVar3,value,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
    else if ((pMVar2 != (MVSentryGunObject *)0x0) &&
            (pSVar3 = (pMVar2->fields).sentryGunScript, pSVar3 != (SentryGunScript *)0x0)) {
      SentryGunScript::SentryGunScript_SetHealth(pSVar3,0.0,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pOVar4 = extraout_ECX;
code_?:
  func_?(this,pOVar4);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* MVSentryGun(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVSentryGun::MVSentryGun__ctor
               (MVSentryGun *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_SentryGunBeam>__Dictionary__
                   );
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_SentryGunBeam>);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    func_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    func_?(&TypeInfo__IntervalWithRandomSeed);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__List_int_);
    func_?(&TypeInfo__System__Collections__Generic__List<int>);
    func_?(&TypeInfo__MVSentryGunObject);
    cRam_? = '\x01';
  }
  (this->fields).laserRange = 20.0;
  (this->fields).pushBackStrength = 5.0;
  this_00 = (IntervalWithRandomSeed *)func_?(TypeInfo__IntervalWithRandomSeed);
  IntervalWithRandomSeed::IntervalWithRandomSeed__ctor(this_00,1.0,(MethodInfo *)0x0);
  (this->fields).intervalWithRandomSeed = this_00;
  func_?(&(this->fields).intervalWithRandomSeed,this_00);
  this_01 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_SentryGunBeam>)
  ;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<int,_SentryGunBeam>__Dictionary__)
  ;
  (this->fields).woIdsBeamsMap = (Dictionary_2_System_Int32_SentryGunBeam_ *)this_01;
  func_?(&(this->fields).woIdsBeamsMap,this_01);
  this_02 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
             *)func_?(TypeInfo__System__Collections__Generic__List<int>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
  MultiColumnCollectionHeader+ViewState+ColumnState]::
  List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
            (this_02,8,MethodInfo__System__Collections__Generic__List<int>__List_int_);
  (this->fields).deleteList = (List_1_System_Int32_ *)this_02;
  func_?(&(this->fields).deleteList,this_02);
  (this->fields).glowFactor = 0.5;
  (this->fields).beamType = 1;
  if (cRam_? == '\0') {
    worldObjects = (Dictionary_2_System_Int32_MVWorldObjectClient_ *)&UNK_?;
    func_?();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 != (PrefabPool *)0x0) {
    data_00 = (Dictionary_2_System_Object_System_Object_ *)(pPVar1->fields).mvSentryGunPrefab;
    MVLogicObject::MVLogicObject__ctor
              ((MVLogicObject *)this,data_00,(ObjectPrefab *)data_00,worldObjects,(MethodInfo *)0x0)
    ;
    piVar2 = &(this->fields)._._.interactionFlags;
    *(uint *)piVar2 = (uint)*piVar2 | 0x10000;
    piVar2 = &(this->fields)._._.interactionFlags;
    *(uint *)piVar2 = (uint)*piVar2 | 8;
    pMVar3 = (MVSentryGunObject *)(this->fields)._._.component;
    *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) =
         *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4);
    if (pMVar3 == (MVSentryGunObject *)0x0) {
      (this->fields).gunObject = (MVSentryGunObject *)0x0;
    }
    else {
      if (((((ObjectPrefab__Class *)pMVar3->klass)->_1).naturalAligment <
           (TypeInfo__MVSentryGunObject->_1).naturalAligment) ||
         ((((ObjectPrefab__Class *)pMVar3->klass)->_1).typeHierarchy
          [(TypeInfo__MVSentryGunObject->_1).naturalAligment - 1] !=
          (Il2CppClass *)TypeInfo__MVSentryGunObject)) goto code_?;
      (this->fields).gunObject = pMVar3;
      if (((((ObjectPrefab__Class *)pMVar3->klass)->_1).naturalAligment <
           (TypeInfo__MVSentryGunObject->_1).naturalAligment) ||
         ((((ObjectPrefab__Class *)pMVar3->klass)->_1).typeHierarchy
          [(TypeInfo__MVSentryGunObject->_1).naturalAligment - 1] !=
          (Il2CppClass *)TypeInfo__MVSentryGunObject)) goto code_?;
    }
    func_?();
    this_03 = (HashSet_1_System_Int32_ *)func_?();
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
    HashSet_1_System_Int32___ctor
              (this_03,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    if (this_03 != (HashSet_1_System_Int32_ *)0x0) {
      System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
      HashSet_1_System_Int32__System_Collections_Generic_ICollection_T__Add
                (this_03,(this->fields)._._._.id,
                 MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
      (this->fields)._RaycastIgnoreWorldObjectIds_k__BackingField = this_03;
      func_?();
      (this->fields)._._._PlayInteractionType_k__BackingField = 1;
      return;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* MVWorldObjectDocumentationType get_DocumentationType() */

MVWorldObjectDocumentationType__Enum
Assembly-CSharp.dll::MVSentryGun::MVSentryGun_get_DocumentationType
          (MVSentryGun *this,MethodInfo *method)

{
  uVar1 = (this->fields).beamType;
  if (uVar1 == 0) {
    return MVWorldObjectDocumentationType__Enum_FireSentryTower;
  }
  MVar2 = MVWorldObjectDocumentationType__Enum_Missing;
  if (uVar1 == 1) {
    MVar2 = MVWorldObjectDocumentationType__Enum_FrostSentryTower;
  }
  return MVar2;
}


/* Vector3 get_InputConnectorOffset() */

Vector3 * Assembly-CSharp.dll::MVSentryGun::MVSentryGun_get_InputConnectorOffset
                    (Vector3 *__return_storage_ptr__,MVSentryGun *this,MethodInfo *method)

{
  __return_storage_ptr__->x = -2.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  return __return_storage_ptr__;
}

