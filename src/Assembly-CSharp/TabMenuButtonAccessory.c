
/* Void Initialize(Int32, String) */

void Assembly-CSharp.dll::TabMenuButtonAccessory::TabMenuButtonAccessory_Initialize
               (TabMenuButtonAccessory *this,int32_t tabId,String *categoryName,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<TabMenuButtonAccessory::AccessoryTabDef>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<TabMenuButtonAccessory::AccessoryTabDef>__get_Item_int_
                   );
    func_?(&
                    UnityEngine__UI__Graphic_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Graphic>_UnityEngine__UI__Graphic_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&MethodInfo__TabMenuButtonAccessory____c__DisplayClass11_0___Initialize_b__0__);
    func_?(&TypeInfo__TabMenuButtonAccessory____c__DisplayClass11_0);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    func_?(&StringLiteral_No_TabDef_exists_for_accessory_c);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__TabMenuButtonAccessory____c__DisplayClass11_0);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    value[1].klass = (Object__Class *)this;
    func_?(value + 1,this);
    value[1].monitor = (MonitorData *)tabId;
    pLVar1 = (this->fields).layoutElement;
    (this->fields).category = tabId;
    if (pLVar1 != (LayoutElement *)0x0) {
      fVar2 = (float10)(*(pLVar1->klass->vtable).get_minHeight_1.methodPtr)
                                 (pLVar1,(pLVar1->klass->vtable).get_minHeight_1.method);
      (this->fields).defaultHeight = (float)fVar2;
      TabMenuButtonAccessory_UpdateHighlightState(this,(MethodInfo *)0x0);
      pLVar3 = (this->fields).tabDefs;
      index = 0;
      while (pLVar3 != (List_1_TabMenuButtonAccessory_AccessoryTabDef_ *)0x0) {
        if ((pLVar3->fields)._size <= index) {
          pSVar4 = mscorlib.dll::System::Int32::Int32_ToString
                             ((Int32 *)&value[1].monitor,(MethodInfo *)0x0);
          pSVar4 = mscorlib.dll::System::String::String_Concat_3
                             (StringLiteral_No_TabDef_exists_for_accessory_c,pSVar4,
                              (MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Debug);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                    ((Object *)pSVar4,(MethodInfo *)0x0);
          return;
        }
        pMVar5 = value[1].monitor;
        pLVar3 = (this->fields).tabDefs;
        if (pLVar3 == (List_1_TabMenuButtonAccessory_AccessoryTabDef_ *)0x0) break;
        TVar6 = mscorlib.dll::System::Collections::Generic::
                List`1[TabMenuButtonAccessory+AccessoryTabDef]::
                List_1_TabMenuButtonAccessory_AccessoryTabDef__get_Item
                          (pLVar3,index,
                           MethodInfo__System__Collections__Generic__List<TabMenuButtonAccessory::AccessoryTabDef>__get_Item_int_
                          );
        pLVar3 = (this->fields).tabDefs;
        if (pMVar5 == (MonitorData *)TVar6.tabID) {
          if (pLVar3 != (List_1_TabMenuButtonAccessory_AccessoryTabDef_ *)0x0) {
            TVar6 = mscorlib.dll::System::Collections::Generic::
                    List`1[TabMenuButtonAccessory+AccessoryTabDef]::
                    List_1_TabMenuButtonAccessory_AccessoryTabDef__get_Item
                              (pLVar3,index,
                               MethodInfo__System__Collections__Generic__List<TabMenuButtonAccessory::AccessoryTabDef>__get_Item_int_
                              );
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UnityEngine__Object);
            }
            pGVar7 = (Graphic *)
                     UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                               ((Object *)TVar6.streamedImagePrefab,
                                UnityEngine__UI__Graphic_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Graphic>_UnityEngine__UI__Graphic_
                               );
            (this->fields).icon = pGVar7;
            func_?(&(this->fields).icon,pGVar7);
            pGVar7 = (this->fields).icon;
            if (pGVar7 != (Graphic *)0x0) {
              pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                 ((Component *)pGVar7,(MethodInfo *)0x0);
              parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                 ((Component *)this,(MethodInfo *)0x0);
              if (pTVar8 != (Transform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                          (pTVar8,parent,0,(MethodInfo *)0x0);
                pGVar7 = (this->fields).icon;
                if ((pGVar7 != (Graphic *)0x0) &&
                   (pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                             Component_get_transform((Component *)pGVar7,(MethodInfo *)0x0),
                   pTVar8 != (Transform *)0x0)) {
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsFirstSibling
                            (pTVar8,(MethodInfo *)0x0);
                  pBVar9 = (this->fields).button;
                  if (pBVar9 != (Button *)0x0) {
                    this_00 = (UnityEvent *)(pBVar9->fields).m_OnClick;
                    this_01 = (NavMesh_OnNavMeshPreUpdate *)
                              func_?(TypeInfo__UnityEngine__Events__UnityAction);
                    if ((this_01 != (NavMesh_OnNavMeshPreUpdate *)0x0) &&
                       (UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                        NavMesh_OnNavMeshPreUpdate__ctor
                                  (this_01,value,
                                   MethodInfo__TabMenuButtonAccessory____c__DisplayClass11_0___Initialize_b__0__
                                   ,(MethodInfo *)0x0), this_00 != (UnityEvent *)0x0)) {
                      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::
                      UnityEvent_AddListener(this_00,(UnityAction *)this_01,(MethodInfo *)0x0);
                      return;
                    }
                  }
                }
              }
            }
          }
          break;
        }
        index = index + 1;
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* IEnumerator LerpToSize(Single) */

IEnumerator *
Assembly-CSharp.dll::TabMenuButtonAccessory::TabMenuButtonAccessory_LerpToSize
          (TabMenuButtonAccessory *this,float size,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__TabMenuButtonAccessory___LerpToSize_d__15);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__TabMenuButtonAccessory___LerpToSize_d__15);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_ESI);
    value[1].klass = (Object__Class *)0x0;
    value[2].klass = (Object__Class *)this;
    func_?(value + 2,this);
    value[2].monitor = (MonitorData *)size;
    return (IEnumerator *)value;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
}


/* Void SetAsDeselected() */

void Assembly-CSharp.dll::TabMenuButtonAccessory::TabMenuButtonAccessory_SetAsDeselected
               (TabMenuButtonAccessory *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Styles);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).icon;
  if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Styles);
  }
  pCVar2 = Styles::Styles_GetColor
                     ((Color *)&stack0xffffffec,ColorStyle__Enum_OffWhite,(MethodInfo *)0x0);
  if (pGVar1 != (Graphic *)0x0) {
    (*(pGVar1->klass->vtable).set_color.methodPtr)(pGVar1,pCVar2->r,pCVar2->g,pCVar2->b,pCVar2->a);
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopAllCoroutines
              ((MonoBehaviour *)this,(MethodInfo *)0x0);
    routine = TabMenuButtonAccessory_LerpToSize(this,(this->fields).defaultHeight,(MethodInfo *)0x0)
    ;
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
              ((MonoBehaviour *)this,routine,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetAsSelected() */

void Assembly-CSharp.dll::TabMenuButtonAccessory::TabMenuButtonAccessory_SetAsSelected
               (TabMenuButtonAccessory *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryClicked>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAccessoryClicked>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryClicked>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__Styles);
    func_?(&
                    MethodInfo__TabMenuButtonAccessory___SetAsSelected_b__13_0_UnityEngine__EventSystems__IAccessoryClicked__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__TabMenuButtonAccessory___SetAsSelected_b__13_1_UnityEngine__EventSystems__IAccessoryClicked__UnityEngine__EventSystems__BaseEventData_
                   );
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).icon;
  if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Styles);
  }
  pCVar2 = Styles::Styles_GetColor
                     ((Color *)&stack0xffffffec,ColorStyle__Enum_SelectedTab,(MethodInfo *)0x0);
  if (pGVar1 != (Graphic *)0x0) {
    (*(pGVar1->klass->vtable).set_color.methodPtr)
              (pGVar1,pCVar2->r,pCVar2->g,pCVar2->b,pCVar2->a,
               (pGVar1->klass->vtable).set_color.method);
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    pEVar4 = (ExecuteEvents_EventFunction_1_System_Object_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryClicked>
                            );
    if (pEVar4 != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)pEVar4,(Object *)this,
                 MethodInfo__TabMenuButtonAccessory___SetAsSelected_b__13_0_UnityEngine__EventSystems__IAccessoryClicked__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar3,(BaseEventData *)0x0,pEVar4,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAccessoryClicked>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryClicked>_
                );
      pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      pEVar4 = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
      if (pEVar4 != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)pEVar4,(Object *)this,
                   MethodInfo__TabMenuButtonAccessory___SetAsSelected_b__13_1_UnityEngine__EventSystems__IAccessoryClicked__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar3,(BaseEventData *)0x0,pEVar4,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAccessoryClicked>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryClicked>_
                  );
        UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopAllCoroutines
                  ((MonoBehaviour *)this,(MethodInfo *)0x0);
        routine = TabMenuButtonAccessory_LerpToSize
                            (this,(this->fields).selectedTabHeight,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                  ((MonoBehaviour *)this,routine,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdateHighlightState() */

void Assembly-CSharp.dll::TabMenuButtonAccessory::TabMenuButtonAccessory_UpdateHighlightState
               (TabMenuButtonAccessory *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessory>_>_MethodInfo__HighlightManager__GetHighLights<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessory>_MV__WorldObject__HighlightSystem__HighlightType_
                   );
    func_?(&TypeInfo__HighlightManager);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessory>_>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessory>_>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  if ((TypeInfo__HighlightManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__HighlightManager);
  }
  this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            HighlightManager::HighlightManager_GetHighLights
                      (HighlightType__Enum_Accessory,
                       System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessory>_>_MethodInfo__HighlightManager__GetHighLights<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessory>_MV__WorldObject__HighlightSystem__HighlightType_
                      );
  pLVar1 = this_01;
  this_02 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            AccessoryDataManager::AccessoryDataManager_GetAccessoriesByCategoryId
                      ((this->fields).category,(MethodInfo *)0x0);
  IStack_2.m_value = 0;
  iStack_3 = 0;
  if (this_01 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    for (; iStack_3 < (this_01->fields)._size; iStack_3 = iStack_3 + 1) {
      index = 0;
      this_01 = pLVar1;
      if (this_02 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
      goto code_?;
      for (; index < (this_02->fields)._size; index = index + 1) {
        RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (this_02,index,
                           MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Item_int_
                          );
        if (RVar4 == (RegexCharClass_SingleRange)0x0) goto code_?;
        iVar5 = *(int *)((int)RVar4 + 8);
        RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (this_01,iStack_3,
                           MethodInfo__System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessory>_>__get_Item_int_
                          );
        if ((RVar4 == (RegexCharClass_SingleRange)0x0) || (*(int *)((int)RVar4 + 0xc) == 0))
        goto code_?;
        if (iVar5 == *(int *)(*(int *)((int)RVar4 + 0xc) + 8)) {
          RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (this_02,index,
                             MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Item_int_
                            );
          if (RVar4 == (RegexCharClass_SingleRange)0x0) goto code_?;
          bVar6 = MVWorldObject.dll::MV::WorldObject::Accessories::AccessoryData::
                  AccessoryData_GetShowInShop((AccessoryData *)RVar4,(MethodInfo *)0x0);
          if (bVar6 != 0) {
            RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              (this_02,index,
                               MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Item_int_
                              );
            if (RVar4 == (RegexCharClass_SingleRange)0x0) goto code_?;
            if (*(char *)((int)RVar4 + 0x30) == '\0') {
              IStack_2.m_value = IStack_2.m_value + 1;
            }
          }
        }
      }
      pLVar1 = this_01;
    }
    this_00 = (this->fields).redDot;
    if (this_00 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_00,0 < IStack_2.m_value,(MethodInfo *)0x0);
      pTVar7 = (this->fields).redDotCount;
      mscorlib.dll::System::Int32::Int32_ToString(&IStack_2,(MethodInfo *)0x0);
      if (pTVar7 != (Text *)0x0) {
        IStack_2.m_value = (int32_t)&UNK_?;
        (*(pTVar7->klass->vtable).set_text.methodPtr)();
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void <SetAsSelected>b__13_0(IAccessoryClicked, BaseEventData) */

void Assembly-CSharp.dll::TabMenuButtonAccessory::TabMenuButtonAccessory__SetAsSelected_b__13_0
               (TabMenuButtonAccessory *this,IAccessoryClicked *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppIStack_1 = &TypeInfo__UnityEngine__EventSystems__IAccessoryClicked;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IAccessoryClicked *)0x0) {
    ppIStack_1 = (IAccessoryClicked__Class **)(uint)((this->fields).category != 0xff);
    pIStack_2 = x;
    pIStack_3 = TypeInfo__UnityEngine__EventSystems__IAccessoryClicked;
    func_?(1);
    return;
  }
  ppIStack_1 = (IAccessoryClicked__Class **)&stack0xfffffffc;
  uVar4 = func_?(&pIStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void <SetAsSelected>b__13_1(IAccessoryClicked, BaseEventData) */

void Assembly-CSharp.dll::TabMenuButtonAccessory::TabMenuButtonAccessory__SetAsSelected_b__13_1
               (TabMenuButtonAccessory *this,IAccessoryClicked *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppIStack_1 = &TypeInfo__UnityEngine__EventSystems__IAccessoryClicked;
    func_?();
    cRam_? = '\x01';
  }
  if (x != (IAccessoryClicked *)0x0) {
    ppIStack_1 = (IAccessoryClicked__Class **)(this->fields).category;
    pIStack_2 = x;
    pIStack_3 = TypeInfo__UnityEngine__EventSystems__IAccessoryClicked;
    func_?(3);
    return;
  }
  ppIStack_1 = (IAccessoryClicked__Class **)&stack0xfffffffc;
  uVar4 = func_?(&pIStack_3);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* TabMenuButtonAccessory() */

void Assembly-CSharp.dll::TabMenuButtonAccessory::TabMenuButtonAccessory__ctor
               (TabMenuButtonAccessory *this,MethodInfo *method)

{
  (this->fields).selectedTabHeight = 140.0;
  (this->fields).lerpTime = 0.5;
  (this->fields).defaultHeight = 120.0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

