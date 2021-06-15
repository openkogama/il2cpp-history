
/* UIStack+StackElement(GameObject, UIPushOption, UnityAction, UIGroupFlags) */

void Assembly-CSharp.dll::UIStack+StackElement::UIStack_StackElement__ctor
               (UIStack_StackElement *this,GameObject *gameObject,UIPushOption__Enum pushOption,
               UnityAction *onPop,UIGroupFlags__Enum group,MethodInfo *method)

{
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  if (gameObject != (GameObject *)0x0) {
    pSVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                       ((Object_1 *)gameObject,(MethodInfo *)0x0);
    (this->fields).name = pSVar1;
    (this->fields).gameObject = gameObject;
    bVar2 = (byte)(pushOption >> 2);
    if ((pushOption & UIPushOption__Enum_Blocking) == UIPushOption__Enum_None) {
      bVar3 = bVar2 & 1;
    }
    else {
      bVar3 = 1;
    }
    (this->fields).blockingObject = bVar3;
    (this->fields).invisibleBlocker = bVar2 & 1;
    (this->fields).hideAll = (byte)(pushOption >> 1) & 1;
    (this->fields).hideAllExceptStackbottom = (byte)(pushOption >> 3) & 1;
    (this->fields).onPop = onPop;
    (this->fields).suppressInput = (byte)(pushOption >> 4) & 1;
    (this->fields).group = group;
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

