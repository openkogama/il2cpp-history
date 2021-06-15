
/* Void Start() */

void Assembly-CSharp.dll::DestroyOnParticleSystemFinish::DestroyOnParticleSystemFinish_Start
               (DestroyOnParticleSystemFinish *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pOStack_1 = (Object *)0x0;
  pOStack_2 = (Object *)0x0;
  TStack_3.klass = (ThemeAttribute_1_System_Single___Class *)0x0;
  TStack_3.monitor = (MonitorData *)0x0;
  TStack_3.fields._._Key_k__BackingField = (String *)0x0;
  TStack_3.fields._._Groups_k__BackingField = 0;
  TStack_3.fields._.themeSettings = (SettingsWrapper *)0x0;
  TStack_3.fields.value = 0.0;
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                  ((Component_1 *)this,(MethodInfo *)0x0);
  pDVar4 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
            *)(this->fields).system;
  if (pDVar4 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                 *)0x0) {
    pOStack_1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
                Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                          (pDVar4,(MethodInfo *)0x0);
    fVar5 = (float10)func_?(&pOStack_1,0);
    pDVar4 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
              *)(this->fields).system;
    TStack_3.fields.themeCallback = (Action_1_Single_ *)(float)fVar5;
    if (pDVar4 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                   *)0x0) {
      pOStack_2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine
                  ::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                  Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                            (pDVar4,(MethodInfo *)0x0);
      puVar6 = (undefined4 *)func_?(&puStack_7,&pOStack_2,0);
      TStack_3.klass = (ThemeAttribute_1_System_Single___Class *)*puVar6;
      TStack_3.monitor = (MonitorData *)puVar6[1];
      TStack_3.fields._._Key_k__BackingField = (String *)puVar6[2];
      TStack_3.fields._._Groups_k__BackingField = puVar6[3];
      TStack_3.fields._8_8_ = *(undefined8 *)(puVar6 + 4);
      fVar8 = ThemeAttributes::ThemeAttribute`1[System::Single]::
              ThemeAttribute_1_System_Single__get_Value(&TStack_3,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                ((Object_1 *)obj,fVar8 + (float)TStack_3.fields.themeCallback,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

