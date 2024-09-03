
/* Boolean <CalculateSnapResult>b__2(GameObject) */

bool Assembly-CSharp.dll::RTG::Object2ObjectSnap+<>c__DisplayClass14_0::
     Object2ObjectSnap_c_DisplayClass14_0__CalculateSnapResult_b__2
               (Object2ObjectSnap_c_DisplayClass14_0 *this,GameObject *item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Contains_UnityEngine__GameObject_
                   );
    cRam_? = '\x01';
  }
  if (item != (GameObject *)0x0) {
    this_02 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (item,(MethodInfo *)0x0);
    this_00 = (this->fields).root;
    if (this_00 != (GameObject *)0x0) {
      parent = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (this_00,(MethodInfo *)0x0);
      if (this_02 != (Transform *)0x0) {
        bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_IsChildOf
                          (this_02,parent,(MethodInfo *)0x0);
        if (bVar1 == 0) {
          this_01 = (this->fields).snapConfig.IgnoreDestObjects;
          if (this_01 == (List_1_UnityEngine_GameObject_ *)0x0) goto code_?;
          bVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                  List_1_System_Object__Contains
                            ((List_1_System_Object_ *)this_01,(Object *)item,
                             MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Contains_UnityEngine__GameObject_
                            );
          if (bVar1 == 0) {
            layerBits = (this->fields).snapConfig.DestinationLayers;
            layerNumber = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer
                                    (item,(MethodInfo *)0x0);
            bVar1 = LayerEx::LayerEx_IsLayerBitSet(layerBits,layerNumber,(MethodInfo *)0x0);
            return bVar1 ^ 1;
          }
        }
        return 1;
      }
    }
  }
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}

