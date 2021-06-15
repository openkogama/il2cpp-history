
/* Void UpdateHigscore(HighScoreDatas) */

void Assembly-CSharp.dll::GamePassesHighScoreUpdateManager::
     GamePassesHighScoreUpdateManager_UpdateHigscore
               (HighScoreDatas *newHighScore,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesHighScoreUpdateManager->vtable).Equals.methodPtr & 0x2000000) !=
       0) && ((TypeInfo__GamePassesHighScoreUpdateManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesHighScoreUpdateManager);
  }
  if (TypeInfo__GamePassesHighScoreUpdateManager->static_fields->OnHighScoreUpdate !=
      (Action_1_MV_WorldObject_GamePassSystem_HighScoreDatas_ *)0x0) {
    if ((((uint)(TypeInfo__GamePassesHighScoreUpdateManager->vtable).Equals.methodPtr & 0x2000000)
         != 0) && ((TypeInfo__GamePassesHighScoreUpdateManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePassesHighScoreUpdateManager);
    }
    this = (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)
           TypeInfo__GamePassesHighScoreUpdateManager->static_fields->OnHighScoreUpdate;
    if (this == (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)0x0
       ) {
      func_?(0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    mscorlib.dll::System::Action`1[System::Collections::Generic::Dictionary`2[System::String,System
    ::Object]]::Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object__Invoke
              (this,(Dictionary_2_System_String_System_Object_ *)newHighScore,
               MethodInfo__System__Action<MV::WorldObject::GamePassSystem::HighScoreDatas>__Invoke_MV__WorldObject__GamePassSystem__HighScoreDatas_
              );
  }
  return;
}

