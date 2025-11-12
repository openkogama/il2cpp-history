
/* Int32 FindParentID(Transform) */

int32_t Assembly-CSharp.dll::PickController::PickController_FindParentID
                  (PickController *this,Transform *t,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (t == (Transform *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                     (t,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pTVar3 != (Transform *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pTVar3->fields)._._.m_CachedPtr != (void *)0x0) {
      this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                         (t,(MethodInfo *)0x0);
      if (((pTVar3 != (Transform *)0x0) &&
          (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)pTVar3,(MethodInfo *)0x0), this_01 != (GameObject *)0x0
          )) && (iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                                   ((Object_1 *)this_01,(MethodInfo *)0x0),
                this_00 != (MVWorldObjectClientManager *)0x0)) {
        pMVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectByGoId
                           (this_00,iVar2,(MethodInfo *)0x0);
        if (pMVar4 == (MVWorldObjectClient *)0x0) {
          return -1;
        }
        return (pMVar4->fields)._.id;
      }
      goto code_?;
    }
  }
  return -1;
}


/* Void Initialize(UnityAction`1[System.Int32], Boolean) */

void Assembly-CSharp.dll::PickController::PickController_Initialize
               (PickController *this,UnityAction_1_System_Int32_ *onPickCallback,bool setText,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&PickHelper_MethodInfo__UnityEngine__Object__Instantiate<PickHelper>_PickHelper_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__PickController__SelectionChanged_MVWorldObjectClient__MVWorldObjectClient_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__PickController____c__DisplayClass7_0___Initialize_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__PickController____c__DisplayClass7_0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_MVWorldObjectClient>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Select_wo_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__PickController____c__DisplayClass7_0);
  bVar1 = iRam_? != 0;
  (this->fields).pickCallback = onPickCallback;
  (this->fields).shouldSetText = setText;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).pickCallback >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  original = (this->fields).pickHelperPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar6 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      PickHelper_MethodInfo__UnityEngine__Object__Instantiate<PickHelper>_PickHelper_
                     );
  if (object != (Object *)0x0) {
    bVar1 = iRam_? != 0;
    object[1].klass = pOVar6;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)(object + 1) >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    pOVar6 = object[1].klass;
    this_01 = (UnityAction_2_System_Object_System_Object_ *)
              FUN_?(
                           TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_MVWorldObjectClient>
                           );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_01,(Object *)this,
               MethodInfo__PickController__SelectionChanged_MVWorldObjectClient__MVWorldObjectClient_
               ,(MethodInfo *)0x0);
    if (pOVar6 != (Object__Class *)0x0) {
      PickHelper::PickHelper_Initialize
                ((PickHelper *)pOVar6,
                 (UnityAction_2_MVWorldObjectClient_MVWorldObjectClient_ *)this_01,
                 StringLiteral_Select_wo_,(MethodInfo *)0x0);
      pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      this_02 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                (this_02,object,
                 MethodInfo__PickController____c__DisplayClass7_0___Initialize_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      pMVar8 = 
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
      ;
      if ((
          UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                     );
        LOCK();
        UNLOCK();
        if ((pMVar8->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?(pMVar8);
        }
      }
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
                (pGVar7,(IList_1_UnityEngine_Transform_ *)
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                        s_InternalTransformList,(MethodInfo *)0x0);
      pLVar9 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
               s_InternalTransformList;
      if (pLVar9 != (List_1_UnityEngine_Transform_ *)0x0) {
        lVar3 = (longlong)(pLVar9->fields)._size;
        uVar2 = 0;
        if (0 < lVar3) {
          lVar10 = 0;
          lVar11 = 0x20;
          do {
            if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
              FUN_?();
            }
            pLVar9 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                     s_InternalTransformList;
            if (pLVar9 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
            if ((uint)(pLVar9->fields)._size <= uVar2) {
              mscorlib.dll::System::ThrowHelper::
              ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pTVar13 = (pLVar9->fields)._items;
            if (pTVar13 == (Transform__Array *)0x0) goto code_?;
            if ((uint)pTVar13->max_length <= uVar2) {
              FUN_?();
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            this_00 = *(Component **)((longlong)pTVar13->vector + lVar11 + -0x20);
            if (this_00 == (Component *)0x0) goto code_?;
            pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               (this_00,(MethodInfo *)0x0);
            bVar14 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                    ExecuteEvents_Execute_18
                              (pGVar7,(BaseEventData *)0x0,this_02,
                               (pMVar8->field7_0x38).rgctx_data[1].method);
            if (bVar14 != 0) {
              UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        (this_00,(MethodInfo *)0x0);
              return;
            }
            uVar2 = uVar2 + 1;
            lVar10 = lVar10 + 1;
            lVar11 = lVar11 + 8;
          } while (lVar10 < lVar3);
        }
        return;
      }
code_?:
      FUN_?();
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void Refresh() */

void Assembly-CSharp.dll::PickController::PickController_Refresh
               (PickController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Failed_to_parse_woid);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_No_wo_with_id__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Parent_is_not_valid_wo);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_WO_Root_Group);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Can_t_choose_WO_Root_Group);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = ::StringLiteral__;
  pTVar2 = (this->fields).woIDText;
  aIStackX_8[0].m_value = 0;
  if (pTVar2 == (Text *)0x0) goto code_?;
  lVar3 = (*(pTVar2->klass->vtable).get_text.methodPtr)
                    (pTVar2,(pTVar2->klass->vtable).get_text.method);
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar4 = StringLiteral_Failed_to_parse_woid;
  if (lVar3 != 0) {
    if (cRam_? == '\0') {
      FUN_?();
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    RStack_5._pointer._value = (void *)(lVar3 + 0x14);
    RStack_5._12_4_ = 0;
    RStack_5._length = *(uint *)(lVar3 + 0x10);
    info = mscorlib.dll::System::Globalization::NumberFormatInfo::NumberFormatInfo_get_CurrentInfo
                     ((MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
      FUN_?();
    }
    bVar6 = mscorlib.dll::System::Number::Number_TryParseInt32
                      (&RStack_5,NumberStyles__Enum_Integer,info,&aIStackX_8[0].m_value,
                       (MethodInfo *)0x0);
    pSVar4 = StringLiteral_Failed_to_parse_woid;
    if (bVar6 != 0) {
      pMVar7 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar7 == (MVWorldObjectClientManager *)0x0) goto code_?;
      pMVar8 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                         (pMVar7,aIStackX_8[0].m_value,(MethodInfo *)0x0);
      if (pMVar8 == (MVWorldObjectClient *)0x0) {
        pSVar4 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_8,(MethodInfo *)0x0);
        pSVar4 = mscorlib.dll::System::String::String_Concat_4
                           (StringLiteral_No_wo_with_id__,pSVar4,(MethodInfo *)0x0);
      }
      else {
        if ((pMVar8->fields)._.groupId == -1) {
          pTVar2 = (this->fields).woIDText;
          if (pTVar2 == (Text *)0x0) goto code_?;
          (*(pTVar2->klass->vtable).set_text.methodPtr)
                    (pTVar2,::StringLiteral__,(pTVar2->klass->vtable).set_text.method);
          pTVar2 = (this->fields).woType;
          if (pTVar2 == (Text *)0x0) goto code_?;
          pIVar9 = (pTVar2->klass->vtable).set_text.methodPtr;
          pMVar10 = (pTVar2->klass->vtable).set_text.method;
          pSVar1 = StringLiteral_Can_t_choose_WO_Root_Group;
          goto code_?;
        }
        plVar11 = (longlong *)FUN_?(&(pMVar8->klass->_0).byval_arg);
        if (plVar11 == (longlong *)0x0) goto code_?;
        pSVar4 = (String *)(**(code **)(*plVar11 + 0x168))(plVar11);
        pTVar12 = (pMVar8->fields).transform;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (pTVar12 == (Transform *)0x0) goto code_?;
        pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                           (pTVar12,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pSVar1 = StringLiteral_Parent_is_not_valid_wo;
        if (pTVar13 != (Transform *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          pSVar1 = StringLiteral_Parent_is_not_valid_wo;
          if ((pTVar13->fields)._._.m_CachedPtr != (void *)0x0) {
            pMVar7 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                               (pTVar12,(MethodInfo *)0x0);
            if (((pTVar12 == (Transform *)0x0) ||
                (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_get_gameObject((Component *)pTVar12,(MethodInfo *)0x0),
                this_00 == (GameObject *)0x0)) ||
               (goId = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                                 ((Object_1 *)this_00,(MethodInfo *)0x0),
               pMVar7 == (MVWorldObjectClientManager *)0x0)) goto code_?;
            pMVar8 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectByGoId
                               (pMVar7,goId,(MethodInfo *)0x0);
            pSVar1 = StringLiteral_Parent_is_not_valid_wo;
            if ((pMVar8 != (MVWorldObjectClient *)0x0) && (id = (pMVar8->fields)._.id, id != -1)) {
              pMVar7 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
              if ((pMVar7 == (MVWorldObjectClientManager *)0x0) ||
                 (pMVar8 = MVWorldObjectClientManager::
                           MVWorldObjectClientManager_GetWorldObjectClient
                                     (pMVar7,id,(MethodInfo *)0x0),
                 pMVar8 == (MVWorldObjectClient *)0x0)) goto code_?;
              pSVar1 = StringLiteral_WO_Root_Group;
              if ((pMVar8->fields)._.groupId != -1) {
                plVar11 = (longlong *)FUN_?(&(pMVar8->klass->_0).byval_arg);
                if (plVar11 == (longlong *)0x0) goto code_?;
                pSVar1 = (String *)
                          (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
              }
            }
          }
        }
      }
    }
  }
  pTVar2 = (this->fields).woType;
  if (pTVar2 != (Text *)0x0) {
    (*(pTVar2->klass->vtable).set_text.methodPtr)
              (pTVar2,pSVar4,(pTVar2->klass->vtable).set_text.method);
    pTVar2 = (this->fields).parentType;
    if (pTVar2 != (Text *)0x0) {
      pIVar9 = (pTVar2->klass->vtable).set_text.methodPtr;
      pMVar10 = (pTVar2->klass->vtable).set_text.method;
code_?:
      (*pIVar9)(pTVar2,pSVar1,pMVar10);
      return;
    }
  }
code_?:
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void SelectionChanged(MVWorldObjectClient, MVWorldObjectClient) */

void Assembly-CSharp.dll::PickController::PickController_SelectionChanged
               (PickController *this,MVWorldObjectClient *wo,MVWorldObjectClient *parent,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__PickController____c___SelectionChanged_b__8_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__PickController____c);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_WO_Root_Group);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (wo != (MVWorldObjectClient *)0x0) {
    (this->fields).pickedWoId = (wo->fields)._.id;
    if ((this->fields).shouldSetText == 0) {
code_?:
      if ((this->fields).pickCallback != (UnityAction_1_System_Int32_ *)0x0) {
        pUVar1 = (this->fields).pickCallback;
        (*(pUVar1->fields)._._.invoke_impl)
                  ((pUVar1->fields)._._.method_code,(this->fields).pickedWoId,
                   (pUVar1->fields)._._.method);
      }
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__PickController____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__PickController____c);
      }
      this_01 = TypeInfo__PickController____c->static_fields->__9__8_0;
      if (this_01 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        if (*(int *)&(TypeInfo__PickController____c->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__PickController____c);
        }
        object = TypeInfo__PickController____c->static_fields->__9;
        this_01 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
                   MethodInfo__PickController____c___SelectionChanged_b__8_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__PickController____c->static_fields->__9__8_0 = this_01;
        if (iRam_? != 0) {
          uVar3 = (uint)((ulonglong)&TypeInfo__PickController____c->static_fields->__9__8_0 >> 0xc)
          ;
          puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar5 = *puVar4;
            LOCK();
            uVar6 = *puVar4;
            if (uVar5 == uVar6) {
              *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
            }
            UNLOCK();
          } while (uVar5 != uVar6);
        }
      }
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      pMVar7 = 
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
      ;
      if ((
          UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                     );
        LOCK();
        UNLOCK();
        if ((pMVar7->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?(pMVar7);
        }
      }
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
                (pGVar2,(IList_1_UnityEngine_Transform_ *)
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                         s_InternalTransformList,(MethodInfo *)0x0);
      pLVar8 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
               s_InternalTransformList;
      if (pLVar8 != (List_1_UnityEngine_Transform_ *)0x0) {
        lVar9 = (longlong)(pLVar8->fields)._size;
        uVar3 = 0;
        if (0 < lVar9) {
          lVar10 = 0;
          lVar11 = 0x20;
          do {
            if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
              FUN_?();
            }
            pLVar8 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                     s_InternalTransformList;
            if (pLVar8 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
            if ((uint)(pLVar8->fields)._size <= uVar3) {
              mscorlib.dll::System::ThrowHelper::
              ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pTVar13 = (pLVar8->fields)._items;
            if (pTVar13 == (Transform__Array *)0x0) goto code_?;
            if ((uint)pTVar13->max_length <= uVar3) {
              FUN_?();
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            this_00 = *(Component **)((longlong)pTVar13->vector + lVar11 + -0x20);
            if (this_00 == (Component *)0x0) goto code_?;
            pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                (this_00,(MethodInfo *)0x0);
            bVar14 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                     ExecuteEvents_Execute_18
                               (pGVar2,(BaseEventData *)0x0,
                                (ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
                                (pMVar7->field7_0x38).rgctx_data[1].method);
            if (bVar14 != 0) {
              UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        (this_00,(MethodInfo *)0x0);
              return;
            }
            uVar3 = uVar3 + 1;
            lVar10 = lVar10 + 1;
            lVar11 = lVar11 + 8;
          } while (lVar10 < lVar9);
        }
        return;
      }
code_?:
      FUN_?();
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pTVar15 = (this->fields).woIDText;
    pSVar16 = mscorlib.dll::System::Int32::Int32_ToString
                        ((Int32 *)&(this->fields).pickedWoId,(MethodInfo *)0x0);
    if (pTVar15 != (Text *)0x0) {
      (*(pTVar15->klass->vtable).set_text.methodPtr)
                (pTVar15,pSVar16,(pTVar15->klass->vtable).set_text.method);
      pTVar15 = (this->fields).parentType;
      if (pTVar15 != (Text *)0x0) {
        (*(pTVar15->klass->vtable).set_text.methodPtr)
                  (pTVar15,StringLiteral_WO_Root_Group,(pTVar15->klass->vtable).set_text.method);
        if (parent != (MVWorldObjectClient *)0x0) {
          pTVar15 = (this->fields).parentType;
          plVar17 = (longlong *)FUN_?(&(parent->klass->_0).byval_arg);
          if ((plVar17 == (longlong *)0x0) ||
             (uVar18 = (**(code **)(*plVar17 + 0x168))(plVar17,*(undefined8 *)(*plVar17 + 0x170)),
             pTVar15 == (Text *)0x0)) goto code_?;
          (*(pTVar15->klass->vtable).set_text.methodPtr)
                    (pTVar15,uVar18,(pTVar15->klass->vtable).set_text.method);
        }
        pTVar15 = (this->fields).woType;
        plVar17 = (longlong *)FUN_?(&(wo->klass->_0).byval_arg);
        if ((plVar17 != (longlong *)0x0) &&
           (uVar18 = (**(code **)(*plVar17 + 0x168))(plVar17,*(undefined8 *)(*plVar17 + 0x170)),
           pTVar15 != (Text *)0x0)) {
          (*(pTVar15->klass->vtable).set_text.methodPtr)
                    (pTVar15,uVar18,(pTVar15->klass->vtable).set_text.method);
          PickController_Refresh(this,(MethodInfo *)0x0);
          goto code_?;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}

