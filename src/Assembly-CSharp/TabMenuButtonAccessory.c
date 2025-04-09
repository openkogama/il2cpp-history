
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
  method_00 = TypeInfo__TabMenuButtonAccessory____c__DisplayClass11_0;
  pOVar1 = (Object *)func_?();
  object = pOVar1;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (pOVar1,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (pOVar1 != (Object *)0x0) {
    pOVar1[1].klass = (Object__Class *)this;
    func_?(pOVar1 + 1,this);
    this_02 = &pOVar1[1].monitor;
    *this_02 = (MonitorData *)tabId;
    pLVar2 = (this->fields).layoutElement;
    (this->fields).category = tabId;
    if (pLVar2 != (LayoutElement *)0x0) {
      ppMVar3 = this_02;
      fVar4 = (float10)(*(code *)(pLVar2->klass->vtable).get_minHeight_1.method)
                                  (pLVar2,(pLVar2->klass->vtable).set_minHeight.methodPtr);
      (this->fields).defaultHeight = (float)fVar4;
      TabMenuButtonAccessory_UpdateHighlightState(this,(MethodInfo *)0x0);
      pLVar5 = (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
               (this->fields).tabDefs;
      pOVar1 = (Object *)0x0;
      while (pLVar5 != (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)0x0) {
        if ((pLVar5->fields)._size <= (int)pOVar1) {
          pSVar6 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)this_02,(MethodInfo *)0x0);
          pSVar6 = mscorlib.dll::System::String::String_Concat_3
                              (StringLiteral_No_TabDef_exists_for_accessory_c,pSVar6,
                               (MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Debug);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                    ((Object *)pSVar6,(MethodInfo *)0x0);
          return;
        }
        pLVar5 = (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
                 (this->fields).tabDefs;
        IVar7.m_value = (int32_t)*this_02;
        if (pLVar5 == (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)0x0)
        break;
        XVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Xml::Schema::
                 XmlSchemaObjectTable+XmlSchemaObjectEntry]::
                 List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry__get_Item
                           (pLVar5,(int32_t)pOVar1,
                            MethodInfo__System__Collections__Generic__List<TabMenuButtonAccessory::AccessoryTabDef>__get_Item_int_
                           );
        pLVar5 = (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
                 (this->fields).tabDefs;
        if ((XmlQualifiedName *)IVar7.m_value == XVar8.qname) {
          if (pLVar5 != (List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)0x0)
          {
            XVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Xml::Schema::
                     XmlSchemaObjectTable+XmlSchemaObjectEntry]::
                     List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry__get_Item
                               (pLVar5,(int32_t)pOVar1,
                                MethodInfo__System__Collections__Generic__List<TabMenuButtonAccessory::AccessoryTabDef>__get_Item_int_
                               );
            object = pOVar1;
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UnityEngine__Object);
              object = pOVar1;
            }
            pGVar9 = (Graphic *)
                     UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                               ((Object *)XVar8.xso,
                                UnityEngine__UI__Graphic_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Graphic>_UnityEngine__UI__Graphic_
                               );
            ppGVar10 = &(this->fields).icon;
            *ppGVar10 = pGVar9;
            func_?(ppGVar10,pGVar9);
            if (*ppGVar10 != (Graphic *)0x0) {
              pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                 ((Component *)*ppGVar10,(MethodInfo *)0x0);
              parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                 ((Component *)this,(MethodInfo *)0x0);
              if (pTVar11 != (Transform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                          (pTVar11,parent,0,(MethodInfo *)0x0);
                if ((*ppGVar10 != (Graphic *)0x0) &&
                   (pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                             Component_get_transform((Component *)*ppGVar10,(MethodInfo *)0x0),
                   pTVar11 != (Transform *)0x0)) {
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsFirstSibling
                            (pTVar11,(MethodInfo *)0x0);
                  pBVar12 = (this->fields).button;
                  if (pBVar12 != (Button *)0x0) {
                    this_00 = (UnityEvent *)(pBVar12->fields).m_OnClick;
                    this_01 = (NavMesh_OnNavMeshPreUpdate *)
                              func_?(TypeInfo__UnityEngine__Events__UnityAction);
                    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                    NavMesh_OnNavMeshPreUpdate__ctor
                              (this_01,object,
                               MethodInfo__TabMenuButtonAccessory____c__DisplayClass11_0___Initialize_b__0__
                               ,(MethodInfo *)0x0);
                    if (this_00 != (UnityEvent *)0x0) {
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
        pOVar1 = (Object *)((int)&pOVar1->klass + 1);
        this_02 = ppMVar3;
      }
    }
  }
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)(object);
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
  method_00 = TypeInfo__TabMenuButtonAccessory___LerpToSize_d__15;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[1].klass = (Object__Class *)0x0;
  value[2].klass = (Object__Class *)this;
  func_?(value + 2,this);
  value[2].monitor = (MonitorData *)size;
  return (IEnumerator *)value;
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
    (*(code *)(pGVar1->klass->vtable).set_color.method)
              (pGVar1,pCVar2->r,pCVar2->g,pCVar2->b,pCVar2->a);
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopAllCoroutines
              ((MonoBehaviour *)this,(MethodInfo *)0x0);
    pMVar3 = (MonitorData *)(this->fields).defaultHeight;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    method_00 = TypeInfo__TabMenuButtonAccessory___LerpToSize_d__15;
    value = (Object *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
    value[1].klass = (Object__Class *)0x0;
    value[2].klass = (Object__Class *)this;
    func_?();
    value[2].monitor = pMVar3;
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
              ((MonoBehaviour *)this,(IEnumerator *)value,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
                     ((Color *)&puStack_3,ColorStyle__Enum_SelectedTab,(MethodInfo *)0x0);
  if (pGVar1 != (Graphic *)0x0) {
    (*(code *)(pGVar1->klass->vtable).set_color.method)
              (pGVar1,pCVar2->r,pCVar2->g,pCVar2->b,pCVar2->a,
               (pGVar1->klass->vtable).get_raycastTarget.methodPtr);
    pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    pEVar5 = (ExecuteEvents_EventFunction_1_System_Object_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryClicked>
                            );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)pEVar5,(Object *)this,
               MethodInfo__TabMenuButtonAccessory___SetAsSelected_b__13_0_UnityEngine__EventSystems__IAccessoryClicked__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar4,(BaseEventData *)0x0,pEVar5,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAccessoryClicked>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryClicked>_
              );
    pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    pEVar5 = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)pEVar5,(Object *)this,
               MethodInfo__TabMenuButtonAccessory___SetAsSelected_b__13_1_UnityEngine__EventSystems__IAccessoryClicked__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar4,(BaseEventData *)0x0,pEVar5,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAccessoryClicked>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryClicked>_
              );
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopAllCoroutines
              ((MonoBehaviour *)this,(MethodInfo *)0x0);
    pMVar6 = (MonitorData *)(this->fields).selectedTabHeight;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    method_00 = TypeInfo__TabMenuButtonAccessory___LerpToSize_d__15;
    value = (Object *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
    value[1].klass = (Object__Class *)0x0;
    value[2].klass = (Object__Class *)this;
    func_?();
    value[2].monitor = pMVar6;
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
              ((MonoBehaviour *)this,(IEnumerator *)value,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
  pLVar1 = HighlightManager::HighlightManager_GetHighLights
                     (HighlightType__Enum_Accessory,
                      System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessory>_>_MethodInfo__HighlightManager__GetHighLights<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessory>_MV__WorldObject__HighlightSystem__HighlightType_
                     );
  pLVar2 = pLVar1;
  this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            AccessoryDataManager::AccessoryDataManager_GetAccessoriesByCategoryId
                      ((this->fields).category,(MethodInfo *)0x0);
  IVar3.m_value = 0;
  index_00.m_value = 0;
  if (pLVar1 != (List_1_Highlight_1_System_Object_ *)0x0) {
    for (; index_00.m_value < (pLVar1->fields)._size;
        index_00.m_value = (int)&((MethodInfo *)index_00.m_value)->methodPointer + 1) {
      index = (TabMenuButtonAccessory *)0x0;
      pLVar1 = pLVar2;
      while( true ) {
        if (this_01 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
        goto code_?;
        if ((this_01->fields)._size <= (int)index) break;
        this_02 = MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Item_int_
        ;
        RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (this_01,(int32_t)index,
                           MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Item_int_
                          );
        if (RVar4 == (RegexCharClass_SingleRange)0x0) goto code_?;
        iVar5 = *(int *)((int)RVar4 + 8);
        pLVar1 = (List_1_Highlight_1_System_Object_ *)&UNK_?;
        RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                           this_02,index_00.m_value,
                           MethodInfo__System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessory>_>__get_Item_int_
                          );
        if ((RVar4 == (RegexCharClass_SingleRange)0x0) || (*(int *)((int)RVar4 + 0xc) == 0))
        goto code_?;
        IVar3.m_value = index_00.m_value;
        if (iVar5 == *(int *)(*(int *)((int)RVar4 + 0xc) + 8)) {
          RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (this_01,(int32_t)index,
                             MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Item_int_
                            );
          if (RVar4 == (RegexCharClass_SingleRange)0x0) goto code_?;
          bVar6 = MVWorldObject.dll::MV::WorldObject::Accessories::AccessoryData::
                  AccessoryData_GetShowInShop((AccessoryData *)RVar4,(MethodInfo *)0x0);
          this = index;
          IVar3.m_value = index_00.m_value;
          if (bVar6 != 0) {
            RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              (this_01,(int32_t)index,
                               MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Item_int_
                              );
            if (RVar4 == (RegexCharClass_SingleRange)0x0) goto code_?;
            IVar3.m_value = index_00.m_value;
            if (*(char *)((int)RVar4 + 0x30) == '\0') {
              IVar3.m_value = index_00.m_value + 1;
            }
          }
        }
        index = (TabMenuButtonAccessory *)((int)&index->klass + 1);
        index_00.m_value = (int32_t)this_02;
      }
      pLVar2 = pLVar1;
    }
    this_00 = (this->fields).redDot;
    if (this_00 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_00,0 < IVar3.m_value,(MethodInfo *)0x0);
      pTVar7 = (this->fields).redDotCount;
      mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
      if (pTVar7 != (Text *)0x0) {
        (*(code *)(pTVar7->klass->vtable).set_text.method)();
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

