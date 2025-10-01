
/* Boolean SetGameMeterVisibility() */

bool Assembly-CSharp.dll::GameMeterFlag::GameMeterFlag_SetGameMeterVisibility
               (GameMeterFlag *this,MethodInfo *method)

{
  bVar1 = WinningConditionControl::WinningConditionControl_IsWinConditionPresent
                    (WinningConditionType__Enum_Flag,(MethodInfo *)0x0);
  bVar2 = bVar1;
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_00 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,bVar2,(MethodInfo *)0x0);
    return bVar1;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}

