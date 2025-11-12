
/* Boolean <CalculateSnapResult>b__2(GameObject) */

bool Assembly-CSharp.dll::RTG::Object2ObjectSnap+<>c__DisplayClass14_0::
     Object2ObjectSnap_c_DisplayClass14_0__CalculateSnapResult_b__2
               (Object2ObjectSnap_c_DisplayClass14_0 *this,GameObject *item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Contains_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (item != (GameObject *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (item,(MethodInfo *)0x0);
    this_00 = (this->fields).root;
    if (this_00 != (GameObject *)0x0) {
      parent = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (this_00,(MethodInfo *)0x0);
      if (this_01 != (Transform *)0x0) {
        bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_IsChildOf
                          (this_01,parent,(MethodInfo *)0x0);
        if (bVar1 == 0) {
          if ((this->fields).snapConfig.IgnoreDestObjects == (List_1_UnityEngine_GameObject_ *)0x0)
          goto code_?;
          cVar2 = FUN_?();
          if (cVar2 == '\0') {
            uVar3 = (this->fields).snapConfig.DestinationLayers;
            iVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer
                              (item,(MethodInfo *)0x0);
            return (uVar3 & 1 << ((byte)iVar4 & 0x1f)) == 0;
          }
        }
        return 1;
      }
    }
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  bVar1 = (*pcVar5)();
  return bVar1;
}

