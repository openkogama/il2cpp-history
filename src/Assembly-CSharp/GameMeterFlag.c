
/* Void SetGameMeterVisibility() */

void Assembly-CSharp.dll::GameMeterFlag::GameMeterFlag_SetGameMeterVisibility
               (GameMeterFlag *this,MethodInfo *method)

{
  WVar1 = WinningConditionType__Enum_Collectible;
  WinningConditionControl::WinningConditionControl_TryGetPrioritizedWinCondition
            ((WinningConditionType__Enum *)&stack0xfffffff8,(MethodInfo *)0x0);
  if (WVar1 == WinningConditionType__Enum_Flag) {
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (pGVar2 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,1,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (pGVar2 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,0,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* GameMeterType get_GameMeterType() */

GameMeterType__Enum
Assembly-CSharp.dll::GameMeterFlag::GameMeterFlag_get_GameMeterType
          (GameMeterFlag *this,MethodInfo *method)

{
  return GameMeterType__Enum_Flag;
}

