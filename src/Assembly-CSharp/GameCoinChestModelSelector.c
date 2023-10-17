
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
  this_00 = (this->fields).openMesh;
  if (this_00 != (Renderer *)0x0) {
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_enabled
                      (this_00,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      return 1;
    }
    if ((this->fields).closedMesh != (Renderer *)0x0) {
      if (pcRam_? == (code *)0x0) {
        pcRam_? = (code *)func_?();
      }
      bVar1 = (*pcRam_?)();
      return bVar1;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
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

