
/* TeamEventArgs(MVTeam) */

void MVWorldObject.dll::MV::WorldObject::TeamEventArgs::TeamEventArgs__ctor
               (TeamEventArgs *this,MVTeam__Enum team,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventArgs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__EventArgs->_1).field_0x1c == 0) {
    FUN_?();
  }
  (this->fields).team = team;
  return;
}

