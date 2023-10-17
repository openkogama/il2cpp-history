
/* Void Awake() */

void Assembly-CSharp.dll::GreyOutObjectScript::GreyOutObjectScript_Awake
               (GreyOutObjectScript *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
            ((Behaviour *)this,0,(MethodInfo *)0x0);
  pGVar1 = (this->fields).pickupObject;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                    ((Object_1 *)pGVar1,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    return;
  }
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
  pLVar3 = (this->fields).pickupOriginalMaterials;
  if (pLVar3 != (List_1_GreyOutObjectScript_PickupOriginalMaterials_ *)0x0) {
    length = (pLVar3->fields)._size;
    piVar4 = &(pLVar3->fields)._version;
    *piVar4 = *piVar4 + 1;
    (pLVar3->fields)._size = 0;
    if (0 < length) {
      mscorlib.dll::System::Array::Array_Clear
                ((Array *)(pLVar3->fields)._items,0,length,(MethodInfo *)0x0);
    }
    pGVar1 = (this->fields).pickupObject;
    if (pGVar1 != (GameObject *)0x0) {
      pLVar5 = (List_1_System_Object_ *)
               Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2
                         ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)pGVar1,
                          UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                         );
      uVar6 = 0;
      if (pLVar5 != (List_1_System_Object_ *)0x0) {
        ppMVar7 = (MonitorData **)&(pLVar5->fields)._version;
        while( true ) {
          if ((pLVar5->fields)._size <= (int)uVar6) {
            return;
          }
          if ((uint)(pLVar5->fields)._size <= uVar6) break;
          this_00 = (Object__Class *)*ppMVar7;
          value = (Object *)func_?();
          if (value == (Object *)0x0) goto code_?;
          *(undefined1 *)&value[2].klass = 1;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    (value,ExceptionArgument__Enum_obj,unaff_retaddr);
          value[1].klass = this_00;
          func_?(value + 1,this_00);
          if (this_00 == (Object__Class *)0x0) goto code_?;
          pMVar8 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_sharedMaterials
                             ((Renderer *)this_00,(MethodInfo *)0x0);
          value[1].monitor = (MonitorData *)pMVar8;
          func_?(&value[1].monitor,pMVar8);
          if (_UNK_? == (List_1_System_Object_ *)0x0) goto code_?;
          pLVar5 = _UNK_?;
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Add
                    (_UNK_?,value,
                     MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__Add_GreyOutObjectScript__PickupOriginalMaterials_
                    );
          uVar6 = uVar6 + 1;
          ppMVar7 = &value->monitor;
        }
        func_?();
      }
    }
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
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
  this_00 = (Action_1_Object_ *)
            func_?(TypeInfo__System__Action<GreyOutObjectScript::PickupOriginalMaterials>);
  if (this_00 != (Action_1_Object_ *)0x0) {
    mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
              (this_00,(Object *)0x0,
               MethodInfo__GreyOutObjectScript__GreyInExec_GreyOutObjectScript__PickupOriginalMaterials_
               ,(MethodInfo *)0x0);
    GreyOutObjectScript_ExecuteOnMaterials
              (this,(Action_1_GreyOutObjectScript_PickupOriginalMaterials_ *)this_00,
               (MethodInfo *)0x0);
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
    func_?(&TypeInfo__System__Action<GreyOutObjectScript::PickupOriginalMaterials>);
    func_?(&
                    MethodInfo__GreyOutObjectScript__GreyOutExec_GreyOutObjectScript__PickupOriginalMaterials_
                   );
    cRam_? = '\x01';
  }
  this_00 = (Action_1_Object_ *)
            func_?(TypeInfo__System__Action<GreyOutObjectScript::PickupOriginalMaterials>);
  if (this_00 != (Action_1_Object_ *)0x0) {
    mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
              (this_00,(Object *)this,
               MethodInfo__GreyOutObjectScript__GreyOutExec_GreyOutObjectScript__PickupOriginalMaterials_
               ,(MethodInfo *)0x0);
    GreyOutObjectScript_ExecuteOnMaterials
              (this,(Action_1_GreyOutObjectScript_PickupOriginalMaterials_ *)this_00,
               (MethodInfo *)0x0);
    (this->fields).isGreyedIn = 0;
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
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
      func_?();
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
  this_00 = (Action_1_Object_ *)
            func_?(TypeInfo__System__Action<GreyOutObjectScript::PickupOriginalMaterials>);
  if (this_00 != (Action_1_Object_ *)0x0) {
    mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
              (this_00,(Object *)this,
               MethodInfo__GreyOutObjectScript__HideExec_GreyOutObjectScript__PickupOriginalMaterials_
               ,(MethodInfo *)0x0);
    GreyOutObjectScript_ExecuteOnMaterials
              (this,(Action_1_GreyOutObjectScript_PickupOriginalMaterials_ *)this_00,
               (MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
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
    source = (this->fields).pickupObject;
    if (source != (GameObject *)0x0) {
      pMVar3 = (MethodInfo *)
               Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2
                         ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)source,
                          UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                         );
      pcVar4 = (char *)0x0;
      if (pMVar3 != (MethodInfo *)0x0) {
        method_00 = (MethodInfo *)&pMVar3->klass;
        while( true ) {
          if ((int)pMVar3->name <= (int)pcVar4) {
            return;
          }
          if (pMVar3->name <= pcVar4) break;
          this_00 = (Il2CppClass *)method_00->methodPointer;
          value = (Object *)func_?();
          if (value == (Object *)0x0) goto code_?;
          *(undefined1 *)&value[2].klass = 1;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    (value,ExceptionArgument__Enum_obj,method_00);
          value[1].klass = (Object__Class *)this_00;
          func_?(value + 1,this_00);
          if (this_00 == (Il2CppClass *)0x0) goto code_?;
          pMVar5 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_sharedMaterials
                             ((Renderer *)this_00,(MethodInfo *)0x0);
          value[1].monitor = (MonitorData *)pMVar5;
          func_?(&value[1].monitor,pMVar5);
          pLVar1 = (this->fields).pickupOriginalMaterials;
          if (pLVar1 == (List_1_GreyOutObjectScript_PickupOriginalMaterials_ *)0x0)
          goto code_?;
          pMVar3 = 
          MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__Add_GreyOutObjectScript__PickupOriginalMaterials_
          ;
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Add
                    ((List_1_System_Object_ *)pLVar1,value,
                     MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__Add_GreyOutObjectScript__PickupOriginalMaterials_
                    );
          pcVar4 = pcVar4 + 1;
          method_00 = (MethodInfo *)&method_00->virtualMethodPointer;
        }
        func_?();
      }
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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
  if (this_00 != (List_1_GreyOutObjectScript_PickupOriginalMaterials_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__List<GreyOutObjectScript::PickupOriginalMaterials>__List__
              );
    (this->fields).pickupOriginalMaterials = this_00;
    func_?(&(this->fields).pickupOriginalMaterials,this_00);
    (this->fields).isGreyedIn = 1;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform__ctor
              ((Transform *)this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

