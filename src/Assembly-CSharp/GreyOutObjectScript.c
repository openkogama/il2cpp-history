
/* Void Awake() */

void Assembly-CSharp.dll::GreyOutObjectScript::GreyOutObjectScript_Awake
               (GreyOutObjectScript *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_Cubemodel_hiddenShader_not_found);
    func_?(&StringLiteral_Standard_hiddenShader_not_found);
    cRam_? = '\x01';
  }
  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
            ((Behaviour *)this,0,(MethodInfo *)0x0);
  exists = (this->fields).pickupObject;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                    ((Object_1 *)exists,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    GreyOutObjectScript_InitializeOriginalMaterials(this,(MethodInfo *)0x0);
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0);
  if (pMVar2 != (MaterialLoader *)0x0) {
    pSVar3 = MaterialLoader::MaterialLoader_GetCubeModelUnavailableShader(pMVar2,(MethodInfo *)0x0);
    (this->fields).cubeModelHiddenShader = pSVar3;
    func_?();
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0);
    if (pMVar2 != (MaterialLoader *)0x0) {
      (this->fields).standardHiddenShader = (pMVar2->fields).pickupUnavailableShader;
      func_?();
      pSVar3 = (this->fields).cubeModelHiddenShader;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        ((Object_1 *)pSVar3,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)StringLiteral_Cubemodel_hiddenShader_not_found,(MethodInfo *)0x0);
      }
      pSVar3 = (this->fields).standardHiddenShader;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        ((Object_1 *)pSVar3,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)StringLiteral_Standard_hiddenShader_not_found,(MethodInfo *)0x0);
      }
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void ExecuteOnMaterials(Action`1[GreyOutObjectScript+PickupOriginalMaterials]) */

void Assembly-CSharp.dll::GreyOutObjectScript::GreyOutObjectScript_ExecuteOnMaterials
               (GreyOutObjectScript *this,
               Action_1_GreyOutObjectScript_PickupOriginalMaterials_ *action,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__RemoveAt_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__get_Item_int_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).pickupOriginalMaterials;
  if (pLVar1 == (List_1_GreyOutObjectScript_PickupOriginalMaterials_ *)0x0) {
code_?:
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  index = (pLVar1->fields)._size;
joined_?:
  do {
    index = index + -1;
    if (index < 0) {
      return;
    }
    pLVar3 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
             (this->fields).pickupOriginalMaterials;
    if ((pLVar3 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
       (RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (pLVar3,index,
                           MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__get_Item_int_
                          ), RVar4 == (RegexCharClass_SingleRange)0x0)) goto code_?;
    x = *(Object_1 **)((int)RVar4 + 8);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      (x,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar5 == 0) {
      pLVar3 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields).pickupOriginalMaterials;
      if (((pLVar3 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
          (RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                   RegularExpressions::RegexCharClass+SingleRange]::
                   List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                             (pLVar3,index,
                              MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__get_Item_int_
                             ), RVar4 == (RegexCharClass_SingleRange)0x0)) ||
         (*(Component **)((int)RVar4 + 8) == (Component *)0x0)) goto code_?;
      x_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       (*(Component **)((int)RVar4 + 8),(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        ((Object_1 *)x_00,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar5 == 0) {
        pLVar3 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                 (this->fields).pickupOriginalMaterials;
        if ((pLVar3 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
           (RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              (pLVar3,index,
                               MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__get_Item_int_
                              ),
           action == (Action_1_GreyOutObjectScript_PickupOriginalMaterials_ *)0x0))
        goto code_?;
        (*(action->fields)._._.invoke_impl)
                  ((action->fields)._._.method_code,RVar4,(action->fields)._._.method);
        goto joined_?;
      }
    }
    pLVar1 = (this->fields).pickupOriginalMaterials;
    if (pLVar1 == (List_1_GreyOutObjectScript_PickupOriginalMaterials_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
    List_1_System_Object__RemoveAt
              ((List_1_System_Object_ *)pLVar1,index,
               MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__RemoveAt_int_
              );
  } while( true );
}


/* Void GreyIn() */

void Assembly-CSharp.dll::GreyOutObjectScript::GreyOutObjectScript_GreyIn
               (GreyOutObjectScript *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<GreyOutObjectScript::PickupOriginalMaterials>);
    func_?(&
                    MethodInfo__GreyOutObjectScript__GreyInExec_GreyOutObjectScript__PickupOriginalMaterials_
                   );
    cRam_? = '\x01';
  }
  this_00 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
             *)func_?(
                              TypeInfo__System__Action<GreyOutObjectScript::PickupOriginalMaterials>
                              );
  DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
  DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            (this_00,(Object *)0x0,
             MethodInfo__GreyOutObjectScript__GreyInExec_GreyOutObjectScript__PickupOriginalMaterials_
             ,(MethodInfo *)0x0);
  GreyOutObjectScript_ExecuteOnMaterials
            (this,(Action_1_GreyOutObjectScript_PickupOriginalMaterials_ *)this_00,(MethodInfo *)0x0
            );
  (this->fields).isGreyedIn = 1;
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
    func_?(&TypeInfo__System__Action<GreyOutObjectScript::PickupOriginalMaterials>);
    func_?(&
                    MethodInfo__GreyOutObjectScript__GreyOutExec_GreyOutObjectScript__PickupOriginalMaterials_
                   );
    cRam_? = '\x01';
  }
  this_00 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
             *)func_?(
                              TypeInfo__System__Action<GreyOutObjectScript::PickupOriginalMaterials>
                              );
  DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
  DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            (this_00,(Object *)this,
             MethodInfo__GreyOutObjectScript__GreyOutExec_GreyOutObjectScript__PickupOriginalMaterials_
             ,(MethodInfo *)0x0);
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
  if (cRam_? == '\0') {
    func_?(&StringLiteral_CubeModel);
    cRam_? = '\x01';
  }
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
        this_01 = *ppMVar3;
        if (this_01 == (Material *)0x0) goto code_?;
        this_02 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_shader
                            (this_01,(MethodInfo *)0x0);
        if (this_02 == (Shader *)0x0) goto code_?;
        this_03 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                            ((Object_1 *)this_02,(MethodInfo *)0x0);
        pSVar4 = StringLiteral_CubeModel;
        if (this_03 == (String *)0x0) goto code_?;
        bVar5 = mscorlib.dll::System::String::String_Contains
                          (this_03,StringLiteral_CubeModel,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_shader
                  (this_01,(Shader *)(&pSVar4[1].monitor)[bVar5 ^ 1],(MethodInfo *)0x0);
        uVar2 = uVar2 + 1;
        ppMVar3 = (Material **)0x4;
      }
      func_?();
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Hide() */

void Assembly-CSharp.dll::GreyOutObjectScript::GreyOutObjectScript_Hide
               (GreyOutObjectScript *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<GreyOutObjectScript::PickupOriginalMaterials>);
    func_?(&
                    MethodInfo__GreyOutObjectScript__HideExec_GreyOutObjectScript__PickupOriginalMaterials_
                   );
    cRam_? = '\x01';
  }
  this_00 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
             *)func_?(
                              TypeInfo__System__Action<GreyOutObjectScript::PickupOriginalMaterials>
                              );
  DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
  DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            (this_00,(Object *)this,
             MethodInfo__GreyOutObjectScript__HideExec_GreyOutObjectScript__PickupOriginalMaterials_
             ,(MethodInfo *)0x0);
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
      if (pcRam_? == (code *)0x0) {
        pcRam_? = (code *)func_?();
      }
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
    func_?(&
                    UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__Add_GreyOutObjectScript__PickupOriginalMaterials_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__Clear__
                   );
    func_?(&TypeInfo__GreyOutObjectScript__PickupOriginalMaterials);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).pickupOriginalMaterials;
  if (pLVar1 != (List_1_GreyOutObjectScript_PickupOriginalMaterials_ *)0x0) {
    length = (pLVar1->fields)._size;
    piVar2 = &(pLVar1->fields)._version;
    *piVar2 = *piVar2 + 1;
    (pLVar1->fields)._size = 0;
    if (0 < length) {
      mscorlib.dll::System::Array::Array_Clear
                ((Array *)(pLVar1->fields)._items,0,length,(MethodInfo *)0x0);
    }
    this_00 = (this->fields).pickupObject;
    if (this_00 != (GameObject *)0x0) {
      pOVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
               GameObject_GetComponentsInChildren
                         (this_00,
                          UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                         );
      pcVar4 = (char *)0x0;
      if (pOVar3 != (Object__Array *)0x0) {
        ppOVar5 = pOVar3->vector;
        while( true ) {
          if ((int)pOVar3->max_length <= (int)pcVar4) {
            return;
          }
          if ((char *)pOVar3->max_length <= pcVar4) break;
          this_01 = (Object__Class *)*ppOVar5;
          method_00 = TypeInfo__GreyOutObjectScript__PickupOriginalMaterials;
          value = (Object *)func_?();
          *(undefined1 *)&value[2].klass = 1;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
          pOVar6 = value + 1;
          value[1].klass = this_01;
          func_?(pOVar6,this_01);
          if (this_01 == (Object__Class *)0x0) goto code_?;
          pMVar7 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_sharedMaterials
                             ((Renderer *)this_01,(MethodInfo *)0x0);
          value[1].monitor = (MonitorData *)pMVar7;
          func_?(&value[1].monitor,pMVar7);
          pLVar1 = (this->fields).pickupOriginalMaterials;
          if (pLVar1 == (List_1_GreyOutObjectScript_PickupOriginalMaterials_ *)0x0)
          goto code_?;
          pOVar3 = (Object__Array *)
                   MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__Add_GreyOutObjectScript__PickupOriginalMaterials_
          ;
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Add
                    ((List_1_System_Object_ *)pLVar1,value,
                     MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__Add_GreyOutObjectScript__PickupOriginalMaterials_
                    );
          pcVar4 = pcVar4 + 1;
          ppOVar5 = (Object **)&pOVar6->monitor;
        }
        func_?();
      }
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void SetPickupObject(GameObject) */

void Assembly-CSharp.dll::GreyOutObjectScript::GreyOutObjectScript_SetPickupObject
               (GreyOutObjectScript *this,GameObject *pickupObject,MethodInfo *method)

{
  (this->fields).pickupObject = pickupObject;
  func_?(&(this->fields).pickupObject,pickupObject);
  GreyOutObjectScript_InitializeOriginalMaterials(this,(MethodInfo *)0x0);
  return;
}


/* GreyOutObjectScript() */

void Assembly-CSharp.dll::GreyOutObjectScript::GreyOutObjectScript__ctor
               (GreyOutObjectScript *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__List__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>
                   );
    cRam_? = '\x01';
  }
  this_00 = (List_1_GreyOutObjectScript_PickupOriginalMaterials_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>
                           );
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__List__
            );
  (this->fields).pickupOriginalMaterials = this_00;
  func_?(&(this->fields).pickupOriginalMaterials,this_00);
  (this->fields).isGreyedIn = 1;
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

