
/* MVSkyboxPreset(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVSkyboxPreset::MVSkyboxPreset__ctor
               (MVSkyboxPreset *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  MVSkybox::MVSkybox__ctor((MVSkybox *)this,data,worldObjects,(MethodInfo *)0x0);
  bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
          Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
          Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_IDictionary_get_IsReadOnly
                    ((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                      *)0x0,unaff_ESI);
  if (bVar1 != 0) {
    uVar2 = *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4);
    piVar3 = &(this->fields)._._._.interactionFlags;
    *(uint *)piVar3 = (uint)*piVar3 & 0xffff7fff;
    *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4) = uVar2;
  }
  return;
}

