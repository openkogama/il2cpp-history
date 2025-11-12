
/* Int32 ClearLayerBit(Int32, Int32) */

int32_t Assembly-CSharp.dll::RTG::LayerEx::LayerEx_ClearLayerBit
                  (int32_t layerBits,int32_t layerNumber,MethodInfo *method)

{
  return layerBits & ~(1 << (layerNumber & 0x1fU));
}


/* List`1[System.String] GetAllLayerNames() */

List_1_System_String_ *
Assembly-CSharp.dll::RTG::LayerEx::LayerEx_GetAllLayerNames(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<System::String>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<System::String>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_System_String_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<System::String>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
             MethodInfo__System__Collections__Generic__List<System::String>__List__);
  layer = 0;
  do {
    pSVar2 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_LayerToName
                       (layer,(MethodInfo *)0x0);
    if ((pSVar2 != (String *)0x0) && ((pSVar2->fields)._stringLength != 0)) {
      if (pLVar1 == (List_1_System_String_ *)0x0) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        pLVar1 = (List_1_System_String_ *)(*pcVar3)();
        return pLVar1;
      }
      FUN_?(pLVar1,pSVar2,
                    MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                   );
    }
    layer = layer + 1;
  } while (layer < 0x20);
  return pLVar1;
}


/* Boolean IsLayerBitSet(Int32, Int32) */

bool Assembly-CSharp.dll::RTG::LayerEx::LayerEx_IsLayerBitSet
               (int32_t layerBits,int32_t layerNumber,MethodInfo *method)

{
  return (layerBits & 1 << ((byte)layerNumber & 0x1f)) != 0;
}


/* Boolean IsLayerValid(Int32) */

bool Assembly-CSharp.dll::RTG::LayerEx::LayerEx_IsLayerValid(int32_t layerNumber,MethodInfo *method)

{
  if (layerNumber < 0) {
    return 0;
  }
  return layerNumber < 0x20;
}


/* Int32 SetLayerBit(Int32, Int32) */

int32_t Assembly-CSharp.dll::RTG::LayerEx::LayerEx_SetLayerBit
                  (int32_t layerBits,int32_t layerNumber,MethodInfo *method)

{
  return layerBits | 1 << (layerNumber & 0x1fU);
}

