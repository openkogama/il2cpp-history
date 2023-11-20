
/* UIStack+StackElement(GameObject, UIPushOption, UnityAction, UIGroupFlags) */

void Assembly-CSharp.dll::UIStack+StackElement::UIStack_StackElement__ctor
               (UIStack_StackElement *this,GameObject *gameObject,UIPushOption__Enum pushOption,
               UnityAction *onPop,UIGroupFlags__Enum group,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  if (gameObject != (GameObject *)0x0) {
    pSVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                       ((Object_1 *)gameObject,(MethodInfo *)0x0);
    (this->fields).name = pSVar1;
    func_?(&(this->fields).name,pSVar1);
    (this->fields).gameObject = gameObject;
    func_?(&this->fields,gameObject);
    (this->fields).blockingObject =
         (pushOption & UIPushOption__Enum_Blocking) != UIPushOption__Enum_None ||
         (pushOption & UIPushOption__Enum_InvisibleBlocker) != UIPushOption__Enum_None;
    (this->fields).hideAll = (pushOption & UIPushOption__Enum_HideAll) != UIPushOption__Enum_None;
    (this->fields).invisibleBlocker =
         (pushOption & UIPushOption__Enum_InvisibleBlocker) != UIPushOption__Enum_None;
    (this->fields).hideAllExceptStackbottom =
         (pushOption & UIPushOption__Enum_HideAllExceptStackBottom) != UIPushOption__Enum_None;
    (this->fields).suppressInput =
         (pushOption & UIPushOption__Enum_SuppressInput) != UIPushOption__Enum_None;
    (this->fields).onPop = onPop;
    func_?(&(this->fields).onPop);
    (this->fields).group = group;
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

