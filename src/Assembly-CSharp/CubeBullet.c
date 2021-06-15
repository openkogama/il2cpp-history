
/* Void SetCubeMaterial(Byte) */

void Assembly-CSharp.dll::CubeBullet::CubeBullet_SetCubeMaterial
               (CubeBullet *this,uint8_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).meshFilter;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_02 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_02 != (MVNetworkGame *)0x0) {
    this_03 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                        ((DayNightCycle *)this_02,(MethodInfo *)0x0);
    if (this_03 != (CelestialParam *)0x0) {
      this_04 = MVMaterialRepository::MVMaterialRepository_GetMaterial
                          ((MVMaterialRepository *)this_03,id,(MethodInfo *)0x0);
      if (this_04 != (MVMaterial *)0x0) {
        value = (Mesh *)System.dll::System::Collections::Generic::
                        SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                        ::Single,System::Object]::
                        SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                                  ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                                    *)this_04,(MethodInfo *)0x0);
        if (this_00 != (MeshFilter *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_set_sharedMesh
                    (this_00,value,(MethodInfo *)0x0);
          this_01 = (this->fields).meshRenderer;
          this_05 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0)
          ;
          if (this_05 != (MaterialLoader *)0x0) {
            value_00 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                       NamedThemeAttribute_1_UnityEngine_Color__get_Name
                                 ((NamedThemeAttribute_1_UnityEngine_Color_ *)this_05,
                                  (MethodInfo *)0x0);
            if (this_01 != (MeshRenderer *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                        ((Renderer *)this_01,(Material *)value_00,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::CubeBullet::CubeBullet_Update(CubeBullet *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                      ((Component_1 *)this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                     ((Vector3 *)&stack0xffffffe4,(MethodInfo *)0x0);
  axis = *pVVar1;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_5
              (this_00,axis,fVar2 * _UNK_?,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

