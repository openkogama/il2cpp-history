
/* Void Close() */

void Assembly-CSharp.dll::GameCoinChestModelSelector::GameCoinChestModelSelector_Close
               (GameCoinChestModelSelector *this,MethodInfo *method)

{
  pRVar1 = (this->fields).openMesh;
  if (pRVar1 != (Renderer *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
              (pRVar1,0,(MethodInfo *)0x0);
    pRVar1 = (this->fields).closedMesh;
    if (pRVar1 != (Renderer *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                (pRVar1,1,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Boolean IsVisible() */

bool Assembly-CSharp.dll::GameCoinChestModelSelector::GameCoinChestModelSelector_IsVisible
               (GameCoinChestModelSelector *this,MethodInfo *method)

{
  pRVar1 = (this->fields).openMesh;
  if (pRVar1 != (Renderer *)0x0) {
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_enabled
                      (pRVar1,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      return 1;
    }
    pRVar1 = (this->fields).closedMesh;
    if (pRVar1 != (Renderer *)0x0) {
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_enabled
                        (pRVar1,(MethodInfo *)0x0);
      return bVar2 == 1;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Void Open() */

void Assembly-CSharp.dll::GameCoinChestModelSelector::GameCoinChestModelSelector_Open
               (GameCoinChestModelSelector *this,MethodInfo *method)

{
  pRVar1 = (this->fields).openMesh;
  if (pRVar1 != (Renderer *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
              (pRVar1,1,(MethodInfo *)0x0);
    pRVar1 = (this->fields).closedMesh;
    if (pRVar1 != (Renderer *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                (pRVar1,0,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

