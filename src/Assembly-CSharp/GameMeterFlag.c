
/* Void SetGameMeterVisibility() */

void Assembly-CSharp.dll::GameMeterFlag::GameMeterFlag_SetGameMeterVisibility
               (GameMeterFlag *this,MethodInfo *method)

{
  bVar1 = WinningConditionControl::WinningConditionControl_IsWinConditionPresent
                    (WinningConditionType__Enum_Flag,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (pGVar2 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,0,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (pGVar2 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,1,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

