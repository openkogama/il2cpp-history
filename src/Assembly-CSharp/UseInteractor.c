
/* Void AddRequirement(UseRequirement) */

void Assembly-CSharp.dll::UseInteractor::UseInteractor_AddRequirement
               (UseInteractor *this,UseRequirement *useRequirement,MethodInfo *method)

{
  this_00 = (this->fields).useInteractorVisuals;
  if (this_00 != (UseInteratorVisualization *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    this_01 = (this_00->fields).useRequirements;
    if (this_01 != (List_1_UseRequirement_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                ((List_1_UIPushOption_ *)this_01,(UIPushOption__Enum)useRequirement,
                 MethodInfo__System__Collections__Generic__List<UseRequirement>__Add_UseRequirement_
                );
      UseInteratorVisualization::UseInteratorVisualization_CalculateSpacing
                (this_00,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* UseGUIResult EvaluateRequirementsUsability() */

UseGUIResult__Enum
Assembly-CSharp.dll::UseInteractor::UseInteractor_EvaluateRequirementsUsability
          (UseInteractor *this,MethodInfo *method)

{
  pUVar1 = (this->fields).useInteractorVisuals;
  if (pUVar1 != (UseInteratorVisualization *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    pLVar2 = (pUVar1->fields).useRequirements;
    if (pLVar2 != (List_1_UseRequirement_ *)0x0) {
      pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                          MethodInfo__System__Collections__Generic__List<UseRequirement>__get_Count__
                         );
      if (pOVar3 == (Object *)0x0) {
        return UseGUIResult__Enum_NoCost;
      }
      pLVar2 = (pUVar1->fields).useRequirements;
      UVar4 = 0;
      this = (UseInteractor *)0x0;
      while (pLVar2 != (List_1_UseRequirement_ *)0x0) {
        pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                            MethodInfo__System__Collections__Generic__List<UseRequirement>__get_Count__
                           );
        if ((int)pOVar3 <= (int)this) {
          return UVar4;
        }
        this_00 = (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)
                  (pUVar1->fields).useRequirements;
        if ((this_00 == (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)0x0) ||
           (pIVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                     IEventSystemHandler]::
                     List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                               (this_00,(int32_t)this,
                                MethodInfo__System__Collections__Generic__List<UseRequirement>__get_Item_int_
                               ), pIVar5 == (IEventSystemHandler *)0x0)) break;
        UVar6 = (*(code *)pIVar5->klass[1]._0.castClass)(pIVar5);
        UVar4 = UVar4 | UVar6;
        this = (UseInteractor *)((int)&this->klass + 1);
        pLVar2 = (pUVar1->fields).useRequirements;
      }
    }
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  UVar4 = (*pcVar7)();
  return UVar4;
}


/* ShowUseOption GetGUIShowOptions() */

ShowUseOption__Enum
Assembly-CSharp.dll::UseInteractor::UseInteractor_GetGUIShowOptions
          (UseInteractor *this,MethodInfo *method)

{
  pUVar1 = (this->fields).useInteractorVisuals;
  if (pUVar1 != (UseInteratorVisualization *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    pLVar2 = (pUVar1->fields).useRequirements;
    if (pLVar2 != (List_1_UseRequirement_ *)0x0) {
      pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                          MethodInfo__System__Collections__Generic__List<UseRequirement>__get_Count__
                         );
      if (pOVar3 == (Object *)0x0) {
        return ShowUseOption__Enum_Normal;
      }
      pLVar2 = (pUVar1->fields).useRequirements;
      index = 0;
      if (pLVar2 != (List_1_UseRequirement_ *)0x0) {
        this = (UseInteractor *)0x0;
        do {
          pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                              MethodInfo__System__Collections__Generic__List<UseRequirement>__get_Count__
                             );
          if ((int)pOVar3 <= index) {
            return (uint)this._2_2_;
          }
          this_00 = (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)
                    (pUVar1->fields).useRequirements;
          if ((this_00 == (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)0x0) ||
             (pIVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems
                       ::IEventSystemHandler]::
                       List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                 (this_00,index,
                                  MethodInfo__System__Collections__Generic__List<UseRequirement>__get_Item_int_
                                 ), pIVar4 == (IEventSystemHandler *)0x0)) break;
          uVar5 = (*(code *)pIVar4->klass[1]._0.events)(pIVar4);
          this = (UseInteractor *)((uint)(this._2_2_ | uVar5) << 0x10);
          index = index + 1;
          pLVar2 = (pUVar1->fields).useRequirements;
        } while (pLVar2 != (List_1_UseRequirement_ *)0x0);
      }
    }
  }
  func_?(0);
  pcVar6 = (code *)swi(3);
  SVar7 = (*pcVar6)();
  return SVar7;
}


/* Boolean GetInteractorCanBeUsed(Int32, MVInteractableBase) */

bool Assembly-CSharp.dll::UseInteractor::UseInteractor_GetInteractorCanBeUsed
               (UseInteractor *this,int32_t woId,MVInteractableBase *avatarInteractable,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Func_3_Int32_Object_Boolean_ *)(this->fields).checkCanUseFunction;
  if (this_00 == (Func_3_Int32_Object_Boolean_ *)0x0) {
    return 1;
  }
  bVar1 = System.Core.dll::System::Func`3[Int32,Object,Boolean]::Func_3_Int32_Object_Boolean__Invoke
                    (this_00,woId,(Object *)avatarInteractable,
                     MethodInfo__System__Func<int,_MVInteractableBase,_bool>__Invoke_int__MVInteractableBase_
                    );
  return bVar1;
}


/* UseInteractorHandler GetUseInteractorHandler(Int32) */

UseInteractorHandler *
Assembly-CSharp.dll::UseInteractor::UseInteractor_GetUseInteractorHandler
          (UseInteractor *this,int32_t woID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    this_01 = (DayNightCycle *)
              MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                        (this_00,woID,(MethodInfo *)0x0);
    if (this_01 == (DayNightCycle *)0x0) {
      return (UseInteractorHandler *)0x0;
    }
    this_02 = DayNightCycle::DayNightCycle_get_CurrentMoonParam(this_01,(MethodInfo *)0x0);
    if (this_02 != (CelestialParam *)0x0) {
      pUVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                         ((GameObject *)this_02,
                          UseInteractorHandler_MethodInfo__UnityEngine__GameObject__GetComponent<UseInteractorHandler>__
                         );
      return pUVar1;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pUVar1 = (UseInteractorHandler *)(*pcVar2)();
  return pUVar1;
}


/* Void OnDestroy(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::UseInteractor::UseInteractor_OnDestroy
               (UseInteractor *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  pUVar1 = (this->fields).useInteractorVisuals;
  if (pUVar1 == (UseInteratorVisualization *)0x0) {
    uStack_2 = 0;
    func_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uStack_2 = 0xffffffff;
  puStack_4 = &DAT_?;
  uStack_5 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_5;
  puStack_6 = &stack0xffffffb8;
  puVar7 = &stack0xffffffb8;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar7 = puStack_6;
  }
  puStack_6 = puVar7;
  CStack_8.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_8.monitor = (MonitorData *)0x0;
  CStack_8.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_8.fields.syncRoot = (Object *)0x0;
  func_?();
  this_00 = (List_1_UnityEngine_Color32_ *)(pUVar1->fields).useRequirements;
  puStack_9 = (undefined4 *)&stack0xffffffb8;
  puStack_6 = &stack0xffffffb8;
  if (this_00 != (List_1_UnityEngine_Color32_ *)0x0) {
    puStack_9 = (undefined4 *)&stack0xffffffb8;
    puStack_6 = &stack0xffffffb8;
    pLVar10 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
             List_1_UnityEngine_Color32__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_11,this_00,
                        MethodInfo__System__Collections__Generic__List<UseRequirement>__GetEnumerator__
                       );
    CStack_8.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar10->l;
    CStack_8.monitor = (MonitorData *)pLVar10->next;
    CStack_8.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar10->ver;
    CStack_8.fields.syncRoot = (Object *)(pLVar10->current).rgba;
    uStack_2 = 0;
    while( true ) {
      cVar12 = func_?();
      if (cVar12 == '\0') {
        *puStack_9 = 0x3f;
        uStack_2 = 0xffffffff;
        func_?(&CStack_8,
                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__Dispose__
                       );
        *unaff_FS_OFFSET = uStack_5;
        return;
      }
      pOVar13 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         (&CStack_8,
                          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__get_Current__
                         );
      if (pOVar13 == (Object *)0x0) break;
      (**(code **)&pOVar13->klass[1]._0.byval_arg.attrs)
                (pOVar13,data,pOVar13->klass[1]._0.this_arg.data.dummy);
    }
  }
  func_?(0);
  func_?(0,0,0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void PayUseCost() */

void Assembly-CSharp.dll::UseInteractor::UseInteractor_PayUseCost
               (UseInteractor *this,MethodInfo *method)

{
  pUVar1 = (this->fields).useInteractorVisuals;
  if (pUVar1 != (UseInteratorVisualization *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    index = 0;
    this_00 = (pUVar1->fields).useRequirements;
    while (this_00 != (List_1_UseRequirement_ *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                          MethodInfo__System__Collections__Generic__List<UseRequirement>__get_Count__
                         );
      if ((int)pOVar2 <= index) {
        return;
      }
      this_01 = (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)
                (pUVar1->fields).useRequirements;
      if ((this_01 == (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)0x0) ||
         (pIVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                   IEventSystemHandler]::
                   List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                             (this_01,index,
                              MethodInfo__System__Collections__Generic__List<UseRequirement>__get_Item_int_
                             ), pIVar3 == (IEventSystemHandler *)0x0)) break;
      (*(code *)pIVar3->klass[1]._0.parent)(pIVar3);
      index = index + 1;
      this_00 = (pUVar1->fields).useRequirements;
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdateData(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::UseInteractor::UseInteractor_UpdateData
               (UseInteractor *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  this_00 = (this->fields).useInteractorVisuals;
  if (this_00 != (UseInteratorVisualization *)0x0) {
    UseInteratorVisualization::UseInteratorVisualization_UpdateData
              (this_00,data,(this->fields).woOwnerID,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Boolean Use(Int32) */

bool Assembly-CSharp.dll::UseInteractor::UseInteractor_Use
               (UseInteractor *this,int32_t userWoID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  UVar1 = UseInteractor_EvaluateRequirementsUsability(this,(MethodInfo *)0x0);
  if ((UVar1 & UseGUIResult__Enum_CannotAfford) != 0) {
    UVar1 = UseInteractor_EvaluateRequirementsUsability(this,(MethodInfo *)0x0);
    if ((UVar1 & UseGUIResult__Enum_CannotAfford) != 0) {
      data = (Dictionary_2_System_Object_System_Object_ *)func_?();
      System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]
      ::HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)data,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      key = (String *)func_?(TypeInfo__System__Byte,&stack0xfffffffb);
      value = (CrossPlatformInputManager_VirtualButton *)
              func_?(TypeInfo__System__Int32,&stack0xfffffff4);
      if (data == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
      CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
      Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                  *)data,key,value,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      if ((((uint)(TypeInfo__NotificationController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__NotificationController->_1).cctor_started == 0)) {
        func_?();
      }
      NotificationController::NotificationController_OnNotificationReceived
                (NotificationType__Enum_Requirement,data,(MethodInfo *)0x0);
    }
    return 0;
  }
  this_00 = (Predicate_1_UIPushOption_ *)(this->fields).useFunction;
  if (this_00 != (Predicate_1_UIPushOption_ *)0x0) {
    bVar2 = mscorlib.dll::System::Predicate`1[UIPushOption]::Predicate_1_UIPushOption__Invoke
                      (this_00,userWoID,MethodInfo__System__Func<int,_bool>__Invoke_int_);
    return bVar2;
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* UseInteractor(MVWorldObjectClient, GameObject, Boolean, Collider, Func`2[Int32,Boolean],
   Func`3[Int32,MVInteractableBase,Boolean], Single) */

void Assembly-CSharp.dll::UseInteractor::UseInteractor__ctor
               (UseInteractor *this,MVWorldObjectClient *wo,GameObject *owner,bool reset,
               Collider *triggerCollider,Func_2_Int32_Boolean_ *useFunction,
               Func_3_Int32_MVInteractableBase_Boolean_ *checkCanUseFunction,float yOffset,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  if (owner != (GameObject *)0x0) {
    this_00 = (UseInteratorVisualization *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_85
                        (owner,
                         UseInteratorVisualization_MethodInfo__UnityEngine__GameObject__AddComponent<UseInteratorVisualization>__
                        );
    (this->fields).useInteractorVisuals = this_00;
    if (this_00 != (UseInteratorVisualization *)0x0) {
      (this_00->fields).wo = wo;
      (this_00->fields).pivot.y = yOffset;
      UseInteratorVisualization::UseInteratorVisualization_CalculateSpacing
                (this_00,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)this_00,0,(MethodInfo *)0x0);
      if (wo != (MVWorldObjectClient *)0x0) {
        pIVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                 Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)wo,(MethodInfo *)0x0);
        (this->fields).woOwnerID = (int32_t)pIVar1;
        (this->fields).useFunction = useFunction;
        (this->fields).triggerCollider = triggerCollider;
        (this->fields).reset = 0;
        (this->fields).checkCanUseFunction = checkCanUseFunction;
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void triggerBoxEvents_TriggerEnter(Object, TriggerEventArgs) */

void Assembly-CSharp.dll::UseInteractor::UseInteractor_triggerBoxEvents_TriggerEnter
               (UseInteractor *this,Object *sender,TriggerEventArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (e != (TriggerEventArgs *)0x0) {
    x = UseInteractor_GetUseInteractorHandler(this,(e->fields).instigatorWOID,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return;
    }
    if (x != (UseInteractorHandler *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((this != (UseInteractor *)0x0) &&
         (this_00 = (x->fields).useInteractors,
         this_00 != (Dictionary_2_System_Int32_UseInteractor_ *)0x0)) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Add
                  ((Dictionary_2_System_Int32_System_Object_ *)this_00,(this->fields).woOwnerID,
                   (Object *)this,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_UseInteractor>__Add_int__UseInteractor_
                  );
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void triggerBoxEvents_TriggerExit(Object, TriggerEventArgs) */

void Assembly-CSharp.dll::UseInteractor::UseInteractor_triggerBoxEvents_TriggerExit
               (UseInteractor *this,Object *sender,TriggerEventArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (e != (TriggerEventArgs *)0x0) {
    x = UseInteractor_GetUseInteractorHandler(this,(e->fields).instigatorWOID,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return;
    }
    if (x != (UseInteractorHandler *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((this != (UseInteractor *)0x0) &&
         (this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                     *)(x->fields).useInteractors,
         this_00 !=
         (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *
         )0x0)) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
        Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
        Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Remove
                  (this_00,(this->fields).woOwnerID,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_UseInteractor>__Remove_int_
                  );
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

