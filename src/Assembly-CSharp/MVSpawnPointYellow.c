
/* MVSpawnPointYellow(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVSpawnPointYellow::MVSpawnPointYellow__ctor
               (MVSpawnPointYellow *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PrefabPool);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 != (PrefabPool *)0x0) {
    MVLogicObject::MVLogicObject__ctor
              ((MVLogicObject *)this,data,(pPVar1->fields).mvSpawnPointYellowPrefab,worldObjects,
               (MethodInfo *)0x0);
    *(undefined4 *)&(this->fields)._._._.interactionFlags = 0xa101;
    *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4) = 0;
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

