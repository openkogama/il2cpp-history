
/* Void AddMaterialsToAvatarFader() */

void Assembly-CSharp.dll::FadeableAvatarObject::FadeableAvatarObject_AddMaterialsToAvatarFader
               (FadeableAvatarObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__FadeableAvatarObject___AddMaterialsToAvatarFader_c__AnonStorey0;
  this_01 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,(MethodInfo *)method_00);
  if (this_01 != (ScaleAnimationBase *)0x0) {
    pvVar1 = (void *)0x0;
    (this_01->fields).state = (int32_t)this;
    (this_01->fields)._._._._.m_CachedPtr = (void *)0x0;
    while( true ) {
      this_00 = (this->fields).materials;
      if (this_00 == (List_1_UnityEngine_Material_ *)0x0) break;
      pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__get_Count__
                         );
      if ((int)pOVar2 <= (int)pvVar1) {
        return;
      }
      root = (this->fields).avatarObject;
      this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_02,(Object *)this_01,
                 MethodInfo__FadeableAvatarObject___AddMaterialsToAvatarFader_c__AnonStorey0____m__0_IFadeParent__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IFadeParent>__EventFunction_System__Object__void__
                );
      if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
      ExecuteEvents_ExecuteHierarchy_63
                (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_02,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IFadeParent>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IFadeParent>_
                );
      (this_01->fields)._._._._.m_CachedPtr =
           (void *)((int)(this_01->fields)._._._._.m_CachedPtr + 1);
      pvVar1 = (this_01->fields)._._._._.m_CachedPtr;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Initialize(GameObject) */

void Assembly-CSharp.dll::FadeableAvatarObject::FadeableAvatarObject_Initialize
               (FadeableAvatarObject *this,GameObject *avatarObject,MethodInfo *method)

{
  (this->fields).avatarObject = avatarObject;
  FadeableAvatarObject_AddMaterialsToAvatarFader(this,(MethodInfo *)0x0);
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::FadeableAvatarObject::FadeableAvatarObject_OnDestroy
               (FadeableAvatarObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).avatarObject;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pGVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
code_?:
    this_01 = (List_1_UnityEngine_UIVertex_ *)(this->fields).materials;
    if (this_01 != (List_1_UnityEngine_UIVertex_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
      List_1_UnityEngine_UIVertex__Clear
                (this_01,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__Clear__);
      return;
    }
  }
  else {
    this_02 = (ScaleAnimationBase *)
              func_?(TypeInfo__FadeableAvatarObject___OnDestroy_c__AnonStorey1);
    ScaleAnimationBase::ScaleAnimationBase_Play(this_02,0.0,unaff_retaddr);
    if (this_02 != (ScaleAnimationBase *)0x0) {
      (this_02->fields).state = (int32_t)this;
      pvVar3 = (void *)0x0;
      (this_02->fields)._._._._.m_CachedPtr = (void *)0x0;
      while (this_00 = (this->fields).materials, this_00 != (List_1_UnityEngine_Material_ *)0x0) {
        pOVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__get_Count__
                           );
        if ((int)pOVar4 <= (int)pvVar3) goto code_?;
        pGVar1 = (this->fields).avatarObject;
        this_03 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_03,(Object *)this_02,
                   MethodInfo__FadeableAvatarObject___OnDestroy_c__AnonStorey1____m__0_IFadeParent__UnityEngine__EventSystems__BaseEventData_
                   ,
                   MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IFadeParent>__EventFunction_System__Object__void__
                  );
        if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
        ExecuteEvents_ExecuteHierarchy_63
                  (pGVar1,(BaseEventData *)0x0,
                   (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_03,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IFadeParent>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IFadeParent>_
                  );
        (this_02->fields)._._._._.m_CachedPtr =
             (void *)((int)(this_02->fields)._._._._.m_CachedPtr + 1);
        pvVar3 = (this_02->fields)._._._._.m_CachedPtr;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::FadeableAvatarObject::FadeableAvatarObject_Start
               (FadeableAvatarObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pUVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
           GameObject_GetComponentsInChildren_29
                     ((GameObject *)this,
                      UnityEngine__Renderer__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::Renderer>______
                     );
  uStack_2 = 0;
  if (pUVar1 == (UseInteratorVisualization__Array *)0x0) {
code_?:
    func_?(0);
  }
  else {
    ppUVar3 = pUVar1->vector;
    while( true ) {
      if ((int)pUVar1->max_length <= (int)uStack_2) {
        x = (this->fields).avatarObject;
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar4 != 0) {
          FadeableAvatarObject_AddMaterialsToAvatarFader(this,(MethodInfo *)0x0);
        }
        return;
      }
      if (pUVar1->max_length <= uStack_2) break;
      if (*ppUVar3 == (UseInteratorVisualization *)0x0) goto code_?;
      pMVar5 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_materials
                         ((Renderer *)*ppUVar3,(MethodInfo *)0x0);
      iVar6 = 0;
      while( true ) {
        if (pMVar5 == (Material__Array *)0x0) goto code_?;
        if ((int)pMVar5->max_length <= iVar6) break;
        this_00 = (this->fields).materials;
        item = func_?(iVar6);
        if (this_00 == (List_1_UnityEngine_Material_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                  ((List_1_UIPushOption_ *)this_00,item,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__Add_UnityEngine__Material_
                  );
        iVar6 = iVar6 + 1;
      }
      uStack_2 = uStack_2 + 1;
      ppUVar3 = ppUVar3 + 1;
    }
  }
  uVar7 = func_?(0,0);
  func_?(uVar7);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* FadeableAvatarObject() */

void Assembly-CSharp.dll::FadeableAvatarObject::FadeableAvatarObject__ctor
               (FadeableAvatarObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Material>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,MethodInfo__System__Collections__Generic__List<UnityEngine::Material>__List__);
  (this->fields).materials = (List_1_UnityEngine_Material_ *)this_00;
  uStack1 = 0;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  return;
}

