
/* Void Initialize(Int32) */

void Assembly-CSharp.dll::AvatarPooledXPParticles::AvatarPooledXPParticles_Initialize
               (AvatarPooledXPParticles *this,int32_t xpDelta,MethodInfo *method)

{
  TStack_1.fields.themeCallback = (Action_1_Single_ *)0x0;
  TStack_1.klass = (ThemeAttribute_1_System_Single___Class *)0x0;
  TStack_1.monitor = (MonitorData *)0x0;
  pMVar2 = TStack_1.monitor;
  TStack_1.monitor = (MonitorData *)0x0;
  TStack_1.fields._._Key_k__BackingField = (String *)0x0;
  TStack_1.fields._._Groups_k__BackingField = 0;
  this_00 = (this->fields).xpParticleSystem;
  TStack_1.fields._.themeSettings = (SettingsWrapper *)0x0;
  TStack_1.fields.value = 0.0;
  (this->fields).hasStarted = 0;
  if (this_00 != (ParticleSystem *)0x0) {
    UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Stop_2
              (this_00,(MethodInfo *)0x0);
    pDVar3 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
              *)(this->fields).xpParticleSystem;
    pMVar2 = TStack_1.monitor;
    if (pDVar3 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                   *)0x0) {
      TStack_1.fields.themeCallback =
           (Action_1_Single_ *)
           mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
           Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
           Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                     (pDVar3,(MethodInfo *)0x0);
      puVar4 = (undefined4 *)func_?(&stack0xffffffc8,&TStack_1.fields.themeCallback);
      TStack_1.klass = (ThemeAttribute_1_System_Single___Class *)*puVar4;
      TStack_1.monitor = (MonitorData *)puVar4[1];
      TStack_1.fields._._Key_k__BackingField = (String *)puVar4[2];
      TStack_1.fields._._Groups_k__BackingField = puVar4[3];
      TStack_1.fields._8_8_ = *(undefined8 *)(puVar4 + 4);
      pDVar3 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                *)(this->fields).xpParticleSystem;
      pMVar2 = TStack_1.monitor;
      if (pDVar3 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                     *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
        Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
        Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                  (pDVar3,(MethodInfo *)0x0);
        ThemeAttributes::ThemeAttribute`1[System::Single]::ThemeAttribute_1_System_Single__get_Value
                  (&TStack_1,(MethodInfo *)0x0);
        HealthBar::HealthBar_set_MaxHealth((HealthBar *)&TStack_1,(float)xpDelta,(MethodInfo *)0x0)
        ;
        ThemeAttributes::ThemeAttribute`1[System::Single]::ThemeAttribute_1_System_Single__get_Value
                  (&TStack_1,(MethodInfo *)0x0);
        TStack_1.klass =
             (ThemeAttribute_1_System_Single___Class *)TStack_1.fields._._Groups_k__BackingField;
        TStack_1.fields._._Groups_k__BackingField = 0;
        TStack_1.monitor = (MonitorData *)TStack_1.fields._.themeSettings;
        TStack_1.fields._._Key_k__BackingField = (String *)TStack_1.fields.value;
        func_?();
        fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        (this->fields).initStartTime = fVar5;
        return;
      }
    }
  }
  TStack_1.monitor = pMVar2;
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::AvatarPooledXPParticles::AvatarPooledXPParticles_Update
               (AvatarPooledXPParticles *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (((this->fields).hasStarted == 0) &&
     (fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0),
     (this->fields).initStartTime + _UNK_? < fVar1)) {
    pPVar2 = (this->fields).xpParticleSystem;
    if (pPVar2 == (ParticleSystem *)0x0) goto code_?;
    UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play_1
              (pPVar2,(MethodInfo *)0x0);
    (this->fields).hasStarted = 1;
  }
  pPVar2 = (this->fields).xpParticleSystem;
  if (pPVar2 != (ParticleSystem *)0x0) {
    bVar3 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
            ParticleSystem_get_isPlaying(pPVar2,(MethodInfo *)0x0);
    if ((bVar3 != 0) || ((this->fields).hasStarted == 0)) {
      return;
    }
    if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
      func_?();
    }
    this_00 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
    if ((this_00 != (PrefabPool *)0x0) &&
       (this_01 = (EnumPoolManager *)
                  mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                  Serialization::JsonProperty]::
                  Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                            ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                             (MethodInfo *)0x0), this_01 != (EnumPoolManager *)0x0)) {
      EnumPoolManager::EnumPoolManager_Return
                (this_01,(MonoBehaviour *)this,PoolEnums__Enum_XP,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

