
/* Void AddUseRequirement(UseRequirement) */

void Assembly-CSharp.dll::UseInteratorVisualization::UseInteratorVisualization_AddUseRequirement
               (UseInteratorVisualization *this,UseRequirement *useRequirement,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).useRequirements;
  if (this_00 != (List_1_UseRequirement_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              ((List_1_UIPushOption_ *)this_00,(UIPushOption__Enum)useRequirement,
               MethodInfo__System__Collections__Generic__List<UseRequirement>__Add_UseRequirement_);
    UseInteratorVisualization_CalculateSpacing(this,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void CalculateSpacing() */

void Assembly-CSharp.dll::UseInteratorVisualization::UseInteratorVisualization_CalculateSpacing
               (UseInteratorVisualization *this,MethodInfo *method)

{
  this_00 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = 0;
  (this->fields).dist = (this->fields).baseDist;
  pLVar2 = (this->fields).useRequirements;
  (this->fields).active = 0;
  if (pLVar2 != (List_1_UseRequirement_ *)0x0) {
    while (pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                    Serialization::JsonProperty]::
                    Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                              ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                               MethodInfo__System__Collections__Generic__List<UseRequirement>__get_Count__
                              ), iVar1 < (int)pOVar3) {
      pLVar4 = (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)
               (this->fields).useRequirements;
      if ((pLVar4 == (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)0x0) ||
         (pIVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                   IEventSystemHandler]::
                   List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                             (pLVar4,iVar1,
                              MethodInfo__System__Collections__Generic__List<UseRequirement>__get_Item_int_
                             ), pIVar5 == (IEventSystemHandler *)0x0)) goto code_?;
      cVar6 = (*(code *)pIVar5->klass[1].static_fields)(pIVar5);
      if (cVar6 != '\0') {
        piVar7 = &(this->fields).active;
        *piVar7 = *piVar7 + 1;
      }
      pLVar2 = (this->fields).useRequirements;
      iVar1 = iVar1 + 1;
      if (pLVar2 == (List_1_UseRequirement_ *)0x0) goto code_?;
    }
    iVar1 = (this->fields).active;
    if (iVar1 == 1) {
      (this->fields).dist = 0.01;
code_?:
      (this->fields).spacing = (float)(int)(0x168 / (longlong)iVar1);
    }
    else if (iVar1 != 0) goto code_?;
    (this->fields).hasUseRequirement = iVar1 != 0;
    iVar1 = 0;
    pLVar2 = (this->fields).useRequirements;
    this = (UseInteratorVisualization *)0x0;
    if (pLVar2 != (List_1_UseRequirement_ *)0x0) goto code_?;
  }
  goto code_?;
  while( true ) {
    pLVar2 = (this_00->fields).useRequirements;
    iVar1 = iVar1 + 1;
    if (pLVar2 == (List_1_UseRequirement_ *)0x0) break;
code_?:
    pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                        MethodInfo__System__Collections__Generic__List<UseRequirement>__get_Count__)
    ;
    if ((int)pOVar3 <= iVar1) {
      UseInteratorVisualization_CheckCullingSetup(this_00,(MethodInfo *)0x0);
      if ((this_00->fields).hasUseRequirement == 0) {
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)this_00,0,(MethodInfo *)0x0);
        return;
      }
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)this_00,1,(MethodInfo *)0x0);
      return;
    }
    pLVar4 = (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)
             (this_00->fields).useRequirements;
    if ((pLVar4 == (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)0x0) ||
       (pIVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                 IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                           (pLVar4,iVar1,
                            MethodInfo__System__Collections__Generic__List<UseRequirement>__get_Item_int_
                           ), pIVar5 == (IEventSystemHandler *)0x0)) break;
    cVar6 = (*(code *)pIVar5->klass[1].static_fields)(pIVar5);
    if (cVar6 != '\0') {
      pLVar4 = (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)
               (this_00->fields).useRequirements;
      if ((pLVar4 == (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)0x0) ||
         (pIVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                   IEventSystemHandler]::
                   List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                             (pLVar4,iVar1,
                              MethodInfo__System__Collections__Generic__List<UseRequirement>__get_Item_int_
                             ), pIVar5 == (IEventSystemHandler *)0x0)) break;
      uVar8._0_4_ = (this_00->fields).pivot.x;
      uVar8._4_4_ = (this_00->fields).pivot.y;
      func_?(0xc,pIVar5,uVar8,(this_00->fields).pivot.z,this,(this_00->fields).dist);
      this = (UseInteratorVisualization *)((this_00->fields).spacing + (float)this);
    }
  }
code_?:
  func_?(0);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void ChangeLOD(Single) */

void Assembly-CSharp.dll::UseInteratorVisualization::UseInteratorVisualization_ChangeLOD
               (UseInteratorVisualization *this,float distance,MethodInfo *method)

{
  bVar1 = (this->fields).visible;
  if (distance < _UNK_?) {
    if (bVar1 == 0) {
      UseInteratorVisualization_Show(this,(MethodInfo *)0x0);
    }
  }
  else if (bVar1 != 0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopAllCoroutines
              ((MonoBehaviour *)this,(MethodInfo *)0x0);
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__Action<float>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)this,MethodInfo__UseInteratorVisualization___Hide_m__1_float_,
               MethodInfo__System__Action<float>__Action_System__Object__void__);
    routine = pTween::pTween_To(1.0,1.0,0.0,(Action_1_Single_ *)this_00,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
              ((MonoBehaviour *)this,routine,(MethodInfo *)0x0);
    (this->fields).visible = 0;
    return;
  }
  return;
}


/* Void CheckCullingSetup() */

void Assembly-CSharp.dll::UseInteratorVisualization::UseInteratorVisualization_CheckCullingSetup
               (UseInteratorVisualization *this,MethodInfo *method)

{
  pCVar1 = (this->fields).cullingSubscriberBase;
  if ((this->fields).hasUseRequirement == 0) {
    if (pCVar1 != (CullingSubscriberBase *)0x0) {
      UseInteratorVisualization_RemoveCulling(this,(MethodInfo *)0x0);
    }
  }
  else if (pCVar1 == (CullingSubscriberBase *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(
                            TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>
                            );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)this,
               MethodInfo__UseInteratorVisualization__OnStateChanged_UnityEngine__CullingGroupEvent_
               ,
               MethodInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>__UnityAction_System__Object__void__
              );
    pCVar1 = (CullingSubscriberBase *)func_?(TypeInfo__CullingSubscriberBase);
    CullingSubscriberBase::CullingSubscriberBase__ctor_1
              (pCVar1,(UnityAction_1_UnityEngine_CullingGroupEvent_ *)pUVar2,(MethodInfo *)0x0);
    (this->fields).cullingSubscriberBase = pCVar1;
    if (pCVar1 != (CullingSubscriberBase *)0x0) {
      CullingSubscriberBase::CullingSubscriberBase_set_Radius(pCVar1,2.0,(MethodInfo *)0x0);
      pCVar1 = (this->fields).cullingSubscriberBase;
      if (pCVar1 != (CullingSubscriberBase *)0x0) {
        LockCursorManager3DMode::LockCursorManager3DMode_set_OnCursorLockChanged
                  ((LockCursorManager3DMode *)pCVar1,(Action_1_Boolean_ *)0x1,(MethodInfo *)0x0);
        pMVar3 = (this->fields).wo;
        if (pMVar3 != (MVWorldObjectClient *)0x0) {
          pUVar4 = (pMVar3->fields).PositionChanged;
          pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar2,(Object *)this,
                     MethodInfo__UseInteratorVisualization__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                     ,
                     MethodInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>__UnityAction_System__Object__void__
                    );
          pMStack5 =
               (MVWorldObjectClient *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pUVar4,(Delegate *)pUVar2,(MethodInfo *)0x0);
          pUVar4 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
          if (pMStack5 != (MVWorldObjectClient *)0x0) {
            if (((UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)pMStack5)->
                klass == 
                TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
               ) {
              pUVar4 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
                       pMStack5;
            }
            if (pUVar4 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
              func_?();
              goto code_?;
            }
          }
          (pMVar3->fields).PositionChanged = pUVar4;
          pMStack5 = (this->fields).wo;
          if (pMStack5 != (MVWorldObjectClient *)0x0) {
            pVVar6 = (Vector3 *)
                     (*(code *)(pMStack5->klass->vtable).get_WorldPosition_1.method)();
            pMStack5 = (MVWorldObjectClient *)pVVar6->z;
            UseInteratorVisualization_UpdatePosition(this,*pVVar6,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
code_?:
    func_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  return;
}


/* Void DestroyRequirementObjects(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::UseInteratorVisualization::
     UseInteratorVisualization_DestroyRequirementObjects
               (UseInteratorVisualization *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb8;
  puVar5 = &stack0xffffffb8;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  CStack_6.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_6.monitor = (MonitorData *)0x0;
  CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_6.fields.syncRoot = (Object *)0x0;
  func_?();
  this_00 = (List_1_UnityEngine_Color32_ *)(this->fields).useRequirements;
  puStack_7 = (undefined4 *)&stack0xffffffb8;
  puStack_4 = &stack0xffffffb8;
  if (this_00 != (List_1_UnityEngine_Color32_ *)0x0) {
    puStack_7 = (undefined4 *)&stack0xffffffb8;
    puStack_4 = &stack0xffffffb8;
    pLVar8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
             List_1_UnityEngine_Color32__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_9,this_00,
                        MethodInfo__System__Collections__Generic__List<UseRequirement>__GetEnumerator__
                       );
    CStack_6.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar8->l;
    CStack_6.monitor = (MonitorData *)pLVar8->next;
    CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar8->ver;
    CStack_6.fields.syncRoot = (Object *)(pLVar8->current).rgba;
    uStack_1 = 0;
    while( true ) {
      cVar10 = func_?();
      if (cVar10 == '\0') {
        *puStack_7 = 0x3f;
        uStack_1 = 0xffffffff;
        func_?(&CStack_6,
                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__Dispose__
                       );
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      pOVar11 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         (&CStack_6,
                          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__get_Current__
                         );
      if (pOVar11 == (Object *)0x0) break;
      (**(code **)&pOVar11->klass[1]._0.byval_arg.attrs)
                (pOVar11,data,pOVar11->klass[1]._0.this_arg.data.dummy);
    }
  }
  func_?(0);
  func_?(0,0,0);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void Disable() */

void Assembly-CSharp.dll::UseInteratorVisualization::UseInteratorVisualization_Disable
               (UseInteratorVisualization *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  index = 0;
  this_00 = (this->fields).useRequirements;
  while (this_00 != (List_1_UseRequirement_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                        MethodInfo__System__Collections__Generic__List<UseRequirement>__get_Count__)
    ;
    if ((int)pOVar1 <= index) {
      return;
    }
    this_01 = (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)(this->fields).useRequirements
    ;
    if (((this_01 == (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)0x0) ||
        (pIVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                  IEventSystemHandler]::
                  List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                            (this_01,index,
                             MethodInfo__System__Collections__Generic__List<UseRequirement>__get_Item_int_
                            ), pIVar2 == (IEventSystemHandler *)0x0)) ||
       (this_02 = (GameObject *)(*(code *)pIVar2->klass[1]._1.cctor_finished_or_no_cctor)(pIVar2),
       this_02 == (GameObject *)0x0)) break;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_02,0,(MethodInfo *)0x0);
    index = index + 1;
    this_00 = (this->fields).useRequirements;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* UseGUIResult EvaluateUsability() */

UseGUIResult__Enum
Assembly-CSharp.dll::UseInteratorVisualization::UseInteratorVisualization_EvaluateUsability
          (UseInteratorVisualization *this,MethodInfo *method)

{
  pUVar1 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar2 = (this->fields).useRequirements;
  if (pLVar2 != (List_1_UseRequirement_ *)0x0) {
    pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                        MethodInfo__System__Collections__Generic__List<UseRequirement>__get_Count__)
    ;
    if (pOVar3 == (Object *)0x0) {
      return UseGUIResult__Enum_NoCost;
    }
    index = 0;
    this = (UseInteratorVisualization *)0x0;
    pLVar2 = (pUVar1->fields).useRequirements;
    while (pLVar2 != (List_1_UseRequirement_ *)0x0) {
      pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                          MethodInfo__System__Collections__Generic__List<UseRequirement>__get_Count__
                         );
      if ((int)pOVar3 <= index) {
        return (UseGUIResult__Enum)this;
      }
      this_00 = (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)
                (pUVar1->fields).useRequirements;
      if ((this_00 == (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)0x0) ||
         (pIVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                   IEventSystemHandler]::
                   List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                             (this_00,index,
                              MethodInfo__System__Collections__Generic__List<UseRequirement>__get_Item_int_
                             ), pIVar4 == (IEventSystemHandler *)0x0)) break;
      UVar5 = (*(code *)pIVar4->klass[1]._0.castClass)();
      this = (UseInteratorVisualization *)((uint)pIVar4 | UVar5);
      index = index + 1;
      pLVar2 = (pUVar1->fields).useRequirements;
    }
  }
  func_?(0);
  pcVar6 = (code *)swi(3);
  UVar5 = (*pcVar6)();
  return UVar5;
}


/* ShowUseOption GetShowOptions() */

ShowUseOption__Enum
Assembly-CSharp.dll::UseInteratorVisualization::UseInteratorVisualization_GetShowOptions
          (UseInteratorVisualization *this,MethodInfo *method)

{
  pUVar1 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar2 = (this->fields).useRequirements;
  if (pLVar2 != (List_1_UseRequirement_ *)0x0) {
    pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                        MethodInfo__System__Collections__Generic__List<UseRequirement>__get_Count__)
    ;
    if (pOVar3 == (Object *)0x0) {
      return ShowUseOption__Enum_Normal;
    }
    pLVar2 = (this->fields).useRequirements;
    index = 0;
    if (pLVar2 != (List_1_UseRequirement_ *)0x0) {
      this = (UseInteratorVisualization *)0x0;
      do {
        pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                            MethodInfo__System__Collections__Generic__List<UseRequirement>__get_Count__
                           );
        if ((int)pOVar3 <= index) {
          return CONCAT22((short)((uint)pOVar3 >> 0x10),this._2_2_);
        }
        this_00 = (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)
                  (pUVar1->fields).useRequirements;
        if ((this_00 == (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)0x0) ||
           (pIVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                     IEventSystemHandler]::
                     List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                               (this_00,index,
                                MethodInfo__System__Collections__Generic__List<UseRequirement>__get_Item_int_
                               ), pIVar4 == (IEventSystemHandler *)0x0)) break;
        uVar5 = (*(code *)pIVar4->klass[1]._0.events)();
        this._2_2_ = (ushort)((uint)pIVar4 >> 0x10);
        this = (UseInteratorVisualization *)((uint)(this._2_2_ | uVar5) << 0x10);
        index = index + 1;
        pLVar2 = (pUVar1->fields).useRequirements;
      } while (pLVar2 != (List_1_UseRequirement_ *)0x0);
    }
  }
  func_?(0);
  pcVar6 = (code *)swi(3);
  SVar7 = (*pcVar6)();
  return SVar7;
}


/* Void Hide() */

void Assembly-CSharp.dll::UseInteratorVisualization::UseInteratorVisualization_Hide
               (UseInteratorVisualization *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopAllCoroutines
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__System__Action<float>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,MethodInfo__UseInteratorVisualization___Hide_m__1_float_,
             MethodInfo__System__Action<float>__Action_System__Object__void__);
  routine = pTween::pTween_To(1.0,1.0,0.0,(Action_1_Single_ *)this_00,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
            ((MonoBehaviour *)this,routine,(MethodInfo *)0x0);
  (this->fields).visible = 0;
  return;
}


/* Void Initialize(Single, MVWorldObjectClient) */

void Assembly-CSharp.dll::UseInteratorVisualization::UseInteratorVisualization_Initialize
               (UseInteratorVisualization *this,float yOffset,MVWorldObjectClient *wo,
               MethodInfo *method)

{
  (this->fields).wo = wo;
  (this->fields).pivot.y = yOffset;
  UseInteratorVisualization_CalculateSpacing(this,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
            ((Behaviour *)this,0,(MethodInfo *)0x0);
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::UseInteratorVisualization::UseInteratorVisualization_OnDestroy
               (UseInteratorVisualization *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_01 = (this->fields).cullingSubscriberBase;
  if (this_01 != (CullingSubscriberBase *)0x0) {
    pMVar1 = (this->fields).wo;
    if (pMVar1 != (MVWorldObjectClient *)0x0) {
      pUVar2 = (pMVar1->fields).PositionChanged;
      this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(
                                  TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                                  );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_00,(Object *)this,
                 MethodInfo__UseInteratorVisualization__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                 ,
                 MethodInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>__UnityAction_System__Object__void__
                );
      pUVar3 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
               mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pUVar2,(Delegate *)this_00,(MethodInfo *)0x0);
      pUVar2 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
      if (pUVar3 != (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
        if (pUVar3->klass ==
            TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
           ) {
          pUVar2 = pUVar3;
        }
        pUVar4 = 
        TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
        if (pUVar2 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0)
        goto code_?;
      }
      (pMVar1->fields).PositionChanged = pUVar2;
      this_01 = (this->fields).cullingSubscriberBase;
    }
    if (this_01 == (CullingSubscriberBase *)0x0) {
      func_?();
      pUVar3 = extraout_ECX;
      pUVar4 = extraout_EDX;
code_?:
      func_?(pUVar3,pUVar4);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    CullingSubscriberBase::CullingSubscriberBase_Destroy(this_01,(MethodInfo *)0x0);
    (this->fields).cullingSubscriberBase = (CullingSubscriberBase *)0x0;
  }
  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
            ((Behaviour *)this,0,(MethodInfo *)0x0);
  return;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::UseInteratorVisualization::UseInteratorVisualization_OnDisable
               (UseInteratorVisualization *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  uStack_2 = 0;
  func_?(&uStack_2,0,0,0,0);
  index = 0;
  this_00 = (this->fields).useRequirements;
  while (this_00 != (List_1_UseRequirement_ *)0x0) {
    pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                        MethodInfo__System__Collections__Generic__List<UseRequirement>__get_Count__)
    ;
    if ((int)pOVar3 <= index) {
      return;
    }
    pLVar4 = (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)(this->fields).useRequirements;
    if ((pLVar4 == (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)0x0) ||
       (pIVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                 IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                           (pLVar4,index,
                            MethodInfo__System__Collections__Generic__List<UseRequirement>__get_Item_int_
                           ), pIVar5 == (IEventSystemHandler *)0x0)) break;
    uStack_2 = CONCAT44(pIVar5->klass[1].rgctx_data,pIVar5);
    cVar6 = (*(code *)pIVar5->klass[1].static_fields)();
    if (cVar6 != '\0') {
      pLVar4 = (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)
               (this->fields).useRequirements;
      if ((pLVar4 == (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)0x0) ||
         (pIVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                   IEventSystemHandler]::
                   List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                             (pLVar4,index,
                              MethodInfo__System__Collections__Generic__List<UseRequirement>__get_Item_int_
                             ), pIVar5 == (IEventSystemHandler *)0x0)) break;
      func_?(0xd,pIVar5,uStack_2,uStack_1);
    }
    index = index + 1;
    this_00 = (this->fields).useRequirements;
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::UseInteratorVisualization::UseInteratorVisualization_OnEnable
               (UseInteratorVisualization *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  uStack_2 = 0;
  func_?(&uStack_2,0,0,0,0);
  index = 0;
  this_00 = (this->fields).useRequirements;
  while (this_00 != (List_1_UseRequirement_ *)0x0) {
    pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                        MethodInfo__System__Collections__Generic__List<UseRequirement>__get_Count__)
    ;
    if ((int)pOVar3 <= index) {
      UseInteratorVisualization_Show(this,(MethodInfo *)0x0);
      return;
    }
    pLVar4 = (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)(this->fields).useRequirements;
    if ((pLVar4 == (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)0x0) ||
       (pIVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                 IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                           (pLVar4,index,
                            MethodInfo__System__Collections__Generic__List<UseRequirement>__get_Item_int_
                           ), pIVar5 == (IEventSystemHandler *)0x0)) break;
    uStack_2 = CONCAT44(pIVar5->klass[1].rgctx_data,pIVar5);
    cVar6 = (*(code *)pIVar5->klass[1].static_fields)();
    if (cVar6 != '\0') {
      pLVar4 = (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)
               (this->fields).useRequirements;
      if ((pLVar4 == (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)0x0) ||
         (pIVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                   IEventSystemHandler]::
                   List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                             (pLVar4,index,
                              MethodInfo__System__Collections__Generic__List<UseRequirement>__get_Item_int_
                             ), pIVar5 == (IEventSystemHandler *)0x0)) break;
      func_?(0xd,pIVar5,uStack_2,uStack_1);
    }
    index = index + 1;
    this_00 = (this->fields).useRequirements;
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnPositionChanged(MVWorldObjectClient, PositionChangedEventArgs) */

void Assembly-CSharp.dll::UseInteratorVisualization::UseInteratorVisualization_OnPositionChanged
               (UseInteratorVisualization *this,MVWorldObjectClient *arg0,
               PositionChangedEventArgs *positionChangedEventArgs,MethodInfo *method)

{
  if (positionChangedEventArgs != (PositionChangedEventArgs *)0x0) {
    UseInteratorVisualization_UpdatePosition
              (this,(positionChangedEventArgs->fields).NewPos,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnStateChanged(CullingGroupEvent) */

void Assembly-CSharp.dll::UseInteratorVisualization::UseInteratorVisualization_OnStateChanged
               (UseInteratorVisualization *this,CullingGroupEvent cullingGroupEvent,
               MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb8;
  puVar5 = &stack0xffffffb8;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  CStack_6.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_6.monitor = (MonitorData *)0x0;
  CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_6.fields.syncRoot = (Object *)0x0;
  func_?();
  this_00 = (this->fields).cullingSubscriberBase;
  puStack_7 = (undefined4 *)&stack0xffffffb8;
  puStack_4 = &stack0xffffffb8;
  if (this_00 != (CullingSubscriberBase *)0x0) {
    puStack_7 = (undefined4 *)&stack0xffffffb8;
    puStack_4 = &stack0xffffffb8;
    distanceBandIndex =
         mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
         Serialization::JsonProperty]::
         Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                   ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                    (MethodInfo *)0x0);
    if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
      func_?();
    }
    value = CullingApiWrapper::CullingApiWrapper_Visible
                      (cullingGroupEvent,(int32_t)distanceBandIndex,(MethodInfo *)0x0);
    this_01 = (List_1_UnityEngine_Color32_ *)(this->fields).useRequirements;
    if (this_01 != (List_1_UnityEngine_Color32_ *)0x0) {
      pLVar8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
               List_1_UnityEngine_Color32__GetEnumerator
                         ((List_1_T_Enumerator_UnityEngine_Color32_ *)&stack0xffffffc4,this_01,
                          MethodInfo__System__Collections__Generic__List<UseRequirement>__GetEnumerator__
                         );
      CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar8->ver;
      CStack_6.fields.syncRoot = (Object *)(pLVar8->current).rgba;
      uStack_1 = 0;
      while( true ) {
        do {
          CStack_6.monitor =
               (MonitorData *)
               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
          ;
          CStack_6.klass =
               (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)&CStack_6;
          cVar9 = func_?();
          if (cVar9 == '\0') {
            *puStack_7 = 0x61;
            uStack_1 = 0xffffffff;
            func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                      ((Behaviour *)this,value,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
          pMVar10 = (MethodInfo *)
                   mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             (&CStack_6,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__get_Current__
                             );
          if (pMVar10 == (MethodInfo *)0x0) goto code_?;
          cVar9 = (**(code **)(pMVar10->methodPointer + 0x118))();
        } while (cVar9 == '\0');
        CStack_6.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0xe;
        CStack_6.monitor = (MonitorData *)pMVar10;
        this_02 = (GameObject *)func_?();
        if (this_02 == (GameObject *)0x0) break;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_02,value,(MethodInfo *)0x0);
      }
    }
  }
code_?:
  func_?();
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void PayUseCost() */

void Assembly-CSharp.dll::UseInteratorVisualization::UseInteratorVisualization_PayUseCost
               (UseInteratorVisualization *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  index = 0;
  this_00 = (this->fields).useRequirements;
  while (this_00 != (List_1_UseRequirement_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                        MethodInfo__System__Collections__Generic__List<UseRequirement>__get_Count__)
    ;
    if ((int)pOVar1 <= index) {
      return;
    }
    this_01 = (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)(this->fields).useRequirements
    ;
    if ((this_01 == (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)0x0) ||
       (pIVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                 IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                           (this_01,index,
                            MethodInfo__System__Collections__Generic__List<UseRequirement>__get_Item_int_
                           ), pIVar2 == (IEventSystemHandler *)0x0)) break;
    (*(code *)pIVar2->klass[1]._0.parent)(pIVar2);
    index = index + 1;
    this_00 = (this->fields).useRequirements;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void RemoveCulling() */

void Assembly-CSharp.dll::UseInteratorVisualization::UseInteratorVisualization_RemoveCulling
               (UseInteratorVisualization *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_01 = (this->fields).cullingSubscriberBase;
  if (this_01 != (CullingSubscriberBase *)0x0) {
    pMVar1 = (this->fields).wo;
    if (pMVar1 != (MVWorldObjectClient *)0x0) {
      pUVar2 = (pMVar1->fields).PositionChanged;
      this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(
                                  TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                                  );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_00,(Object *)this,
                 MethodInfo__UseInteratorVisualization__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                 ,
                 MethodInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>__UnityAction_System__Object__void__
                );
      pUVar3 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
               mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pUVar2,(Delegate *)this_00,(MethodInfo *)0x0);
      pUVar2 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
      if (pUVar3 != (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
        if (pUVar3->klass ==
            TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
           ) {
          pUVar2 = pUVar3;
        }
        pUVar4 = 
        TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
        if (pUVar2 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0)
        goto code_?;
      }
      (pMVar1->fields).PositionChanged = pUVar2;
      this_01 = (this->fields).cullingSubscriberBase;
    }
    if (this_01 == (CullingSubscriberBase *)0x0) {
      func_?();
      pUVar3 = extraout_ECX;
      pUVar4 = extraout_EDX;
code_?:
      func_?(pUVar3,pUVar4);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    CullingSubscriberBase::CullingSubscriberBase_Destroy(this_01,(MethodInfo *)0x0);
    (this->fields).cullingSubscriberBase = (CullingSubscriberBase *)0x0;
  }
  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
            ((Behaviour *)this,0,(MethodInfo *)0x0);
  return;
}


/* Void SetupCulling() */

void Assembly-CSharp.dll::UseInteratorVisualization::UseInteratorVisualization_SetupCulling
               (UseInteratorVisualization *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pUVar1 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(
                          TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>
                          );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar1,(Object *)this,
             MethodInfo__UseInteratorVisualization__OnStateChanged_UnityEngine__CullingGroupEvent_,
             MethodInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>__UnityAction_System__Object__void__
            );
  pCVar2 = (CullingSubscriberBase *)func_?(TypeInfo__CullingSubscriberBase);
  CullingSubscriberBase::CullingSubscriberBase__ctor_1
            (pCVar2,(UnityAction_1_UnityEngine_CullingGroupEvent_ *)pUVar1,(MethodInfo *)0x0);
  (this->fields).cullingSubscriberBase = pCVar2;
  if (pCVar2 != (CullingSubscriberBase *)0x0) {
    CullingSubscriberBase::CullingSubscriberBase_set_Radius(pCVar2,2.0,(MethodInfo *)0x0);
    pCVar2 = (this->fields).cullingSubscriberBase;
    if (pCVar2 != (CullingSubscriberBase *)0x0) {
      LockCursorManager3DMode::LockCursorManager3DMode_set_OnCursorLockChanged
                ((LockCursorManager3DMode *)pCVar2,(Action_1_Boolean_ *)0x1,(MethodInfo *)0x0);
      pMVar3 = (this->fields).wo;
      if (pMVar3 != (MVWorldObjectClient *)0x0) {
        pUVar4 = (pMVar3->fields).PositionChanged;
        pUVar1 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar1,(Object *)this,
                   MethodInfo__UseInteratorVisualization__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                   ,
                   MethodInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>__UnityAction_System__Object__void__
                  );
        pMStack5 =
             (MVWorldObjectClient *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pUVar4,(Delegate *)pUVar1,(MethodInfo *)0x0);
        pUVar4 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
        if (pMStack5 != (MVWorldObjectClient *)0x0) {
          if (((UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)pMStack5)->
              klass == 
              TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
             ) {
            pUVar4 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)pMStack5;
          }
          if (pUVar4 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0)
          goto code_?;
        }
        (pMVar3->fields).PositionChanged = pUVar4;
        pMStack5 = (this->fields).wo;
        if (pMStack5 != (MVWorldObjectClient *)0x0) {
          puStack6 = &stack0xfffffff0;
          pVVar7 = (Vector3 *)
                   (*(code *)(pMStack5->klass->vtable).get_WorldPosition_1.method)();
          uVar8 = pVVar7->y;
          pMStack5 = (MVWorldObjectClient *)pVVar7->z;
          puStack6 = (undefined1 *)uVar8;
          UseInteratorVisualization_UpdatePosition(this,*pVVar7,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pMStack5 = (MVWorldObjectClient *)extraout_ECX;
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void Show() */

void Assembly-CSharp.dll::UseInteratorVisualization::UseInteratorVisualization_Show
               (UseInteratorVisualization *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopAllCoroutines
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__System__Action<float>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,MethodInfo__UseInteratorVisualization___Show_m__0_float_,
             MethodInfo__System__Action<float>__Action_System__Object__void__);
  routine = pTween::pTween_To(1.0,0.0,1.0,(Action_1_Single_ *)this_00,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
            ((MonoBehaviour *)this,routine,(MethodInfo *)0x0);
  (this->fields).visible = 1;
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::UseInteratorVisualization::UseInteratorVisualization_Update
               (UseInteratorVisualization *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                     ((Vector3 *)&stack0xffffffd8,(MethodInfo *)0x0);
  VVar3 = *pVVar2;
  fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  if (pTVar1 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_5
              (pTVar1,VVar3,fVar4 * _UNK_?,(MethodInfo *)0x0);
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (pTVar1 != (Transform *)0x0) {
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xffffffd8,pTVar1,(MethodInfo *)0x0);
      fVar4 = pVVar2->z;
      VVar3 = *pVVar2;
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      this_00 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                          ((MethodInfo *)0x0);
      if (this_00 != (SpawnRoleDataMediator *)0x0) {
        s = (SpawnRoleVariable_1_UnityEngine_Vector3_ *)
            PlayerListsLayout+<CreatePlayerLists>c__Iterator0::
            PlayerListsLayout_CreatePlayerLists_c_Iterator0_System_Collections_IEnumerator_get_Current
                      ((PlayerListsLayout_CreatePlayerLists_c_Iterator0 *)this_00,(MethodInfo *)0x0)
        ;
        pVVar2 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes
                 ::SpawnRoleVariable`1[UnityEngine::Vector3]::
                 SpawnRoleVariable_1_UnityEngine_Vector3__op_Implicit
                           ((Vector3 *)&stack0xffffffd8,s,
                            MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>_
                           );
        fStack5 = fVar4;
        UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                  ((Vector3 *)&stack0xffffffd8,VVar3,*pVVar2,(MethodInfo *)0x0);
        fVar6 = (float10)func_?();
        bVar7 = (this->fields).visible;
        if ((float)fVar6 < _UNK_?) {
          if (bVar7 == 0) {
            UseInteratorVisualization_Show(this,(MethodInfo *)0x0);
            return;
          }
        }
        else if (bVar7 != 0) {
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopAllCoroutines
                    ((MonoBehaviour *)this,(MethodInfo *)0x0);
          this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                     *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (this_01,(Object *)this,MethodInfo__UseInteratorVisualization___Hide_m__1_float_
                     ,MethodInfo__System__Action<float>__Action_System__Object__void__);
          routine = pTween::pTween_To(1.0,1.0,0.0,(Action_1_Single_ *)this_01,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                    ((MonoBehaviour *)this,routine,(MethodInfo *)0x0);
          (this->fields).visible = 0;
        }
        return;
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void UpdateData(Dictionary`2[System.Object,System.Object], Int32) */

void Assembly-CSharp.dll::UseInteratorVisualization::UseInteratorVisualization_UpdateData
               (UseInteratorVisualization *this,Dictionary_2_System_Object_System_Object_ *data,
               int32_t ownerID,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb8;
  puVar5 = &stack0xffffffb8;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  CStack_6.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_6.monitor = (MonitorData *)0x0;
  CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_6.fields.syncRoot = (Object *)0x0;
  func_?();
  this_00 = (List_1_UnityEngine_Color32_ *)(this->fields).useRequirements;
  puStack_7 = (undefined4 *)&stack0xffffffb8;
  puStack_4 = &stack0xffffffb8;
  if (this_00 != (List_1_UnityEngine_Color32_ *)0x0) {
    puStack_7 = (undefined4 *)&stack0xffffffb8;
    puStack_4 = &stack0xffffffb8;
    pLVar8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
             List_1_UnityEngine_Color32__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_9,this_00,
                        MethodInfo__System__Collections__Generic__List<UseRequirement>__GetEnumerator__
                       );
    CStack_6.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar8->l;
    CStack_6.monitor = (MonitorData *)pLVar8->next;
    CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar8->ver;
    CStack_6.fields.syncRoot = (Object *)(pLVar8->current).rgba;
    uStack_1 = 0;
    while( true ) {
      cVar10 = func_?();
      if (cVar10 == '\0') {
        *puStack_7 = 0x40;
        uStack_1 = 0xffffffff;
        func_?(&CStack_6,
                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__Dispose__
                       );
        UseInteratorVisualization_CalculateSpacing(this,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      pOVar11 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         (&CStack_6,
                          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__get_Current__
                         );
      if (pOVar11 == (Object *)0x0) break;
      (**(code **)&pOVar11->klass[1]._0.this_arg.attrs)
                (pOVar11,data,ownerID,pOVar11->klass[1]._0.element_class);
    }
  }
  func_?(0);
  func_?(0,0);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void UpdatePosition(Vector3) */

void Assembly-CSharp.dll::UseInteratorVisualization::UseInteratorVisualization_UpdatePosition
               (UseInteratorVisualization *this,Vector3 pos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).cullingSubscriberBase;
  VVar1 = (this->fields).pivot;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  a.y = pos.y;
  a.x = pos.x;
  a.z = pos.z;
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                     (&pos,a,VVar1,(MethodInfo *)0x0);
  pos.x = 0.0;
  if (this_00 != (CullingSubscriberBase *)0x0) {
    uVar3 = pVVar2->x;
    uVar4 = pVVar2->y;
    this = (UseInteratorVisualization *)pVVar2->z;
    fVar5 = (float)uVar4;
    VVar1.x = (float)uVar3;
    VVar1 = (Vector3)CONCAT84(uVar6,VVar1.x);
    CullingSubscriberBase::CullingSubscriberBase_set_Position(this_00,VVar1,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void <Hide>m__1(Single) */

void Assembly-CSharp.dll::UseInteratorVisualization::UseInteratorVisualization__Hide_m__1
               (UseInteratorVisualization *this,float t,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  uStack_2 = 0;
  func_?(&uStack_2,t,t,t,0);
  index = 0;
  this_00 = (this->fields).useRequirements;
  while (this_00 != (List_1_UseRequirement_ *)0x0) {
    pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                        MethodInfo__System__Collections__Generic__List<UseRequirement>__get_Count__)
    ;
    if ((int)pOVar3 <= index) {
      return;
    }
    pLVar4 = (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)(this->fields).useRequirements;
    if ((pLVar4 == (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)0x0) ||
       (pIVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                 IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                           (pLVar4,index,
                            MethodInfo__System__Collections__Generic__List<UseRequirement>__get_Item_int_
                           ), pIVar5 == (IEventSystemHandler *)0x0)) break;
    uStack_2 = CONCAT44(pIVar5->klass[1].rgctx_data,pIVar5);
    cVar6 = (*(code *)pIVar5->klass[1].static_fields)();
    if (cVar6 != '\0') {
      pLVar4 = (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)
               (this->fields).useRequirements;
      if ((pLVar4 == (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)0x0) ||
         (pIVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                   IEventSystemHandler]::
                   List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                             (pLVar4,index,
                              MethodInfo__System__Collections__Generic__List<UseRequirement>__get_Item_int_
                             ), pIVar5 == (IEventSystemHandler *)0x0)) break;
      func_?(0xd,pIVar5,uStack_2,uStack_1);
    }
    index = index + 1;
    this_00 = (this->fields).useRequirements;
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void <Show>m__0(Single) */

void Assembly-CSharp.dll::UseInteratorVisualization::UseInteratorVisualization__Show_m__0
               (UseInteratorVisualization *this,float t,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  uStack_2 = 0;
  func_?(&uStack_2,t,t,t,0);
  index = 0;
  this_00 = (this->fields).useRequirements;
  while (this_00 != (List_1_UseRequirement_ *)0x0) {
    pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                        MethodInfo__System__Collections__Generic__List<UseRequirement>__get_Count__)
    ;
    if ((int)pOVar3 <= index) {
      return;
    }
    pLVar4 = (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)(this->fields).useRequirements;
    if ((pLVar4 == (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)0x0) ||
       (pIVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                 IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                           (pLVar4,index,
                            MethodInfo__System__Collections__Generic__List<UseRequirement>__get_Item_int_
                           ), pIVar5 == (IEventSystemHandler *)0x0)) break;
    uStack_2 = CONCAT44(pIVar5->klass[1].rgctx_data,pIVar5);
    cVar6 = (*(code *)pIVar5->klass[1].static_fields)();
    if (cVar6 != '\0') {
      pLVar4 = (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)
               (this->fields).useRequirements;
      if ((pLVar4 == (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)0x0) ||
         (pIVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                   IEventSystemHandler]::
                   List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                             (pLVar4,index,
                              MethodInfo__System__Collections__Generic__List<UseRequirement>__get_Item_int_
                             ), pIVar5 == (IEventSystemHandler *)0x0)) break;
      func_?(0xd,pIVar5,uStack_2,uStack_1);
    }
    index = index + 1;
    this_00 = (this->fields).useRequirements;
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* UseInteratorVisualization() */

void Assembly-CSharp.dll::UseInteratorVisualization::UseInteratorVisualization__ctor
               (UseInteratorVisualization *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(TypeInfo__System__Collections__Generic__List<UseRequirement>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,MethodInfo__System__Collections__Generic__List<UseRequirement>__List__);
  fStack_1 = 0.0;
  uStack_2 = 0;
  (this->fields).useRequirements = (List_1_UseRequirement_ *)this_00;
  func_?(&uStack_2,0,0x40200000,0,0);
  (this->fields).pivot.x = (float)(undefined4)uStack_2;
  (this->fields).pivot.y = (float)uStack_2._4_4_;
  (this->fields).pivot.z = fStack_1;
  (this->fields).baseDist = 1.3;
  (this->fields).dist = 0.01;
  (this->fields).spacing = 120.0;
  UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor((Canvas *)this,(MethodInfo *)0x0);
  return;
}

