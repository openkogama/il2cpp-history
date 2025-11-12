
/* MVSkyboxPreset(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVSkyboxPreset::MVSkyboxPreset__ctor
               (MVSkyboxPreset *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Application);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVSkybox::MVSkybox__ctor((MVSkybox *)this,data,worldObjects,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Application->_1).field_0x1c == 0) {
    FUN_?();
  }
  return;
}

