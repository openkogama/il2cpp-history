
/* Void Initialize(String, Int32, MVTeam, Boolean) */

void Assembly-CSharp.dll::SettingsButton::SettingsButton_Initialize
               (SettingsButton *this,String *key,int32_t value,MVTeam__Enum team,bool hasTeam,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  ColorStyleObject_MethodInfo__UnityEngine__Component__GetComponentInChildren<ColorStyleObject>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__SettingsButton__ValueChanged__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Styles);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pBVar1 = (this->fields).button;
  if (pBVar1 != (Button *)0x0) {
    UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable
              ((Selectable *)pBVar1,hasTeam,(MethodInfo *)0x0);
    pOVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponentInChildren_1
                       ((Component *)this,
                        ColorStyleObject_MethodInfo__UnityEngine__Component__GetComponentInChildren<ColorStyleObject>__
                       );
    if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__Styles);
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_ColorStyle>__get_Item_MV__WorldObject__MVTeam_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Count__
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__Styles);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (hasTeam == 0) {
      if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__Styles);
      }
      this_02 = TypeInfo__Styles->static_fields->teamToDarkColorStyle;
    }
    else {
      if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__Styles);
      }
      this_02 = TypeInfo__Styles->static_fields->teamToColorStyle;
    }
    if ((this_02 != (Dictionary_2_MV_WorldObject_MVTeam_ColorStyle_ *)0x0) &&
       (colorStyle = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Int32Enum,System::Int32Enum]::
                     Dictionary_2_System_Int32Enum_System_Int32Enum__get_Item
                               ((Dictionary_2_System_Int32Enum_System_Int32Enum_ *)this_02,team,
                                MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_ColorStyle>__get_Item_MV__WorldObject__MVTeam_
                               ), pOVar2 != (Object *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__Styles);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      graphic = pOVar2[2].klass;
      if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
        FUN_?();
      }
      Styles::Styles_SetStyle_2((Graphic *)graphic,colorStyle,(MethodInfo *)0x0);
      bVar3 = iRam_? != 0;
      (this->fields).key = key;
      if (bVar3) {
        uVar4 = (uint)((ulonglong)&(this->fields).key >> 0xc);
        puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar6 = *puVar5;
          LOCK();
          uVar7 = *puVar5;
          if (uVar6 == uVar7) {
            *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (uVar6 != uVar7);
      }
      pBVar1 = (this->fields).button;
      (this->fields).value = value;
      if (pBVar1 != (Button *)0x0) {
        pBVar8 = (pBVar1->fields).m_OnClick;
        this_00 = (NavMesh_OnNavMeshPreUpdate *)
                  FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (this_00,(Object *)this,MethodInfo__SettingsButton__ValueChanged__,
                   (MethodInfo *)0x0);
        if (pBVar8 != (Button_ButtonClickedEvent *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Events__InvokableCall);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          this_01 = (InvokableCall *)FUN_?(TypeInfo__UnityEngine__Events__InvokableCall);
          UnityEngine.CoreModule.dll::UnityEngine::Events::InvokableCall::InvokableCall_add_Delegate
                    (this_01,(UnityAction *)this_00,(MethodInfo *)0x0);
          pIVar9 = (pBVar8->fields)._._.m_Calls;
          if (pIVar9 != (InvokableCallList *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__Add_UnityEngine__Events__BaseInvokableCall_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pLVar10 = (pIVar9->fields).m_RuntimeCalls;
            if (pLVar10 != (List_1_UnityEngine_Events_BaseInvokableCall_ *)0x0) {
              FUN_?(pLVar10,this_01);
              (pIVar9->fields).m_NeedsUpdate = 1;
              return;
            }
          }
          FUN_?();
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void ValueChanged() */

void Assembly-CSharp.dll::SettingsButton::SettingsButton_ValueChanged
               (SettingsButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleSettingChanged>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IHandleSettingChanged>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleSettingChanged>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__SettingsButton___ValueChanged_b__4_0_UnityEngine__EventSystems__IHandleSettingChanged__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleSettingChanged>
                         );
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
  ExecuteEvents_EventFunction_1_System_Object___ctor
            (this_01,(Object *)this,
             MethodInfo__SettingsButton___ValueChanged_b__4_0_UnityEngine__EventSystems__IHandleSettingChanged__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar2 = 
  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IHandleSettingChanged>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleSettingChanged>_
  ;
  if ((
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IHandleSettingChanged>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleSettingChanged>_
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
    if ((pMVar2->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar2);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
            (pGVar1,(IList_1_UnityEngine_Transform_ *)
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                    s_InternalTransformList,(MethodInfo *)0x0);
  pLVar3 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar3 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar4 = (longlong)(pLVar3->fields)._size;
    uVar5 = 0;
    if (0 < lVar4) {
      lVar6 = 0;
      lVar7 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar3 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar3 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar3->fields)._size <= uVar5) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pTVar9 = (pLVar3->fields)._items;
        if (pTVar9 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar9->max_length <= uVar5) {
          FUN_?();
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        this_00 = *(Component **)((longlong)pTVar9->vector + lVar7 + -0x20);
        if (this_00 == (Component *)0x0) goto code_?;
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           (this_00,(MethodInfo *)0x0);
        bVar10 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_Execute_18
                          (pGVar1,(BaseEventData *)0x0,this_01,
                           (pMVar2->field7_0x38).rgctx_data[1].method);
        if (bVar10 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_00,(MethodInfo *)0x0);
          return;
        }
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 1;
        lVar7 = lVar7 + 8;
      } while (lVar6 < lVar4);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void <ValueChanged>b__4_0(IHandleSettingChanged, BaseEventData) */

void Assembly-CSharp.dll::SettingsButton::SettingsButton__ValueChanged_b__4_0
               (SettingsButton *this,IHandleSettingChanged *handler,BaseEventData *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IHandleSettingChanged);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aiStackX_8[0] = (this->fields).value;
  pSVar1 = (this->fields).key;
  uVar2 = FUN_?(uRam_?,aiStackX_8);
  if (handler != (IHandleSettingChanged *)0x0) {
    FUN_?(0,TypeInfo__UnityEngine__EventSystems__IHandleSettingChanged,handler,pSVar1,uVar2)
    ;
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

