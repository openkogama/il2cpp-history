
/* Void Awake() */

void Assembly-CSharp.dll::GreyOutObjectScript::GreyOutObjectScript_Awake
               (GreyOutObjectScript *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
            ((Behaviour *)this,0,(MethodInfo *)0x0);
  pGVar1 = (this->fields).pickupObject;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  method_00 = (MethodInfo *)&UNK_?;
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                    ((Object_1 *)pGVar1,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    return;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_UIVertex_ *)(this->fields).pickupOriginalMaterials;
  if (this_00 != (List_1_UnityEngine_UIVertex_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
    List_1_UnityEngine_UIVertex__Clear
              (this_00,
               MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__Clear__
              );
    pGVar1 = (this->fields).pickupObject;
    if (pGVar1 != (GameObject *)0x0) {
      pUVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
               GameObject_GetComponentsInChildren_29
                         (pGVar1,
                          UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                         );
      uVar4 = 0;
      if (pUVar3 != (UseInteratorVisualization__Array *)0x0) {
        ppUVar5 = pUVar3->vector;
        while( true ) {
          if ((int)pUVar3->max_length <= (int)uVar4) {
            return;
          }
          if (pUVar3->max_length <= uVar4) break;
          this_01 = *ppUVar5;
          this_02 = (ScaleAnimationBase *)func_?();
          *(undefined1 *)&(this_02->fields).originalScale.x = 1;
          ScaleAnimationBase::ScaleAnimationBase_Play(this_02,0.0,method_00);
          (this_02->fields)._._._._.m_CachedPtr = this_01;
          if (this_01 == (UseInteratorVisualization *)0x0) goto code_?;
          method_00 = (MethodInfo *)&UNK_?;
          pMVar6 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_sharedMaterials
                             ((Renderer *)this_01,(MethodInfo *)0x0);
          (this_02->fields).state = (int32_t)pMVar6;
          if (_UNK_? == (UseInteratorVisualization__Array *)0x0) goto code_?;
          pUVar3 = _UNK_?;
          mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                    ((List_1_UIPushOption_ *)_UNK_?,(UIPushOption__Enum)this_02,
                     MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__Add_GreyOutObjectScript__PickupOriginalMaterials_
                    );
          uVar4 = uVar4 + 1;
          ppUVar5 = (UseInteratorVisualization **)&this_02->monitor;
        }
        func_?();
        func_?();
      }
    }
  }
code_?:
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void ExecuteOnMaterials(Action`1[GreyOutObjectScript+PickupOriginalMaterials]) */

void Assembly-CSharp.dll::GreyOutObjectScript::GreyOutObjectScript_ExecuteOnMaterials
               (GreyOutObjectScript *this,
               Action_1_GreyOutObjectScript_PickupOriginalMaterials_ *action,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).pickupOriginalMaterials;
  if (pLVar1 != (List_1_GreyOutObjectScript_PickupOriginalMaterials_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__get_Count__
                       );
    index = (undefined1 *)((int)&pOVar2[-1].monitor + 3);
    do {
      if ((int)index < 0) {
        return;
      }
      pLVar1 = (this->fields).pickupOriginalMaterials;
      if ((pLVar1 == (List_1_GreyOutObjectScript_PickupOriginalMaterials_ *)0x0) ||
         (pIVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                   IEventSystemHandler]::
                   List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                             ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,
                              (int32_t)index,
                              MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__get_Item_int_
                             ), pIVar3 == (IEventSystemHandler *)0x0)) break;
      x = pIVar3[1].klass;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar4 == 0) {
        pLVar1 = (this->fields).pickupOriginalMaterials;
        if (((pLVar1 == (List_1_GreyOutObjectScript_PickupOriginalMaterials_ *)0x0) ||
            (pIVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                      IEventSystemHandler]::
                      List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,
                                 (int32_t)index,
                                 MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__get_Item_int_
                                ), pIVar3 == (IEventSystemHandler *)0x0)) ||
           (pIVar3[1].klass == (IEventSystemHandler__Class *)0x0)) break;
        x_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)pIVar3[1].klass,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                          ((Object_1 *)x_00,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar4 != 0) goto code_?;
        pLVar1 = (this->fields).pickupOriginalMaterials;
        if ((pLVar1 == (List_1_GreyOutObjectScript_PickupOriginalMaterials_ *)0x0) ||
           (obj = (Dictionary_2_System_String_System_Object_ *)
                  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                  IEventSystemHandler]::
                  List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                            ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,
                             (int32_t)index,
                             MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__get_Item_int_
                            ),
           action == (Action_1_GreyOutObjectScript_PickupOriginalMaterials_ *)0x0)) break;
        mscorlib.dll::System::Action`1[System::Collections::Generic::Dictionary`2[System::
        String,System::Object]]::
        Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object__Invoke
                  ((Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)
                   action,obj,
                   MethodInfo__System__Action<GreyOutObjectScript::PickupOriginalMaterials>__Invoke_GreyOutObjectScript__PickupOriginalMaterials_
                  );
      }
      else {
code_?:
        this_00 = (List_1_MVPlayer_ *)(this->fields).pickupOriginalMaterials;
        if (this_00 == (List_1_MVPlayer_ *)0x0) break;
        mscorlib.dll::System::Collections::Generic::List`1[MVPlayer]::List_1_MVPlayer__RemoveAt
                  (this_00,(int32_t)index,
                   MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__RemoveAt_int_
                  );
      }
      index = index + -1;
    } while( true );
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void GreyIn() */

void Assembly-CSharp.dll::GreyOutObjectScript::GreyOutObjectScript_GreyIn
               (GreyOutObjectScript *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (TypeInfo__GreyOutObjectScript->static_fields->__f__mg_cache0 ==
      (Action_1_GreyOutObjectScript_PickupOriginalMaterials_ *)0x0) {
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__Action<GreyOutObjectScript::PickupOriginalMaterials>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)0x0,
               MethodInfo__GreyOutObjectScript__GreyInExec_GreyOutObjectScript__PickupOriginalMaterials_
               ,
               MethodInfo__System__Action<GreyOutObjectScript::PickupOriginalMaterials>__Action_System__Object__void__
              );
    TypeInfo__GreyOutObjectScript->static_fields->__f__mg_cache0 =
         (Action_1_GreyOutObjectScript_PickupOriginalMaterials_ *)this_00;
  }
  if (this != (GreyOutObjectScript *)0x0) {
    GreyOutObjectScript_ExecuteOnMaterials
              (this,TypeInfo__GreyOutObjectScript->static_fields->__f__mg_cache0,(MethodInfo *)0x0);
    (this->fields).isGreyedIn = 1;
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void GreyInExec(GreyOutObjectScript+PickupOriginalMaterials) */

void Assembly-CSharp.dll::GreyOutObjectScript::GreyOutObjectScript_GreyInExec
               (GreyOutObjectScript_PickupOriginalMaterials *pickupOriginalMaterial,
               MethodInfo *method)

{
  if ((pickupOriginalMaterial != (GreyOutObjectScript_PickupOriginalMaterials *)0x0) &&
     (pMVar1 = (pickupOriginalMaterial->fields).meshRenderer, pMVar1 != (MeshRenderer *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterials
              ((Renderer *)pMVar1,(pickupOriginalMaterial->fields).originalMaterials,
               (MethodInfo *)0x0);
    pMVar1 = (pickupOriginalMaterial->fields).meshRenderer;
    if (pMVar1 != (MeshRenderer *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                ((Renderer *)pMVar1,(pickupOriginalMaterial->fields).meshRendererEnabled,
                 (MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void GreyOut() */

void Assembly-CSharp.dll::GreyOutObjectScript::GreyOutObjectScript_GreyOut
               (GreyOutObjectScript *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__System__Action<GreyOutObjectScript::PickupOriginalMaterials>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,
             MethodInfo__GreyOutObjectScript__GreyOutExec_GreyOutObjectScript__PickupOriginalMaterials_
             ,
             MethodInfo__System__Action<GreyOutObjectScript::PickupOriginalMaterials>__Action_System__Object__void__
            );
  GreyOutObjectScript_ExecuteOnMaterials
            (this,(Action_1_GreyOutObjectScript_PickupOriginalMaterials_ *)this_00,(MethodInfo *)0x0
            );
  (this->fields).isGreyedIn = 0;
  return;
}


/* Void GreyOutExec(GreyOutObjectScript+PickupOriginalMaterials) */

void Assembly-CSharp.dll::GreyOutObjectScript::GreyOutObjectScript_GreyOutExec
               (GreyOutObjectScript *this,
               GreyOutObjectScript_PickupOriginalMaterials *pickupOriginalMaterial,
               MethodInfo *method)

{
  if ((pickupOriginalMaterial != (GreyOutObjectScript_PickupOriginalMaterials *)0x0) &&
     (this_00 = (pickupOriginalMaterial->fields).meshRenderer, this_00 != (MeshRenderer *)0x0)) {
    pMVar1 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_materials
                       ((Renderer *)this_00,(MethodInfo *)0x0);
    uVar2 = 0;
    if (pMVar1 != (Material__Array *)0x0) {
      ppMVar3 = pMVar1->vector;
      while( true ) {
        if ((int)pMVar1->max_length <= (int)uVar2) {
          return;
        }
        if (pMVar1->max_length <= uVar2) break;
        if (*ppMVar3 == (Material *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_shader
                  (*ppMVar3,(this->fields).hiddenShader,(MethodInfo *)0x0);
        uVar2 = uVar2 + 1;
        ppMVar3 = ppMVar3 + 1;
      }
      uVar4 = func_?(0,0);
      func_?(uVar4);
    }
  }
code_?:
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Hide() */

void Assembly-CSharp.dll::GreyOutObjectScript::GreyOutObjectScript_Hide
               (GreyOutObjectScript *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__System__Action<GreyOutObjectScript::PickupOriginalMaterials>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,
             MethodInfo__GreyOutObjectScript__HideExec_GreyOutObjectScript__PickupOriginalMaterials_
             ,
             MethodInfo__System__Action<GreyOutObjectScript::PickupOriginalMaterials>__Action_System__Object__void__
            );
  GreyOutObjectScript_ExecuteOnMaterials
            (this,(Action_1_GreyOutObjectScript_PickupOriginalMaterials_ *)this_00,(MethodInfo *)0x0
            );
  return;
}


/* Void HideExec(GreyOutObjectScript+PickupOriginalMaterials) */

void Assembly-CSharp.dll::GreyOutObjectScript::GreyOutObjectScript_HideExec
               (GreyOutObjectScript *this,
               GreyOutObjectScript_PickupOriginalMaterials *pickupOriginalMaterial,
               MethodInfo *method)

{
  if ((pickupOriginalMaterial != (GreyOutObjectScript_PickupOriginalMaterials *)0x0) &&
     (this_00 = (pickupOriginalMaterial->fields).meshRenderer, this_00 != (MeshRenderer *)0x0)) {
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_enabled
                      ((Renderer *)this_00,(MethodInfo *)0x0);
    (pickupOriginalMaterial->fields).meshRendererEnabled = bVar1;
    if ((pickupOriginalMaterial->fields).meshRenderer != (MeshRenderer *)0x0) {
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)func_?(), pcVar2 == (code *)0x0)) {
        uVar3 = func_?(&UNK_?,0);
        func_?(uVar3);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
      (*pcRam_?)(0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void InitializeOriginalMaterials() */

void Assembly-CSharp.dll::GreyOutObjectScript::GreyOutObjectScript_InitializeOriginalMaterials
               (GreyOutObjectScript *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_UIVertex_ *)(this->fields).pickupOriginalMaterials;
  if (this_00 != (List_1_UnityEngine_UIVertex_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
    List_1_UnityEngine_UIVertex__Clear
              (this_00,
               MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__Clear__
              );
    this_01 = (this->fields).pickupObject;
    if (this_01 != (GameObject *)0x0) {
      method_00 = (MethodInfo *)&UNK_?;
      pUVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
               GameObject_GetComponentsInChildren_29
                         (this_01,
                          UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                         );
      pcVar2 = (char *)0x0;
      if (pUVar1 != (UseInteratorVisualization__Array *)0x0) {
        ppUVar3 = pUVar1->vector;
        while( true ) {
          if ((int)pUVar1->max_length <= (int)pcVar2) {
            return;
          }
          if ((char *)pUVar1->max_length <= pcVar2) break;
          this_02 = *ppUVar3;
          this_04 = (ScaleAnimationBase *)
                    func_?(TypeInfo__GreyOutObjectScript__PickupOriginalMaterials);
          *(undefined1 *)&(this_04->fields).originalScale.x = 1;
          ScaleAnimationBase::ScaleAnimationBase_Play(this_04,0.0,method_00);
          (this_04->fields)._._._._.m_CachedPtr = this_02;
          if (this_02 == (UseInteratorVisualization *)0x0) goto code_?;
          method_00 = (MethodInfo *)&UNK_?;
          pMVar4 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_sharedMaterials
                             ((Renderer *)this_02,(MethodInfo *)0x0);
          (this_04->fields).state = (int32_t)pMVar4;
          this_03 = (this->fields).pickupOriginalMaterials;
          if (this_03 == (List_1_GreyOutObjectScript_PickupOriginalMaterials_ *)0x0)
          goto code_?;
          pUVar1 = (UseInteratorVisualization__Array *)
                   MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__Add_GreyOutObjectScript__PickupOriginalMaterials_
          ;
          mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                    ((List_1_UIPushOption_ *)this_03,(UIPushOption__Enum)this_04,
                     MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__Add_GreyOutObjectScript__PickupOriginalMaterials_
                    );
          pcVar2 = pcVar2 + 1;
          ppUVar3 = ppUVar3 + 1;
        }
        uVar5 = func_?(0,0);
        func_?(uVar5);
      }
    }
  }
code_?:
  func_?(0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* GreyOutObjectScript() */

void Assembly-CSharp.dll::GreyOutObjectScript::GreyOutObjectScript__ctor
               (GreyOutObjectScript *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>
                           );
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__List__
            );
  (this->fields).pickupOriginalMaterials =
       (List_1_GreyOutObjectScript_PickupOriginalMaterials_ *)this_00;
  (this->fields).isGreyedIn = 1;
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

