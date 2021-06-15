
/* Void BeforeDraw() */

void Assembly-CSharp.dll::FirstTimeCubeModelBlinker::FirstTimeCubeModelBlinker_BeforeDraw
               (FirstTimeCubeModelBlinker *this,MethodInfo *method)

{
  this_00 = (this->fields).targetCubeModelBase;
  if (this_00 != (MVCubeModelBase *)0x0) {
    pMVar1 = MVCubeModelBase::MVCubeModelBase_get_MeshFilters(this_00,(MethodInfo *)0x0);
    (this->fields)._.meshFilters = pMVar1;
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Initialize(Material, Camera, MVCubeModelBase) */

void Assembly-CSharp.dll::FirstTimeCubeModelBlinker::FirstTimeCubeModelBlinker_Initialize
               (FirstTimeCubeModelBlinker *this,Material *material,Camera *targetCamera,
               MVCubeModelBase *targetCubeModelBase,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  (this->fields).targetCubeModelBase = targetCubeModelBase;
  (this->fields)._.targetCamera = targetCamera;
  iVar1 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_CamRotateTarget,(MethodInfo *)0x0);
  (this->fields)._.layerMask = iVar1;
  (this->fields)._.blinkMaterial = material;
  this_00 = (Dictionary_2_BlinkType_Blinker_ *)func_?();
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__Dictionary__)
  ;
  m = (this->fields)._.blinkMaterial;
  uVar2 = 0;
  func_?(&stack0xffffffec);
  this_01 = (Blinker *)func_?(TypeInfo__Blinker);
  Blinker::Blinker__ctor(this_01,2.0,m,(Color)ZEXT416(uVar2),(MethodInfo *)0x0);
  if (this_00 != (Dictionary_2_BlinkType_Blinker_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[BlinkType,System::Object]::
    Dictionary_2_BlinkType_System_Object__Add
              ((Dictionary_2_BlinkType_System_Object_ *)this_00,
               BlinkType__Enum_OnBoardingCubeModelSuccess,(Object *)this_01,
               MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__Add_BlinkType__Blinker_
              );
    (this->fields)._.blinkers = this_00;
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

