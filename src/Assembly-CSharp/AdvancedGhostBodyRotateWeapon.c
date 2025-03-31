
/* Void Attack(Int32) */

void Assembly-CSharp.dll::AdvancedGhostBodyRotateWeapon::AdvancedGhostBodyRotateWeapon_Attack
               (AdvancedGhostBodyRotateWeapon *this,int32_t woid,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_01 == (MVWorldObjectClientManager *)0x0) {
code_?:
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this_02 = (MVWorldObjectClient *)
            MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                      (this_01,woid,(MethodInfo *)0x0);
  if (this_02 != (MVWorldObjectClient *)0x0) {
    pTVar2 = (this->fields).timeoutMap;
    if (pTVar2 == (TimeoutMap *)0x0) goto code_?;
    bVar3 = TimeoutMap::TimeoutMap_Contains(pTVar2,(this_02->fields)._.id,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      this_03 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                          (this_02,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)this_03,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar3 != 0) {
        pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar4 != (MVNetworkGame *)0x0) &&
           (pMVar5 = (pMVar4->fields).teamManager, pMVar5 != (MVTeamManager *)0x0)) {
          MVar6 = MVTeamManager::MVTeamManager_GetTeamFromActorNr
                            (pMVar5,(this_02->fields)._.ownerActorNr,(MethodInfo *)0x0);
          if (MVar6 == (this->fields).alliedTeam) {
            pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if ((pMVar4 == (MVNetworkGame *)0x0) ||
               (pMVar5 = (pMVar4->fields).teamManager, pMVar5 == (MVTeamManager *)0x0))
            goto code_?;
            MVTeamManager::MVTeamManager_TeamCount(pMVar5,(MethodInfo *)0x0);
          }
          (*(code *)(this_02->klass->vtable).GetTargetPosition.method)();
          this_04 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)this,(MethodInfo *)0x0);
          if ((this_04 != (GameObject *)0x0) &&
             (this_05 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(this_04,(MethodInfo *)0x0),
             this_05 != (Transform *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                      ((Vector3 *)&stack0xffffffd8,this_05,(MethodInfo *)0x0);
            puVar7 = (undefined8 *)func_?();
            fVar8 = (this->fields).factor;
            impulse.y = (float)(MonitorData *)((ulonglong)*puVar7 >> 0x20) * _UNK_? * fVar8;
            impulse.x = (float)(Enum__Class *)*puVar7 * _UNK_? * fVar8;
            impulse.z = *(float *)(puVar7 + 1) * _UNK_? * fVar8;
            pIVar9 = AdvancedGhostBodyRotateWeaponPackage::
                      AdvancedGhostBodyRotateWeaponPackage_Create
                                ((InteractionData *)&stack0xffffffd0,(float)this_02,impulse,
                                 (MethodInfo *)0x0);
            if (this_03 != (InteractionDataHandlerBase *)0x0) {
              bVar3 = InteractionDataHandlerBase::InteractionDataHandlerBase_HandleInteraction
                                (this_03,*pIVar9,1,(MethodInfo *)0x0);
              if (bVar3 == 0) {
                return;
              }
              pTVar2 = (this->fields).timeoutMap;
              if (pTVar2 != (TimeoutMap *)0x0) {
                TimeoutMap::TimeoutMap_Add(pTVar2,(this_02->fields)._.id,(MethodInfo *)0x0);
                this_00 = (this->fields).weaponHitSound;
                if (this_00 != (AudioSource *)0x0) {
                  UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play_1
                            (this_00,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
        goto code_?;
      }
      pSVar10 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xffffffe4,(MethodInfo *)0x0)
      ;
      pSVar10 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_WorldObject_does_not_have_intera,pSVar10,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)pSVar10,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void Init(AudioSource, MVCubeModelBase) */

void Assembly-CSharp.dll::AdvancedGhostBodyRotateWeapon::AdvancedGhostBodyRotateWeapon_Init
               (AdvancedGhostBodyRotateWeapon *this,AudioSource *hitSound,MVCubeModelBase *body,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<CubeModelChangedEventArgs>);
    func_?(&
                    MethodInfo__AdvancedGhostBodyRotateWeapon__body_Changed_CubeModelChangedEventArgs_
                   );
    cRam_? = '\x01';
  }
  (this->fields).weaponHitSound = hitSound;
  func_?(&(this->fields).weaponHitSound,hitSound);
  if (body == (MVCubeModelBase *)0x0) {
    func_?();
  }
  else {
    pAVar1 = (body->fields).Changed;
    this_00 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
               *)func_?(TypeInfo__System__Action<CubeModelChangedEventArgs>);
    DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
    DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              (this_00,(Object *)this,
               MethodInfo__AdvancedGhostBodyRotateWeapon__body_Changed_CubeModelChangedEventArgs_,
               (MethodInfo *)0x0);
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar1,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pDVar2 == (Delegate *)0x0) {
      (body->fields).Changed = (Action_1_CubeModelChangedEventArgs_ *)0x0;
code_?:
      func_?();
      AdvancedGhostBodyRotateWeapon_SetupWeaponCollision
                ((AdvancedGhostBodyRotateWeapon *)&(body->fields).Changed,(MethodInfo *)0x0);
      return;
    }
    pAVar1 = (Action_1_CubeModelChangedEventArgs_ *)func_?();
    if (pAVar1 != (Action_1_CubeModelChangedEventArgs_ *)0x0) {
      (body->fields).Changed = pAVar1;
      iVar3 = func_?();
      if (iVar3 != 0) goto code_?;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetupWeaponCollision() */

void Assembly-CSharp.dll::AdvancedGhostBodyRotateWeapon::
     AdvancedGhostBodyRotateWeapon_SetupWeaponCollision
               (AdvancedGhostBodyRotateWeapon *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__
                   );
    func_?(&
                    AdvancedGhostTriggerBase_MethodInfo__UnityEngine__GameObject__AddComponent<AdvancedGhostTriggerBase>__
                   );
    func_?(&
                    AdvancedGhostTriggerBase_MethodInfo__UnityEngine__GameObject__GetComponent<AdvancedGhostTriggerBase>__
                   );
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AdvancedGhostTriggerBase>__Add_AdvancedGhostTriggerBase_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AdvancedGhostTriggerBase>__Clear__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__UnityEngine__Transform);
    cRam_? = '\x01';
  }
  pLVar4 = (this->fields).ghostTriggers;
  if (pLVar4 != (List_1_AdvancedGhostTriggerBase_ *)0x0) {
    iVar5 = (pLVar4->fields)._size;
    piVar6 = &(pLVar4->fields)._version;
    *piVar6 = *piVar6 + 1;
    (pLVar4->fields)._size = 0;
    if (0 < iVar5) {
      mscorlib.dll::System::Array::Array_Clear
                ((Array *)(pLVar4->fields)._items,0,iVar5,(MethodInfo *)0x0);
    }
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    if (this_00 != (Transform *)0x0) {
      pIVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetEnumerator
                         (this_00,(MethodInfo *)0x0);
      uStack_1 = 1;
      while (pIVar7 != (IEnumerator *)0x0) {
        cVar8 = func_?(0,TypeInfo__System__Collections__IEnumerator,pIVar7);
        if (cVar8 == '\0') {
          uStack_1 = 0xffffffff;
          iVar5 = func_?(pIVar7,TypeInfo__System__IDisposable);
          if (iVar5 != 0) {
            func_?(0,TypeInfo__System__IDisposable,iVar5);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        unaff_ESI = (Component *)0x0;
        if (pIVar7 == (IEnumerator *)0x0) break;
        pIVar9 = pIVar7->klass;
        uVar10 = 0;
        uVar11._0_1_ = (pIVar9->_1).rank;
        uVar11._1_1_ = (pIVar9->_1).minimumAlignment;
        if (uVar11 != 0) {
          do {
            if (pIVar9->interfaceOffsets[uVar10].interfaceType ==
                (Il2CppClass *)TypeInfo__System__Collections__IEnumerator) {
              ppMVar12 = &(&(pIVar7->klass->vtable).get_Current)
                         [pIVar7->klass->interfaceOffsets[uVar10].offset].method;
              goto code_?;
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < uVar11);
        }
        ppMVar12 = (MethodInfo **)
                  func_?(pIVar7,TypeInfo__System__Collections__IEnumerator,1);
code_?:
        unaff_ESI = (Component *)(*(code *)*ppMVar12)(pIVar7,ppMVar12[1]);
        if (unaff_ESI == (Component *)0x0) break;
        pTVar13 = TypeInfo__UnityEngine__Transform;
        if (((unaff_ESI->klass->_1).naturalAligment <
             (TypeInfo__UnityEngine__Transform->_1).naturalAligment) ||
           ((unaff_ESI->klass->_1).typeHierarchy
            [(TypeInfo__UnityEngine__Transform->_1).naturalAligment - 1] !=
            (Il2CppClass *)TypeInfo__UnityEngine__Transform)) goto code_?;
        pOVar14 = (Object_1 *)
                  UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                            (unaff_ESI,
                             UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__
                            );
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar15 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          (pOVar14,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar15 != 0) {
          this_01 = (Collider *)
                    UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                              (unaff_ESI,
                               UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__
                              );
          if (this_01 == (Collider *)0x0) break;
          UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_isTrigger
                    (this_01,1,(MethodInfo *)0x0);
          pGVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              (unaff_ESI,(MethodInfo *)0x0);
          if (pGVar16 == (GameObject *)0x0) break;
          pOVar14 = (Object_1 *)
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                              (pGVar16,
                               AdvancedGhostTriggerBase_MethodInfo__UnityEngine__GameObject__GetComponent<AdvancedGhostTriggerBase>__
                              );
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          bVar15 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                            (pOVar14,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar15 != 0) {
            pGVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                (unaff_ESI,(MethodInfo *)0x0);
            if (pGVar16 == (GameObject *)0x0) break;
            pOVar14 = (Object_1 *)
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                                (pGVar16,
                                 AdvancedGhostTriggerBase_MethodInfo__UnityEngine__GameObject__AddComponent<AdvancedGhostTriggerBase>__
                                );
          }
          pLVar4 = (this->fields).ghostTriggers;
          if (pLVar4 == (List_1_AdvancedGhostTriggerBase_ *)0x0) break;
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Add
                    ((List_1_System_Object_ *)pLVar4,(Object *)pOVar14,
                     MethodInfo__System__Collections__Generic__List<AdvancedGhostTriggerBase>__Add_AdvancedGhostTriggerBase_
                    );
        }
      }
    }
  }
  func_?();
  pTVar13 = extraout_EDX;
code_?:
  func_?(unaff_ESI,pTVar13);
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::AdvancedGhostBodyRotateWeapon::AdvancedGhostBodyRotateWeapon_Update
               (AdvancedGhostBodyRotateWeapon *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb8;
  puVar5 = &stack0xffffffb8;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<AdvancedGhostTriggerBase>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<AdvancedGhostTriggerBase>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<AdvancedGhostTriggerBase>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AdvancedGhostTriggerBase>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  LStack_6._list = (List_1_System_Object_ *)0x0;
  LStack_6._index = 0;
  LStack_6._version = 0;
  LStack_6._current = (Object *)0x0;
  if (0.0 < (this->fields).factor) {
    this_00 = (this->fields).timeoutMap;
    if (this_00 != (TimeoutMap *)0x0) {
      TimeoutMap::TimeoutMap_Update(this_00,(MethodInfo *)0x0);
      this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                (this->fields).ghostTriggers;
      if (this_01 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
        pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                 ::RegexCharClass+SingleRange]::
                 List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                           (&LStack_8,this_01,
                            MethodInfo__System__Collections__Generic__List<AdvancedGhostTriggerBase>__GetEnumerator__
                           );
        LStack_6._list = (List_1_System_Object_ *)pLVar7->_list;
        LStack_6._index = pLVar7->_index;
        LStack_6._version = pLVar7->_version;
        LStack_6._current = *(Object **)&pLVar7->_current;
        LStack_8._version = 0;
        uStack_1 = 1;
        LStack_8._current = (RegexCharClass_SingleRange)&LStack_6;
        while( true ) {
          bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                  List_1_T_Enumerator_System_Object__MoveNext
                            (&LStack_6,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<AdvancedGhostTriggerBase>__MoveNext__
                            );
          pOVar10 = LStack_6._current;
          if (bVar9 == 0) break;
          if ((RegexCharClass_SingleRange)LStack_6._current == (RegexCharClass_SingleRange)0x0)
          goto code_?;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pIStack_11 = System.Core.dll::System::Linq::Enumerable::Enumerable_ToArray
                                 (*(IEnumerable_1_System_Int32_ **)((int)pOVar10 + 0x10),
                                  System__Int32__MethodInfo__System__Linq__Enumerable__ToArray<int>_System__Collections__Generic__IEnumerable<int>_____
                                 );
          uVar12 = 0;
          if (pIStack_11 == (Int32__Array *)0x0) goto code_?;
          for (; (int)uVar12 < (int)pIStack_11->max_length; uVar12 = uVar12 + 1) {
            if (pIStack_11->max_length <= uVar12) {
              func_?();
              goto code_?;
            }
            AdvancedGhostBodyRotateWeapon_Attack(this,pIStack_11->vector[uVar12],(MethodInfo *)0x0);
          }
        }
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&LStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<AdvancedGhostTriggerBase>__Dispose__
                   ,unaff_EBX);
        goto code_?;
      }
    }
code_?:
    func_?();
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
code_?:
  *unaff_FS_OFFSET = uStack_3;
  return;
}


/* AdvancedGhostBodyRotateWeapon() */

void Assembly-CSharp.dll::AdvancedGhostBodyRotateWeapon::AdvancedGhostBodyRotateWeapon__ctor
               (AdvancedGhostBodyRotateWeapon *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AdvancedGhostTriggerBase>__List__
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<AdvancedGhostTriggerBase>);
    func_?(&TypeInfo__TimeoutMap);
    cRam_? = '\x01';
  }
  (this->fields).factor = 1.0;
  this_00 = (TimeoutMap *)func_?(TypeInfo__TimeoutMap);
  TimeoutMap::TimeoutMap__ctor(this_00,0.5,(MethodInfo *)0x0);
  (this->fields).timeoutMap = this_00;
  func_?(&(this->fields).timeoutMap,this_00);
  (this->fields).alliedTeam = 4;
  this_01 = (List_1_AdvancedGhostTriggerBase_ *)
            func_?(TypeInfo__System__Collections__Generic__List<AdvancedGhostTriggerBase>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
             MethodInfo__System__Collections__Generic__List<AdvancedGhostTriggerBase>__List__);
  (this->fields).ghostTriggers = this_01;
  func_?(&(this->fields).ghostTriggers,this_01);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}


/* Void body_Changed(CubeModelChangedEventArgs) */

void Assembly-CSharp.dll::AdvancedGhostBodyRotateWeapon::AdvancedGhostBodyRotateWeapon_body_Changed
               (AdvancedGhostBodyRotateWeapon *this,CubeModelChangedEventArgs *e,MethodInfo *method)

{
  AdvancedGhostBodyRotateWeapon_SetupWeaponCollision(this,(MethodInfo *)0x0);
  return;
}

