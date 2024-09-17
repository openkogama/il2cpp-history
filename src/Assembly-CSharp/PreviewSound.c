
/* Void OnClick() */

void Assembly-CSharp.dll::PreviewSound::PreviewSound_OnClick(PreviewSound *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__UnityEngine__Events__UnityEvent<System::String,_int>__Invoke_System__String__int_
                   );
    cRam_? = '\x01';
  }
  this_00 = (UnityEvent_2_System_Object_System_Int32_ *)(this->fields).onClick;
  if (this_00 != (UnityEvent_2_System_Object_System_Int32_ *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent`2[System::Object,System::Int32]::
    UnityEvent_2_System_Object_System_Int32__Invoke
              (this_00,(Object *)(this->fields).soundCategory,(this->fields).index,
               MethodInfo__UnityEngine__Events__UnityEvent<System::String,_int>__Invoke_System__String__int_
              );
  }
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::PreviewSound::PreviewSound_Start(PreviewSound *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((this->fields).playSelected != 0) {
    (this->fields).index = -1;
    return;
  }
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if ((((pTVar1 != (Transform *)0x0) &&
       (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                           (pTVar1,(MethodInfo *)0x0), pTVar1 != (Transform *)0x0)) &&
      (pSVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                          ((Object_1 *)pTVar1,(MethodInfo *)0x0), pSVar2 != (String *)0x0)) &&
     (pSVar2 = mscorlib.dll::System::String::String_Substring_1
                         (pSVar2,5,(pSVar2->fields)._stringLength + -5,(MethodInfo *)0x0),
     pSVar2 != (String *)0x0)) {
    iVar3 = mscorlib.dll::System::String::String_IndexOf(pSVar2,0x3a,(MethodInfo *)0x0);
    pSVar2 = mscorlib.dll::System::String::String_Substring_1(pSVar2,0,iVar3,(MethodInfo *)0x0);
    iVar3 = mscorlib.dll::System::Int32::Int32_Parse(pSVar2,(MethodInfo *)0x0);
    (this->fields).index = iVar3;
    if (iVar3 != 0) {
      return;
    }
    obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    ((Component *)this,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)obj,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

