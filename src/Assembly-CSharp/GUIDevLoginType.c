
/* Void Start() */

void Assembly-CSharp.dll::GUIDevLoginType::GUIDevLoginType_Start
               (GUIDevLoginType *this,MethodInfo *method)

{
  if ((this->fields).usePromotionalUI == 0) {
    pGVar1 = (this->fields).devUI;
  }
  else {
    pGVar1 = (this->fields).promotionUI;
  }
  if (pGVar1 != (GameObject *)0x0) {
    pGVar1 = (GameObject *)
             mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AsRef_4
                       ((Void *)pGVar1,(MethodInfo *)0x0);
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,1,(MethodInfo *)0x0);
      return;
    }
  }
  uVar2 = func_?(&stack0xfffffff8);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

