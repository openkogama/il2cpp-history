
/* Void Awake() */

void Assembly-CSharp.dll::UGUI::Touch::Scripts::LobbyState::TopLeftButtons::TopLeftButtons_Awake
               (TopLeftButtons *this,MethodInfo *method)

{
  this_00 = (this->fields).fullscreenButton;
  if (this_00 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,0,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

