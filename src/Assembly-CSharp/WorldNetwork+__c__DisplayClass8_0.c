
/* Void <CreateGameWorldFromQueryData>b__0(Int32) */

void Assembly-CSharp.dll::WorldNetwork+<>c__DisplayClass8_0::
     WorldNetwork_c_DisplayClass8_0__CreateGameWorldFromQueryData_b__0
               (WorldNetwork_c_DisplayClass8_0 *this,int32_t rootId,MethodInfo *method)

{
  this_00 = (this->fields).__4__this;
  if (this_00 != (WorldNetwork *)0x0) {
    WorldNetwork::WorldNetwork_OnGameDataDeserialized
              (this_00,(this->fields).queryData,(this->fields).instigatorActorNumber,rootId,
               (MethodInfo *)0x0);
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

