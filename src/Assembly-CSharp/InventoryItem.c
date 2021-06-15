
/* Void ApplyLocalDescriptionOverride(MVWorldObjectDocumentationType) */

void Assembly-CSharp.dll::InventoryItem::InventoryItem_ApplyLocalDescriptionOverride
               (InventoryItem *this,MVWorldObjectDocumentationType__Enum t,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__InventoryItem->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__InventoryItem->_1).cctor_started == 0)) {
    func_?(TypeInfo__InventoryItem);
  }
  pDVar1 = TypeInfo__InventoryItem->static_fields->localItemDescriptionOverride;
  if (pDVar1 != (Dictionary_2_MVWorldObjectDocumentationType_InventoryItem_ItemDescription_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::
            Dictionary`2[MVWorldObjectDocumentationType,System::Object]::
            Dictionary_2_MVWorldObjectDocumentationType_System_Object__ContainsKey
                      ((Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)pDVar1,t,
                       MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__ContainsKey_MVWorldObjectDocumentationType_
                      );
    if (bVar2 == 0) {
      return;
    }
    if ((((uint)(TypeInfo__InventoryItem->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__InventoryItem->_1).cctor_started == 0)) {
      func_?();
    }
    pDVar1 = TypeInfo__InventoryItem->static_fields->localItemDescriptionOverride;
    if ((pDVar1 != (Dictionary_2_MVWorldObjectDocumentationType_InventoryItem_ItemDescription_ *)0x0
        ) && (pOVar3 = mscorlib.dll::System::Collections::Generic::
                       Dictionary`2[MVWorldObjectDocumentationType,System::Object]::
                       Dictionary_2_MVWorldObjectDocumentationType_System_Object__get_Item
                                 ((Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)
                                  pDVar1,t,
                                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__get_Item_MVWorldObjectDocumentationType_
                                 ), pOVar3 != (Object *)0x0)) {
      bVar4 = cRam_? == '\0';
      *(Object__Class **)(unaff_EBX + 0x34) = pOVar3[1].klass;
      if (bVar4) {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      pSVar5 = (String *)pOVar3[1].monitor;
      str2 = pOVar3[2].klass;
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      pSVar5 = mscorlib.dll::System::String::String_Concat_3
                         (pSVar5,StringLiteral_u000Au000A,(String *)str2,(MethodInfo *)0x0);
      *(String **)(unaff_EBX + 0x38) = pSVar5;
      return;
    }
  }
  func_?(0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* InventoryItem() */

void Assembly-CSharp.dll::InventoryItem::InventoryItem__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (Dictionary_2_MVWorldObjectDocumentationType_InventoryItem_ItemDescription_ *)
         func_?(
                        TypeInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>
                        );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this,
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Dictionary__
            );
  pSVar1 = TM::TM__(StringLiteral_Health_Pack,(MethodInfo *)0x0);
  pSVar2 = TM::TM__(StringLiteral_The_health_pack_fully_heals_a_pl,(MethodInfo *)0x0);
  pSVar3 = TM::TM__(StringLiteral_Place_this_after_difficult_parts,(MethodInfo *)0x0);
  fVar4 = 0.0;
  uVar5 = 0;
  func_?();
  pIVar6 = (InventoryItem_ItemDescription *)
           func_?(TypeInfo__InventoryItem__ItemDescription);
  cameraPreviewerOffset_03.z = fVar4;
  cameraPreviewerOffset_03.x = (float)(int)uVar5;
  cameraPreviewerOffset_03.y = (float)(int)((ulonglong)uVar5 >> 0x20);
  InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor_1
            (pIVar6,pSVar1,pSVar2,pSVar3,cameraPreviewerOffset_03,(MethodInfo *)0x0);
  if (this != (Dictionary_2_MVWorldObjectDocumentationType_InventoryItem_ItemDescription_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MVWorldObjectDocumentationType,System::
    Object]::Dictionary_2_MVWorldObjectDocumentationType_System_Object__Add
              ((Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)this,
               MVWorldObjectDocumentationType__Enum_HealthPack,(Object *)pIVar6,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pSVar1 = TM::TM__(StringLiteral_Machine_Gun,(MethodInfo *)0x0);
    pSVar2 = TM::TM__(StringLiteral_A_fully_automatic_rifle_capable_,(MethodInfo *)0x0);
    pSVar3 = TM::TM__(StringLiteral_This_rifle_is_at_its_best_in_clo,(MethodInfo *)0x0);
    pIVar6 = (InventoryItem_ItemDescription *)func_?();
    InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
              (pIVar6,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MVWorldObjectDocumentationType,System::
    Object]::Dictionary_2_MVWorldObjectDocumentationType_System_Object__Add
              ((Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)this,
               MVWorldObjectDocumentationType__Enum_Centergun,(Object *)pIVar6,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pSVar1 = TM::TM__(StringLiteral_Impulse_Gun,(MethodInfo *)0x0);
    pSVar2 = TM::TM__(StringLiteral_A_gun_generating_a_powerful_forc,(MethodInfo *)0x0);
    pSVar3 = TM::TM__(StringLiteral_This_gun_has_a_very_high_recoil_,(MethodInfo *)0x0);
    pIVar6 = (InventoryItem_ItemDescription *)func_?();
    InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
              (pIVar6,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MVWorldObjectDocumentationType,System::
    Object]::Dictionary_2_MVWorldObjectDocumentationType_System_Object__Add
              ((Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)this,
               MVWorldObjectDocumentationType__Enum_ImpulseGun,(Object *)pIVar6,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pSVar1 = TM::TM__(StringLiteral_Bazooka,(MethodInfo *)0x0);
    pSVar2 = TM::TM__(StringLiteral_A_rocket_launcher_with_devastati,(MethodInfo *)0x0);
    pSVar3 = TM::TM__(StringLiteral_The_bazooka_is_incredibly_powerf,(MethodInfo *)0x0);
    pIVar6 = (InventoryItem_ItemDescription *)func_?();
    InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
              (pIVar6,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MVWorldObjectDocumentationType,System::
    Object]::Dictionary_2_MVWorldObjectDocumentationType_System_Object__Add
              ((Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)this,
               MVWorldObjectDocumentationType__Enum_Bazooka,(Object *)pIVar6,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pSVar1 = TM::TM__(StringLiteral_Rail_Gun,(MethodInfo *)0x0);
    pSVar2 = TM::TM__(StringLiteral_The_sniper_rifle_uses_a_charged_,(MethodInfo *)0x0);
    pSVar3 = TM::TM__(StringLiteral_Devastating_when_used_at_long_ra,(MethodInfo *)0x0);
    pIVar6 = (InventoryItem_ItemDescription *)func_?();
    InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
              (pIVar6,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MVWorldObjectDocumentationType,System::
    Object]::Dictionary_2_MVWorldObjectDocumentationType_System_Object__Add
              ((Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)this,
               MVWorldObjectDocumentationType__Enum_Railgun,(Object *)pIVar6,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pSVar1 = TM::TM__(StringLiteral_Sword,(MethodInfo *)0x0);
    pSVar2 = TM::TM__(StringLiteral_A_steel_blade_designed_for_melee,(MethodInfo *)0x0);
    pSVar3 = TM::TM__(StringLiteral_Sneak_up_on_your_enemies_to_catc,(MethodInfo *)0x0);
    pIVar6 = (InventoryItem_ItemDescription *)func_?();
    InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
              (pIVar6,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MVWorldObjectDocumentationType,System::
    Object]::Dictionary_2_MVWorldObjectDocumentationType_System_Object__Add
              ((Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)this,
               MVWorldObjectDocumentationType__Enum_Sword,(Object *)pIVar6,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pSVar1 = TM::TM__(StringLiteral_Mutanto,(MethodInfo *)0x0);
    pSVar2 = TM::TM__(StringLiteral_Infuses_the_player_with_mutageni,(MethodInfo *)0x0);
    pSVar3 = TM::TM__(StringLiteral_Become_a_super_hero__or_super_vi,(MethodInfo *)0x0);
    pIVar6 = (InventoryItem_ItemDescription *)func_?();
    InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
              (pIVar6,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MVWorldObjectDocumentationType,System::
    Object]::Dictionary_2_MVWorldObjectDocumentationType_System_Object__Add
              ((Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)this,
               MVWorldObjectDocumentationType__Enum_Mutant,(Object *)pIVar6,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pSVar1 = TM::TM__(StringLiteral_Flamethrower,(MethodInfo *)0x0);
    pSVar2 = TM::TM__(StringLiteral_A_classic__Burn_everything_withi,(MethodInfo *)0x0);
    pSVar3 = TM::TM__(StringLiteral_Light_your_enemies_on_fire_with_,(MethodInfo *)0x0);
    pIVar6 = (InventoryItem_ItemDescription *)func_?();
    InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
              (pIVar6,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MVWorldObjectDocumentationType,System::
    Object]::Dictionary_2_MVWorldObjectDocumentationType_System_Object__Add
              ((Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)this,
               MVWorldObjectDocumentationType__Enum_Flamethrower,(Object *)pIVar6,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pSVar1 = TM::TM__(StringLiteral_Shotgun,(MethodInfo *)0x0);
    pSVar2 = TM::TM__(StringLiteral_A_gun_modeled_after_the_classic_,(MethodInfo *)0x0);
    pSVar3 = TM::TM__(StringLiteral_Use_this_in_close_quarters_to_de,(MethodInfo *)0x0);
    pIVar6 = (InventoryItem_ItemDescription *)func_?();
    InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
              (pIVar6,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MVWorldObjectDocumentationType,System::
    Object]::Dictionary_2_MVWorldObjectDocumentationType_System_Object__Add
              ((Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)this,
               MVWorldObjectDocumentationType__Enum_Shotgun,(Object *)pIVar6,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pSVar1 = TM::TM__(StringLiteral_Game_Objective__Star,(MethodInfo *)0x0);
    pSVar2 = TM::TM__(StringLiteral_The_player_team_who_first_collec,(MethodInfo *)0x0);
    pSVar3 = TM::TM__(StringLiteral_Collect_all_these_sparkly_trinke,(MethodInfo *)0x0);
    pIVar6 = (InventoryItem_ItemDescription *)func_?();
    InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
              (pIVar6,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MVWorldObjectDocumentationType,System::
    Object]::Dictionary_2_MVWorldObjectDocumentationType_System_Object__Add
              ((Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)this,
               MVWorldObjectDocumentationType__Enum_Star,(Object *)pIVar6,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pSVar1 = TM::TM__(StringLiteral_Growth_Pill,(MethodInfo *)0x0);
    pSVar2 = TM::TM__(StringLiteral_Transforms_a_player_into_a_giant,(MethodInfo *)0x0);
    pSVar3 = TM::TM__(StringLiteral_Become_a_giant_KoGaMian__capable,(MethodInfo *)0x0);
    pIVar6 = (InventoryItem_ItemDescription *)func_?();
    InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
              (pIVar6,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MVWorldObjectDocumentationType,System::
    Object]::Dictionary_2_MVWorldObjectDocumentationType_System_Object__Add
              ((Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)this,
               MVWorldObjectDocumentationType__Enum_GrowthPill,(Object *)pIVar6,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pSVar1 = TM::TM__(StringLiteral_Mouse_Pill,(MethodInfo *)0x0);
    pSVar2 = TM::TM__(StringLiteral_Shrinks_a_player_to_the_size_of_,(MethodInfo *)0x0);
    pSVar3 = TM::TM__(StringLiteral_Become_a_miniature_version_of_yo,(MethodInfo *)0x0);
    pIVar6 = (InventoryItem_ItemDescription *)func_?();
    InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
              (pIVar6,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MVWorldObjectDocumentationType,System::
    Object]::Dictionary_2_MVWorldObjectDocumentationType_System_Object__Add
              ((Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)this,
               MVWorldObjectDocumentationType__Enum_MousePill,(Object *)pIVar6,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pSVar1 = TM::TM__(StringLiteral_Mouse_Gun,(MethodInfo *)0x0);
    pSVar2 = TM::TM__(StringLiteral_A_pistol_that_shrinks_the_target,(MethodInfo *)0x0);
    pSVar3 = TM::TM__(StringLiteral_Turn_enemy_players_into_helpless,(MethodInfo *)0x0);
    pIVar6 = (InventoryItem_ItemDescription *)func_?();
    InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
              (pIVar6,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MVWorldObjectDocumentationType,System::
    Object]::Dictionary_2_MVWorldObjectDocumentationType_System_Object__Add
              ((Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)this,
               MVWorldObjectDocumentationType__Enum_MouseGun,(Object *)pIVar6,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pSVar1 = TM::TM__(StringLiteral_Shuriken,(MethodInfo *)0x0);
    pSVar2 = TM::TM__(StringLiteral_A_classic_ninja_shuriken_,(MethodInfo *)0x0);
    pSVar3 = TM::TM__(StringLiteral_Become_one_with_the_shadows_usin,(MethodInfo *)0x0);
    pIVar6 = (InventoryItem_ItemDescription *)func_?();
    InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
              (pIVar6,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MVWorldObjectDocumentationType,System::
    Object]::Dictionary_2_MVWorldObjectDocumentationType_System_Object__Add
              ((Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)this,
               MVWorldObjectDocumentationType__Enum_ThrowingStar,(Object *)pIVar6,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pSVar1 = TM::TM__(StringLiteral_Multi_Shuriken,(MethodInfo *)0x0);
    pSVar2 = TM::TM__(StringLiteral_A_handful_of_ninja_shurikens_,(MethodInfo *)0x0);
    pSVar3 = TM::TM__(StringLiteral_Throw_a_line_of_shurikens__and_s,(MethodInfo *)0x0);
    pIVar6 = (InventoryItem_ItemDescription *)func_?();
    InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
              (pIVar6,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MVWorldObjectDocumentationType,System::
    Object]::Dictionary_2_MVWorldObjectDocumentationType_System_Object__Add
              ((Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)this,
               MVWorldObjectDocumentationType__Enum_MultiThrowingStar,(Object *)pIVar6,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pSVar1 = TM::TM__(StringLiteral_Cube_Gun,(MethodInfo *)0x0);
    pSVar2 = TM::TM__(StringLiteral_Shoots_cubes_that_stick_to_surfa,(MethodInfo *)0x0);
    pSVar3 = TM::TM__(StringLiteral_Build_awesome_towers__thick_cast,(MethodInfo *)0x0);
    pIVar6 = (InventoryItem_ItemDescription *)func_?();
    InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
              (pIVar6,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MVWorldObjectDocumentationType,System::
    Object]::Dictionary_2_MVWorldObjectDocumentationType_System_Object__Add
              ((Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)this,
               MVWorldObjectDocumentationType__Enum_CubeGun,(Object *)pIVar6,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pSVar1 = TM::TM__(StringLiteral_Coin,(MethodInfo *)0x0);
    pSVar2 = TM::TM__(StringLiteral_Players_pick_these_up_to_pay_for,(MethodInfo *)0x0);
    pSVar3 = TM::TM__(StringLiteral_Reward_players_with_coins_used_t,(MethodInfo *)0x0);
    pIVar6 = (InventoryItem_ItemDescription *)func_?();
    InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
              (pIVar6,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MVWorldObjectDocumentationType,System::
    Object]::Dictionary_2_MVWorldObjectDocumentationType_System_Object__Add
              ((Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)this,
               MVWorldObjectDocumentationType__Enum_Coin,(Object *)pIVar6,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pSVar1 = TM::TM__(StringLiteral_Coin_Chest,(MethodInfo *)0x0);
    pSVar2 = TM::TM__(StringLiteral_Contains_lots_of_coins__which_ca,(MethodInfo *)0x0);
    pSVar3 = TM::TM__(StringLiteral_Use_this_to_reward_players_for_r,(MethodInfo *)0x0);
    pIVar6 = (InventoryItem_ItemDescription *)func_?();
    InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
              (pIVar6,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MVWorldObjectDocumentationType,System::
    Object]::Dictionary_2_MVWorldObjectDocumentationType_System_Object__Add
              ((Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)this,
               MVWorldObjectDocumentationType__Enum_CoinChest,(Object *)pIVar6,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pSVar1 = TM::TM__(StringLiteral_Dual_Revolvers,(MethodInfo *)0x0);
    pSVar2 = TM::TM__(StringLiteral_A_pair_of_high_powered_revolvers,(MethodInfo *)0x0);
    pSVar3 = TM::TM__(StringLiteral_Most_effective_in_mid_to_long_ra,(MethodInfo *)0x0);
    pIVar6 = (InventoryItem_ItemDescription *)func_?();
    InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
              (pIVar6,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MVWorldObjectDocumentationType,System::
    Object]::Dictionary_2_MVWorldObjectDocumentationType_System_Object__Add
              ((Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)this,
               MVWorldObjectDocumentationType__Enum_DoubleSixShooter,(Object *)pIVar6,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pSVar1 = TM::TM__(StringLiteral_Growth_Gun,(MethodInfo *)0x0);
    pSVar2 = TM::TM__(StringLiteral_Transforms_the_target_into_a_gia,(MethodInfo *)0x0);
    pSVar3 = TM::TM__(StringLiteral_Make_your_enemies_bigger_targets,(MethodInfo *)0x0);
    pIVar6 = (InventoryItem_ItemDescription *)func_?();
    InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
              (pIVar6,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MVWorldObjectDocumentationType,System::
    Object]::Dictionary_2_MVWorldObjectDocumentationType_System_Object__Add
              ((Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)this,
               MVWorldObjectDocumentationType__Enum_GrowthGun,(Object *)pIVar6,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pSVar1 = TM::TM__(StringLiteral_Revolver,(MethodInfo *)0x0);
    pSVar2 = TM::TM__(StringLiteral_A_high_powered_revolver_,(MethodInfo *)0x0);
    pSVar3 = TM::TM__(StringLiteral_Most_effective_in_mid_to_long_ra,(MethodInfo *)0x0);
    pIVar6 = (InventoryItem_ItemDescription *)func_?();
    InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
              (pIVar6,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MVWorldObjectDocumentationType,System::
    Object]::Dictionary_2_MVWorldObjectDocumentationType_System_Object__Add
              ((Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)this,
               MVWorldObjectDocumentationType__Enum_SixShooter,(Object *)pIVar6,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pSVar1 = TM::TM__(StringLiteral_Lightning_Speed,(MethodInfo *)0x0);
    pSVar2 = TM::TM__(StringLiteral_Infuses_the_player_with_lightnin,(MethodInfo *)0x0);
    pSVar3 = TM::TM__(StringLiteral_This_enables_players_to_cross_lo,(MethodInfo *)0x0);
    pIVar6 = (InventoryItem_ItemDescription *)func_?();
    InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
              (pIVar6,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MVWorldObjectDocumentationType,System::
    Object]::Dictionary_2_MVWorldObjectDocumentationType_System_Object__Add
              ((Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)this,
               MVWorldObjectDocumentationType__Enum_NinjaRun,(Object *)pIVar6,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pSVar1 = TM::TM__(StringLiteral_Oculus,(MethodInfo *)0x0);
    pSVar2 = TM::TM__(StringLiteral_A_customizable_monster_from_anot,(MethodInfo *)0x0);
    pSVar3 = TM::TM__(StringLiteral_These_hideous_creatures_only_hav,(MethodInfo *)0x0);
    uVar7 = 0;
    func_?();
    pIVar6 = (InventoryItem_ItemDescription *)func_?();
    auVar8._4_8_ = 0;
    auVar8._0_4_ = uVar7;
    InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor_1
              (pIVar6,pSVar1,pSVar2,pSVar3,(Vector3)(auVar8 << 0x40),(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MVWorldObjectDocumentationType,System::
    Object]::Dictionary_2_MVWorldObjectDocumentationType_System_Object__Add
              ((Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)this,
               MVWorldObjectDocumentationType__Enum_Oculus,(Object *)pIVar6,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pSVar1 = TM::TM__(StringLiteral_Teleporter,(MethodInfo *)0x0);
    pSVar2 = TM::TM__(StringLiteral_A_pair_of_connected_teleporters_,(MethodInfo *)0x0);
    pSVar3 = TM::TM__(StringLiteral_Useful_for_separating_different_,(MethodInfo *)0x0);
    func_?();
    pIVar6 = (InventoryItem_ItemDescription *)func_?();
    InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor_1
              (pIVar6,pSVar1,pSVar2,pSVar3,(Vector3)ZEXT812(0),(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MVWorldObjectDocumentationType,System::
    Object]::Dictionary_2_MVWorldObjectDocumentationType_System_Object__Add
              ((Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)this,
               MVWorldObjectDocumentationType__Enum_Teleporter,(Object *)pIVar6,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pSVar1 = TM::TM__(StringLiteral_Hovercraft,(MethodInfo *)0x0);
    pSVar2 = TM::TM__(StringLiteral_A_customizable_hovercraft_,(MethodInfo *)0x0);
    pSVar3 = TM::TM__(StringLiteral_Enables_players_to_traverse_grea,(MethodInfo *)0x0);
    func_?();
    pIVar6 = (InventoryItem_ItemDescription *)func_?();
    InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor_1
              (pIVar6,pSVar1,pSVar2,pSVar3,(Vector3)ZEXT812(0),(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MVWorldObjectDocumentationType,System::
    Object]::Dictionary_2_MVWorldObjectDocumentationType_System_Object__Add
              ((Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)this,
               MVWorldObjectDocumentationType__Enum_Hovercraft,(Object *)pIVar6,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pSVar1 = TM::TM__(StringLiteral_Hamster_Ball,(MethodInfo *)0x0);
    pSVar2 = TM::TM__(StringLiteral_A_giant_hamster_ball_,(MethodInfo *)0x0);
    pSVar3 = TM::TM__(StringLiteral_This_bouncy_ball_offers_a_hilari,(MethodInfo *)0x0);
    uVar9 = 0;
    func_?();
    pIVar6 = (InventoryItem_ItemDescription *)func_?();
    cameraPreviewerOffset.z = 0.0;
    uStack_10 = (undefined4)(uVar9 >> 0x20);
    cameraPreviewerOffset.x = (float)uVar11;
    cameraPreviewerOffset.y = (float)uStack_10;
    InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor_1
              (pIVar6,pSVar1,pSVar2,pSVar3,cameraPreviewerOffset,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MVWorldObjectDocumentationType,System::
    Object]::Dictionary_2_MVWorldObjectDocumentationType_System_Object__Add
              ((Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)this,
               MVWorldObjectDocumentationType__Enum_HamsterBall,(Object *)pIVar6,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pSVar1 = TM::TM__(StringLiteral_Fire_Sentry_Tower,(MethodInfo *)0x0);
    pSVar2 = TM::TM__(StringLiteral_A_sentry_tower__shooting_fire_at,(MethodInfo *)0x0);
    pSVar3 = TM::TM__(StringLiteral_Fire_sentries_serve_as_stationar,(MethodInfo *)0x0);
    fVar4 = 0.0;
    uVar5 = 0;
    func_?();
    pIVar6 = (InventoryItem_ItemDescription *)func_?();
    cameraPreviewerOffset_00.z = fVar4;
    cameraPreviewerOffset_00.x = (float)(int)uVar5;
    cameraPreviewerOffset_00.y = (float)(int)((ulonglong)uVar5 >> 0x20);
    InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor_1
              (pIVar6,pSVar1,pSVar2,pSVar3,cameraPreviewerOffset_00,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MVWorldObjectDocumentationType,System::
    Object]::Dictionary_2_MVWorldObjectDocumentationType_System_Object__Add
              ((Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)this,
               MVWorldObjectDocumentationType__Enum_FireSentryTower,(Object *)pIVar6,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pSVar1 = TM::TM__(StringLiteral_Platform,(MethodInfo *)0x0);
    pSVar2 = TM::TM__(StringLiteral_Create_elevators_or_platforms_wi,(MethodInfo *)0x0);
    pSVar3 = TM::TM__(StringLiteral_Useful_when_bridging_the_gap_bet,(MethodInfo *)0x0);
    pIVar6 = (InventoryItem_ItemDescription *)func_?();
    InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
              (pIVar6,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MVWorldObjectDocumentationType,System::
    Object]::Dictionary_2_MVWorldObjectDocumentationType_System_Object__Add
              ((Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)this,
               MVWorldObjectDocumentationType__Enum_MovingPlatform,(Object *)pIVar6,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pSVar1 = TM::TM__(StringLiteral_Horizontal_Rotator,(MethodInfo *)0x0);
    pSVar2 = TM::TM__(StringLiteral_A_custom_cube_model__that_rotate,(MethodInfo *)0x0);
    pSVar3 = TM::TM__(StringLiteral_Can_be_used_as_a_challenging_way,(MethodInfo *)0x0);
    pIVar6 = (InventoryItem_ItemDescription *)func_?();
    InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
              (pIVar6,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MVWorldObjectDocumentationType,System::
    Object]::Dictionary_2_MVWorldObjectDocumentationType_System_Object__Add
              ((Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)this,
               MVWorldObjectDocumentationType__Enum_HorizontalRotator,(Object *)pIVar6,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pSVar1 = TM::TM__(StringLiteral_Vertical_Rotator,(MethodInfo *)0x0);
    pSVar2 = TM::TM__(StringLiteral_A_custom_cube_model__that_rotate,(MethodInfo *)0x0);
    pSVar3 = TM::TM__(StringLiteral_Useful_for_pushing_players_off_p,(MethodInfo *)0x0);
    pIVar6 = (InventoryItem_ItemDescription *)func_?();
    InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
              (pIVar6,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MVWorldObjectDocumentationType,System::
    Object]::Dictionary_2_MVWorldObjectDocumentationType_System_Object__Add
              ((Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)this,
               MVWorldObjectDocumentationType__Enum_VerticalRotator,(Object *)pIVar6,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pSVar1 = TM::TM__(StringLiteral_Dragonfly_Jetpack,(MethodInfo *)0x0);
    pSVar2 = TM::TM__(StringLiteral_A_big_customizable_jetpack_,(MethodInfo *)0x0);
    pSVar3 = TM::TM__(StringLiteral_This_jetpack_offers_unprecedente,(MethodInfo *)0x0);
    uVar7 = 0;
    func_?();
    pIVar6 = (InventoryItem_ItemDescription *)func_?();
    auVar12._4_8_ = 0;
    auVar12._0_4_ = uVar7;
    InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor_1
              (pIVar6,pSVar1,pSVar2,pSVar3,(Vector3)(auVar12 << 0x40),(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MVWorldObjectDocumentationType,System::
    Object]::Dictionary_2_MVWorldObjectDocumentationType_System_Object__Add
              ((Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)this,
               MVWorldObjectDocumentationType__Enum_BigJetpack,(Object *)pIVar6,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pSVar1 = TM::TM__(StringLiteral_Ghost,(MethodInfo *)0x0);
    pSVar2 = TM::TM__(StringLiteral_An_unkillable_ghost_which_damage,(MethodInfo *)0x0);
    pSVar3 = TM::TM__(StringLiteral_This_scary_monster_can_move_thro,(MethodInfo *)0x0);
    pIVar6 = (InventoryItem_ItemDescription *)func_?();
    InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
              (pIVar6,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MVWorldObjectDocumentationType,System::
    Object]::Dictionary_2_MVWorldObjectDocumentationType_System_Object__Add
              ((Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)this,
               MVWorldObjectDocumentationType__Enum_Ghost,(Object *)pIVar6,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pSVar1 = TM::TM__(StringLiteral_Frost_Sentry_Tower,(MethodInfo *)0x0);
    pSVar2 = TM::TM__(StringLiteral_A_sentry_tower__shooting_a_beam_,(MethodInfo *)0x0);
    pSVar3 = TM::TM__(StringLiteral_Frost_sentries_serve_as_stationa,(MethodInfo *)0x0);
    uVar11 = 0;
    uVar13 = 0;
    func_?();
    pIVar6 = (InventoryItem_ItemDescription *)func_?();
    cameraPreviewerOffset_01.y = (float)uVar13;
    cameraPreviewerOffset_01.x = (float)uVar11;
    cameraPreviewerOffset_01.z = 0.0;
    InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor_1
              (pIVar6,pSVar1,pSVar2,pSVar3,cameraPreviewerOffset_01,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MVWorldObjectDocumentationType,System::
    Object]::Dictionary_2_MVWorldObjectDocumentationType_System_Object__Add
              ((Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)this,
               MVWorldObjectDocumentationType__Enum_FrostSentryTower,(Object *)pIVar6,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pSVar1 = TM::TM__(StringLiteral_Firefly_Jetpack,(MethodInfo *)0x0);
    pSVar2 = TM::TM__(StringLiteral_A_small_customizable_jetpack_,(MethodInfo *)0x0);
    pSVar3 = TM::TM__(StringLiteral_Soar_to_the_skies_with_this_ligh,(MethodInfo *)0x0);
    fVar4 = 0.0;
    uVar11 = 0;
    uVar13 = 0;
    func_?();
    pIVar6 = (InventoryItem_ItemDescription *)func_?();
    cameraPreviewerOffset_02.y = (float)uVar13;
    cameraPreviewerOffset_02.x = (float)uVar11;
    cameraPreviewerOffset_02.z = fVar4;
    InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor_1
              (pIVar6,pSVar1,pSVar2,pSVar3,cameraPreviewerOffset_02,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MVWorldObjectDocumentationType,System::
    Object]::Dictionary_2_MVWorldObjectDocumentationType_System_Object__Add
              ((Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)this,
               MVWorldObjectDocumentationType__Enum_SmallJetpack,(Object *)pIVar6,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pSVar1 = TM::TM__(StringLiteral_Light_Cube,(MethodInfo *)0x0);
    pSVar2 = TM::TM__(StringLiteral_A_colored_light__that_can_be_con,(MethodInfo *)0x0);
    pSVar3 = TM::TM__(StringLiteral_Light_up_the_dark_areas_of_your_,(MethodInfo *)0x0);
    pIVar6 = (InventoryItem_ItemDescription *)func_?();
    InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
              (pIVar6,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MVWorldObjectDocumentationType,System::
    Object]::Dictionary_2_MVWorldObjectDocumentationType_System_Object__Add
              ((Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)this,
               MVWorldObjectDocumentationType__Enum_PointLight,(Object *)pIVar6,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pSVar1 = TM::TM__(StringLiteral_Blue_Team_Spawn_Point,(MethodInfo *)0x0);
    pSVar2 = TM::TM__(StringLiteral_Spawn_point_for_the_blue_team__P,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    pSVar3 = TypeInfo__System__String->static_fields->Empty;
    pIVar6 = (InventoryItem_ItemDescription *)func_?();
    InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
              (pIVar6,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MVWorldObjectDocumentationType,System::
    Object]::Dictionary_2_MVWorldObjectDocumentationType_System_Object__Add
              ((Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)this,
               MVWorldObjectDocumentationType__Enum_SpawnPointBlue,(Object *)pIVar6,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pSVar2 = TM::TM__(StringLiteral_Red_Team_Spawn_Point,(MethodInfo *)0x0);
    pSVar3 = TM::TM__(StringLiteral_Spawn_point_for_the_red_team__Pl,(MethodInfo *)0x0);
    pSVar1 = TypeInfo__System__String->static_fields->Empty;
    pIVar6 = (InventoryItem_ItemDescription *)func_?();
    InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
              (pIVar6,pSVar2,pSVar3,pSVar1,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MVWorldObjectDocumentationType,System::
    Object]::Dictionary_2_MVWorldObjectDocumentationType_System_Object__Add
              ((Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)this,
               MVWorldObjectDocumentationType__Enum_SpawnPointRed,(Object *)pIVar6,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pSVar2 = TM::TM__(StringLiteral_Green_Team_Spawn_Point,(MethodInfo *)0x0);
    pSVar3 = TM::TM__(StringLiteral_Spawn_point_for_the_green_team__,(MethodInfo *)0x0);
    pSVar1 = TypeInfo__System__String->static_fields->Empty;
    pIVar6 = (InventoryItem_ItemDescription *)func_?();
    InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
              (pIVar6,pSVar2,pSVar3,pSVar1,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MVWorldObjectDocumentationType,System::
    Object]::Dictionary_2_MVWorldObjectDocumentationType_System_Object__Add
              ((Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)this,
               MVWorldObjectDocumentationType__Enum_SpawnPointGreen,(Object *)pIVar6,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pSVar2 = TM::TM__(StringLiteral_Yellow_Team_Spawn_Point,(MethodInfo *)0x0);
    pSVar3 = TM::TM__(StringLiteral_Spawn_point_for_the_yellow_team_,(MethodInfo *)0x0);
    pSVar1 = TypeInfo__System__String->static_fields->Empty;
    pIVar6 = (InventoryItem_ItemDescription *)func_?();
    InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
              (pIVar6,pSVar2,pSVar3,pSVar1,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MVWorldObjectDocumentationType,System::
    Object]::Dictionary_2_MVWorldObjectDocumentationType_System_Object__Add
              ((Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)this,
               MVWorldObjectDocumentationType__Enum_SpawnPointYellow,(Object *)pIVar6,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pSVar1 = TM::TM__(StringLiteral_Game_Objective__Flag,(MethodInfo *)0x0);
    pSVar2 = TM::TM__(StringLiteral_The_player_who_reaches_the_flag_,(MethodInfo *)0x0);
    pSVar3 = TM::TM__(StringLiteral_Flags_are_a_great_way_to_give_pl,(MethodInfo *)0x0);
    pIVar6 = (InventoryItem_ItemDescription *)func_?();
    InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
              (pIVar6,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MVWorldObjectDocumentationType,System::
    Object]::Dictionary_2_MVWorldObjectDocumentationType_System_Object__Add
              ((Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)this,
               MVWorldObjectDocumentationType__Enum_Flag,(Object *)pIVar6,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pSVar1 = TM::TM__(StringLiteral_Explosive,(MethodInfo *)0x0);
    pSVar2 = TM::TM__(StringLiteral_A_bundle_of_dynamite_that_will_e,(MethodInfo *)0x0);
    pSVar3 = TM::TM__(StringLiteral_Use_this_by_connecting_it_to_a_p,(MethodInfo *)0x0);
    pIVar6 = (InventoryItem_ItemDescription *)func_?();
    InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
              (pIVar6,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MVWorldObjectDocumentationType,System::
    Object]::Dictionary_2_MVWorldObjectDocumentationType_System_Object__Add
              ((Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)this,
               MVWorldObjectDocumentationType__Enum_Explosives,(Object *)pIVar6,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pSVar1 = TM::TM__(StringLiteral_Fire,(MethodInfo *)0x0);
    pSVar2 = TM::TM__(StringLiteral_This_burns_anyone_who_gets_too_c,(MethodInfo *)0x0);
    pSVar3 = TM::TM__(StringLiteral_You_can_pair_this_with_the_Smoke,(MethodInfo *)0x0);
    pIVar6 = (InventoryItem_ItemDescription *)func_?();
    InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
              (pIVar6,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MVWorldObjectDocumentationType,System::
    Object]::Dictionary_2_MVWorldObjectDocumentationType_System_Object__Add
              ((Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)this,
               MVWorldObjectDocumentationType__Enum_Fire,(Object *)pIVar6,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pSVar1 = TM::TM__(StringLiteral_Smoke,(MethodInfo *)0x0);
    pSVar2 = TM::TM__(StringLiteral_Emits_a_cloud_of_smoke__The_smok,(MethodInfo *)0x0);
    pSVar3 = TM::TM__(StringLiteral_Great_cube_if_you_want_to_obstru,(MethodInfo *)0x0);
    pIVar6 = (InventoryItem_ItemDescription *)func_?();
    InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
              (pIVar6,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MVWorldObjectDocumentationType,System::
    Object]::Dictionary_2_MVWorldObjectDocumentationType_System_Object__Add
              ((Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)this,
               MVWorldObjectDocumentationType__Enum_Smoke,(Object *)pIVar6,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pSVar1 = TM::TM__(StringLiteral_Text,(MethodInfo *)0x0);
    pSVar2 = TM::TM__(StringLiteral_An_object_enabling_you_to_displa,(MethodInfo *)0x0);
    pSVar3 = TM::TM__(StringLiteral_Display_a_game_title__help_text_,(MethodInfo *)0x0);
    pIVar6 = (InventoryItem_ItemDescription *)func_?();
    InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
              (pIVar6,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MVWorldObjectDocumentationType,System::
    Object]::Dictionary_2_MVWorldObjectDocumentationType_System_Object__Add
              ((Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)this,
               MVWorldObjectDocumentationType__Enum_Text,(Object *)pIVar6,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pSVar1 = TM::TM__(StringLiteral_Skybox_Cube,(MethodInfo *)0x0);
    pSVar2 = TM::TM__(StringLiteral_Manage_the_look_of_your_game_by_,(MethodInfo *)0x0);
    pSVar3 = TM::TM__(StringLiteral_Adding_this_to_your_project_will,(MethodInfo *)0x0);
    pIVar6 = (InventoryItem_ItemDescription *)func_?();
    InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
              (pIVar6,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MVWorldObjectDocumentationType,System::
    Object]::Dictionary_2_MVWorldObjectDocumentationType_System_Object__Add
              ((Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)this,
               MVWorldObjectDocumentationType__Enum_Skybox,(Object *)pIVar6,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pSVar1 = TM::TM__(StringLiteral_Water_Cube,(MethodInfo *)0x0);
    pSVar2 = TM::TM__(StringLiteral_Adjust_the_level_and_color_of_yo,(MethodInfo *)0x0);
    pSVar3 = TM::TM__(StringLiteral_WARNING__KoGaMians_cannot_breath,(MethodInfo *)0x0);
    pIVar6 = (InventoryItem_ItemDescription *)func_?();
    InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
              (pIVar6,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MVWorldObjectDocumentationType,System::
    Object]::Dictionary_2_MVWorldObjectDocumentationType_System_Object__Add
              ((Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)this,
               MVWorldObjectDocumentationType__Enum_WaterPlane,(Object *)pIVar6,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pSVar1 = TM::TM__(StringLiteral_Speaker,(MethodInfo *)0x0);
    pSVar2 = TM::TM__(StringLiteral_Add_sounds_to_your_game__There_s,(MethodInfo *)0x0);
    pSVar3 = TM::TM__(StringLiteral_This_is_great_for_creating_the_a,(MethodInfo *)0x0);
    pIVar6 = (InventoryItem_ItemDescription *)func_?();
    InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
              (pIVar6,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MVWorldObjectDocumentationType,System::
    Object]::Dictionary_2_MVWorldObjectDocumentationType_System_Object__Add
              ((Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)this,
               MVWorldObjectDocumentationType__Enum_SoundEmitter,(Object *)pIVar6,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pSVar1 = TM::TM__(StringLiteral_Checkpoint,(MethodInfo *)0x0);
    pSVar2 = TM::TM__(StringLiteral_A_player_who_reaches_this_will_r,(MethodInfo *)0x0);
    pSVar3 = TM::TM__(StringLiteral_This_is_a_must_have_for_any_leve,(MethodInfo *)0x0);
    pIVar6 = (InventoryItem_ItemDescription *)func_?();
    InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
              (pIVar6,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MVWorldObjectDocumentationType,System::
    Object]::Dictionary_2_MVWorldObjectDocumentationType_System_Object__Add
              ((Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)this,
               MVWorldObjectDocumentationType__Enum_Checkpoint,(Object *)pIVar6,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pSVar1 = TM::TM__(StringLiteral_Game_Objective__Eliminate_the_Oc,(MethodInfo *)0x0);
    pSVar2 = TM::TM__(StringLiteral_Set_a_Oculus_kill_limit_for_your,(MethodInfo *)0x0);
    pSVar3 = TM::TM__(StringLiteral_The_team_or_player_that_reaches_,(MethodInfo *)0x0);
    pIVar6 = (InventoryItem_ItemDescription *)func_?();
    InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
              (pIVar6,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MVWorldObjectDocumentationType,System::
    Object]::Dictionary_2_MVWorldObjectDocumentationType_System_Object__Add
              ((Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)this,
               MVWorldObjectDocumentationType__Enum_OculusKillWinCondition,(Object *)pIVar6,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pSVar1 = TM::TM__(StringLiteral_Wind_Turbine,(MethodInfo *)0x0);
    pSVar2 = TM::TM__(StringLiteral_A_big_fan__which_blows_players_a,(MethodInfo *)0x0);
    pSVar3 = TM::TM__(StringLiteral_You_can_stack_several_wind_turbi,(MethodInfo *)0x0);
    pIVar6 = (InventoryItem_ItemDescription *)func_?();
    InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
              (pIVar6,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MVWorldObjectDocumentationType,System::
    Object]::Dictionary_2_MVWorldObjectDocumentationType_System_Object__Add
              ((Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)this,
               MVWorldObjectDocumentationType__Enum_WindTurbine,(Object *)pIVar6,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pSVar1 = TM::TM__(StringLiteral_Round_Time,(MethodInfo *)0x0);
    pSVar2 = TM::TM__(StringLiteral_Set_a_time_limit_for_a_round__Af,(MethodInfo *)0x0);
    pSVar3 = TM::TM__(StringLiteral_Round_cubes_are_a_great_if_your_,(MethodInfo *)0x0);
    pIVar6 = (InventoryItem_ItemDescription *)func_?();
    InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
              (pIVar6,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MVWorldObjectDocumentationType,System::
    Object]::Dictionary_2_MVWorldObjectDocumentationType_System_Object__Add
              ((Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)this,
               MVWorldObjectDocumentationType__Enum_RoundCube,(Object *)pIVar6,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pSVar1 = TM::TM__(StringLiteral_Game_Objective__Death_match,(MethodInfo *)0x0);
    pSVar2 = TM::TM__(StringLiteral_Set_a_player_kill_limit_for_your,(MethodInfo *)0x0);
    pSVar3 = TM::TM__(StringLiteral_Add_this_to_create_a_death_match,(MethodInfo *)0x0);
    pIVar6 = (InventoryItem_ItemDescription *)func_?();
    InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
              (pIVar6,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MVWorldObjectDocumentationType,System::
    Object]::Dictionary_2_MVWorldObjectDocumentationType_System_Object__Add
              ((Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)this,
               MVWorldObjectDocumentationType__Enum_PlayerKillWinCondition,(Object *)pIVar6,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pSVar1 = TM::TM__(StringLiteral_Camera_Cube,(MethodInfo *)0x0);
    pSVar2 = TM::TM__(StringLiteral_An_object_specifying_the_distanc,(MethodInfo *)0x0);
    pSVar3 = TM::TM__(StringLiteral_This_is_a_great_way_to_control_t,(MethodInfo *)0x0);
    pIVar6 = (InventoryItem_ItemDescription *)func_?();
    InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
              (pIVar6,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MVWorldObjectDocumentationType,System::
    Object]::Dictionary_2_MVWorldObjectDocumentationType_System_Object__Add
              ((Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)this,
               MVWorldObjectDocumentationType__Enum_CameraSettings,(Object *)pIVar6,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pSVar1 = TM::TM__(StringLiteral_Delay_Cube,(MethodInfo *)0x0);
    pSVar2 = TM::TM__(StringLiteral_When_receiving_a_signal_from_ano,(MethodInfo *)0x0);
    pSVar3 = TM::TM__(StringLiteral_You_can_put_these_in_sequence_to,(MethodInfo *)0x0);
    pIVar6 = (InventoryItem_ItemDescription *)func_?();
    InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
              (pIVar6,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MVWorldObjectDocumentationType,System::
    Object]::Dictionary_2_MVWorldObjectDocumentationType_System_Object__Add
              ((Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)this,
               MVWorldObjectDocumentationType__Enum_TimeTrigger,(Object *)pIVar6,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pSVar1 = TM::TM__(StringLiteral_Toggle_Cube,(MethodInfo *)0x0);
    pSVar2 = TM::TM__(StringLiteral_Switches_between_ON_and_OFF_each,(MethodInfo *)0x0);
    pSVar3 = TM::TM__(StringLiteral_Do_you_want_to_open_and_close_th,(MethodInfo *)0x0);
    pIVar6 = (InventoryItem_ItemDescription *)func_?();
    InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
              (pIVar6,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MVWorldObjectDocumentationType,System::
    Object]::Dictionary_2_MVWorldObjectDocumentationType_System_Object__Add
              ((Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)this,
               MVWorldObjectDocumentationType__Enum_ToggleBox,(Object *)pIVar6,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pSVar1 = TM::TM__(StringLiteral_Negate_Cube,(MethodInfo *)0x0);
    pSVar2 = TM::TM__(StringLiteral_A_logic_object_which_sends_the_o,(MethodInfo *)0x0);
    pSVar3 = TM::TM__(StringLiteral_Inverting_a_signal_open_up_many_,(MethodInfo *)0x0);
    pIVar6 = (InventoryItem_ItemDescription *)func_?();
    InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
              (pIVar6,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MVWorldObjectDocumentationType,System::
    Object]::Dictionary_2_MVWorldObjectDocumentationType_System_Object__Add
              ((Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)this,
               MVWorldObjectDocumentationType__Enum_Negate,(Object *)pIVar6,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pSVar1 = TM::TM__(StringLiteral_And_Cube,(MethodInfo *)0x0);
    pSVar2 = TM::TM__(StringLiteral_The_And_Cube_takes_several_input,(MethodInfo *)0x0);
    pSVar3 = TM::TM__(StringLiteral_If_you_want_players_to_stand_on_,(MethodInfo *)0x0);
    pIVar6 = (InventoryItem_ItemDescription *)func_?();
    InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
              (pIVar6,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MVWorldObjectDocumentationType,System::
    Object]::Dictionary_2_MVWorldObjectDocumentationType_System_Object__Add
              ((Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)this,
               MVWorldObjectDocumentationType__Enum_And,(Object *)pIVar6,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pSVar1 = TM::TM__(StringLiteral_Pressure_Plate,(MethodInfo *)0x0);
    pSVar2 = TM::TM__(StringLiteral_Whenever_a_player_steps_on_the_p,(MethodInfo *)0x0);
    pSVar3 = TM::TM__(StringLiteral_Connect_this_to_an_toggle_box_fo,(MethodInfo *)0x0);
    pIVar6 = (InventoryItem_ItemDescription *)func_?();
    InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
              (pIVar6,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MVWorldObjectDocumentationType,System::
    Object]::Dictionary_2_MVWorldObjectDocumentationType_System_Object__Add
              ((Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)this,
               MVWorldObjectDocumentationType__Enum_PressurePlate,(Object *)pIVar6,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pSVar1 = TM::TM__(StringLiteral_Cube_Model_Hider,(MethodInfo *)0x0);
    pSVar2 = TM::TM__(StringLiteral_Hides_connected_cube_model_when_,(MethodInfo *)0x0);
    pSVar3 = TM::TM__(StringLiteral_This_is_most_commonly_used_to_en,(MethodInfo *)0x0);
    pIVar6 = (InventoryItem_ItemDescription *)func_?();
    InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
              (pIVar6,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MVWorldObjectDocumentationType,System::
    Object]::Dictionary_2_MVWorldObjectDocumentationType_System_Object__Add
              ((Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)this,
               MVWorldObjectDocumentationType__Enum_ModelToggle,(Object *)pIVar6,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pSVar1 = TM::TM__(StringLiteral_Pulse_Cube,(MethodInfo *)0x0);
    pSVar2 = TM::TM__(StringLiteral_This_logic_cube_sends_signals_in,(MethodInfo *)0x0);
    pSVar3 = TM::TM__(StringLiteral_This_is_really_neat_when_you_wan,(MethodInfo *)0x0);
    pIVar6 = (InventoryItem_ItemDescription *)func_?();
    InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
              (pIVar6,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MVWorldObjectDocumentationType,System::
    Object]::Dictionary_2_MVWorldObjectDocumentationType_System_Object__Add
              ((Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)this,
               MVWorldObjectDocumentationType__Enum_PulseBox,(Object *)pIVar6,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pSVar1 = TM::TM__(StringLiteral_Random_Cube,(MethodInfo *)0x0);
    pSVar2 = TM::TM__(StringLiteral_Powers_one_connected_object_at_r,(MethodInfo *)0x0);
    pSVar3 = TM::TM__(StringLiteral_This_is_useful_if_you_want_to_cr,(MethodInfo *)0x0);
    pIVar6 = (InventoryItem_ItemDescription *)func_?();
    InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
              (pIVar6,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MVWorldObjectDocumentationType,System::
    Object]::Dictionary_2_MVWorldObjectDocumentationType_System_Object__Add
              ((Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)this,
               MVWorldObjectDocumentationType__Enum_RandomBox,(Object *)pIVar6,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pSVar1 = TM::TM__(StringLiteral_Counting_Cube,(MethodInfo *)0x0);
    pSVar2 = TM::TM__(StringLiteral_Set_a_count__Each_time_the_cube_,(MethodInfo *)0x0);
    pSVar3 = TM::TM__(StringLiteral_This_looks_super_cool_and_can_be,(MethodInfo *)0x0);
    pIVar6 = (InventoryItem_ItemDescription *)func_?();
    InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
              (pIVar6,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MVWorldObjectDocumentationType,System::
    Object]::Dictionary_2_MVWorldObjectDocumentationType_System_Object__Add
              ((Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)this,
               MVWorldObjectDocumentationType__Enum_CountingCube,(Object *)pIVar6,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pSVar1 = TM::TM__(StringLiteral_Target_Cube,(MethodInfo *)0x0);
    pSVar2 = TM::TM__(StringLiteral_Sends_a_signal_when_shot_,(MethodInfo *)0x0);
    pSVar3 = TM::TM__(StringLiteral_Can_be_used_to_open_doors_or_sec,(MethodInfo *)0x0);
    pIVar6 = (InventoryItem_ItemDescription *)func_?();
    InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
              (pIVar6,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MVWorldObjectDocumentationType,System::
    Object]::Dictionary_2_MVWorldObjectDocumentationType_System_Object__Add
              ((Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)this,
               MVWorldObjectDocumentationType__Enum_ShootableButton,(Object *)pIVar6,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pSVar1 = TM::TM__(StringLiteral_Lever,(MethodInfo *)0x0);
    pSVar2 = TM::TM__(StringLiteral_Sends_a_signal_when_pulled_,(MethodInfo *)0x0);
    pSVar3 = TM::TM__(StringLiteral_Open_doors__trigger_explosives__,(MethodInfo *)0x0);
    pIVar6 = (InventoryItem_ItemDescription *)func_?();
    InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
              (pIVar6,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MVWorldObjectDocumentationType,System::
    Object]::Dictionary_2_MVWorldObjectDocumentationType_System_Object__Add
              ((Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)this,
               MVWorldObjectDocumentationType__Enum_Lever,(Object *)pIVar6,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pSVar1 = TM::TM__(StringLiteral_Collect_And_Drop,(MethodInfo *)0x0);
    pSVar2 = TM::TM__(StringLiteral_A_pair_consisting_of_a_pickup_an,(MethodInfo *)0x0);
    pSVar3 = TM::TM__(StringLiteral_Can_be_used_for_everything_from_,(MethodInfo *)0x0);
    pIVar6 = (InventoryItem_ItemDescription *)func_?();
    InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
              (pIVar6,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MVWorldObjectDocumentationType,System::
    Object]::Dictionary_2_MVWorldObjectDocumentationType_System_Object__Add
              ((Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)this,
               MVWorldObjectDocumentationType__Enum_CollectTheItem,(Object *)pIVar6,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pSVar1 = TM::TM__(StringLiteral_Heal_Ray,(MethodInfo *)0x0);
    pSVar2 = TM::TM__(StringLiteral_Shoots_a_ray_that_heals_people__,(MethodInfo *)0x0);
    pSVar3 = TM::TM__(StringLiteral_Don_t_let_your_friends_die__shoo,(MethodInfo *)0x0);
    pIVar6 = (InventoryItem_ItemDescription *)func_?();
    InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
              (pIVar6,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MVWorldObjectDocumentationType,System::
    Object]::Dictionary_2_MVWorldObjectDocumentationType_System_Object__Add
              ((Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)this,
               MVWorldObjectDocumentationType__Enum_HealRay,(Object *)pIVar6,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pSVar1 = TM::TM__(StringLiteral_Global_Speaker,(MethodInfo *)0x0);
    pSVar2 = TM::TM__(StringLiteral_Adds_a_global_sound_to_the_game_,(MethodInfo *)0x0);
    pSVar3 = TM::TM__(StringLiteral_This_can_be_used_to_make_a_bette,(MethodInfo *)0x0);
    pIVar6 = (InventoryItem_ItemDescription *)func_?();
    InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
              (pIVar6,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MVWorldObjectDocumentationType,System::
    Object]::Dictionary_2_MVWorldObjectDocumentationType_System_Object__Add
              ((Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)this,
               MVWorldObjectDocumentationType__Enum_GlobalSoundEmitter,(Object *)pIVar6,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pSVar1 = TM::TM__(StringLiteral_Game_Objective__Time_Attack_Flag,(MethodInfo *)0x0);
    pSVar2 = TM::TM__(StringLiteral_Records_the_time_it_took_for_a_p,(MethodInfo *)0x0);
    pSVar3 = TM::TM__(StringLiteral_Lets_players_take_their_time_rea,(MethodInfo *)0x0);
    pIVar6 = (InventoryItem_ItemDescription *)func_?();
    InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
              (pIVar6,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MVWorldObjectDocumentationType,System::
    Object]::Dictionary_2_MVWorldObjectDocumentationType_System_Object__Add
              ((Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)this,
               MVWorldObjectDocumentationType__Enum_TimeAttackFlag,(Object *)pIVar6,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pSVar1 = TM::TM__(StringLiteral_Trigger_Cube,(MethodInfo *)0x0);
    pSVar2 = TM::TM__(StringLiteral_While_a_player_is_inside_the_are,(MethodInfo *)0x0);
    pSVar3 = TM::TM__(StringLiteral_Allows_for_scripted_events_in_a_,(MethodInfo *)0x0);
    pIVar6 = (InventoryItem_ItemDescription *)func_?();
    InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
              (pIVar6,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MVWorldObjectDocumentationType,System::
    Object]::Dictionary_2_MVWorldObjectDocumentationType_System_Object__Add
              ((Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)this,
               MVWorldObjectDocumentationType__Enum_TriggerCube,(Object *)pIVar6,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pSVar1 = TM::TM__(StringLiteral_Team_Editor,(MethodInfo *)0x0);
    pSVar2 = TM::TM__(StringLiteral_This_object_allows_you_to_change,(MethodInfo *)0x0);
    pSVar3 = TM::TM__(StringLiteral_Modify_the_roles_of_your_teams__,(MethodInfo *)0x0);
    pIVar6 = (InventoryItem_ItemDescription *)func_?();
    InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
              (pIVar6,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MVWorldObjectDocumentationType,System::
    Object]::Dictionary_2_MVWorldObjectDocumentationType_System_Object__Add
              ((Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)this,
               MVWorldObjectDocumentationType__Enum_TeamEditor,(Object *)pIVar6,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pSVar1 = TM::TM__(StringLiteral_Crystal,(MethodInfo *)0x0);
    pSVar2 = TM::TM__(StringLiteral_Players_pick_these_up_to_get_pro,(MethodInfo *)0x0);
    pSVar3 = TM::TM__(StringLiteral_Use_this_to_reward_players_for_r,(MethodInfo *)0x0);
    pIVar6 = (InventoryItem_ItemDescription *)func_?();
    InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
              (pIVar6,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MVWorldObjectDocumentationType,System::
    Object]::Dictionary_2_MVWorldObjectDocumentationType_System_Object__Add
              ((Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)this,
               MVWorldObjectDocumentationType__Enum_GamePoint,(Object *)pIVar6,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pSVar1 = TM::TM__(StringLiteral_Crystal_Vein,(MethodInfo *)0x0);
    pSVar2 = TM::TM__(StringLiteral_Contains_lots_of_crystals__which,(MethodInfo *)0x0);
    pSVar3 = TM::TM__(StringLiteral_Use_this_to_reward_players_for_r,(MethodInfo *)0x0);
    pIVar6 = (InventoryItem_ItemDescription *)func_?();
    InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
              (pIVar6,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MVWorldObjectDocumentationType,System::
    Object]::Dictionary_2_MVWorldObjectDocumentationType_System_Object__Add
              ((Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)this,
               MVWorldObjectDocumentationType__Enum_GamePointChest,(Object *)pIVar6,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pSVar1 = TM::TM__(StringLiteral_Class,(MethodInfo *)0x0);
    pSVar2 = TM::TM__(StringLiteral_Allows_players_to_spawn_as_a_cla,(MethodInfo *)0x0);
    pSVar3 = TM::TM__(StringLiteral_Customize_different_Classes_with,(MethodInfo *)0x0);
    pIVar6 = (InventoryItem_ItemDescription *)func_?();
    InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor
              (pIVar6,pSVar1,pSVar2,pSVar3,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MVWorldObjectDocumentationType,System::
    Object]::Dictionary_2_MVWorldObjectDocumentationType_System_Object__Add
              ((Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)this,
               MVWorldObjectDocumentationType__Enum_AvatarClass,(Object *)pIVar6,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    TypeInfo__InventoryItem->static_fields->localItemDescriptionOverride = this;
    return;
  }
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* InventoryItem(Dictionary`2[System.Byte,System.Object]) */

void Assembly-CSharp.dll::InventoryItem::InventoryItem__ctor_1
               (InventoryItem *this,Dictionary_2_System_Byte_System_Object_ *data,MethodInfo *method
               )

{
  this_00 = data;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  if (data == (Dictionary_2_System_Byte_System_Object_ *)0x0) {
code_?:
    uVar1 = func_?(0);
code_?:
    func_?(uVar1);
  }
  else {
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
             Dictionary_2_System_Byte_System_Object__get_Item
                       (data,0x28,
                        MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                       );
    uVar1 = CONCAT44(TypeInfo__System__Int32,pOVar2);
    if (pOVar2 == (Object *)0x0) goto code_?;
    if ((pOVar2->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
    goto code_?;
    piVar3 = (int32_t *)func_?();
    (this->fields).itemID = *piVar3;
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
             Dictionary_2_System_Byte_System_Object__get_Item
                       (data,0x96,
                        MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                       );
    uVar1 = CONCAT44(TypeInfo__System__Int32,pOVar2);
    if (pOVar2 == (Object *)0x0) goto code_?;
    if ((pOVar2->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
    goto code_?;
    piVar3 = (int32_t *)func_?(pOVar2);
    (this->fields).itemCategoryID = *piVar3;
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
             Dictionary_2_System_Byte_System_Object__get_Item
                       (data,0x29,
                        MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                       );
    uVar1 = CONCAT44(TypeInfo__System__Int32,pOVar2);
    if (pOVar2 == (Object *)0x0) goto code_?;
    if ((pOVar2->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
    goto code_?;
    piVar3 = (int32_t *)func_?(pOVar2);
    (this->fields).itemTypeID = *piVar3;
    pSVar4 = (String *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
             Dictionary_2_System_Byte_System_Object__get_Item
                       (data,0x2a,
                        MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                       );
    pSVar5 = (String *)0x0;
    if (pSVar4 != (String *)0x0) {
      if (pSVar4->klass == TypeInfo__System__String) {
        pSVar5 = pSVar4;
      }
      pSVar6 = TypeInfo__System__String;
      if (pSVar5 == (String *)0x0) goto code_?;
    }
    (this->fields).name = pSVar5;
    unaff_EBX = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object__get_Item
                          (data,0x2b,
                           MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                          );
    data = (Dictionary_2_System_Byte_System_Object_ *)TypeInfo__System__Byte;
    if (unaff_EBX == (Object *)0x0) {
      pBVar7 = (Byte__Array *)0x0;
code_?:
      unaff_EBX = pOVar2;
      (this->fields).data = pBVar7;
      pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
               ::Dictionary_2_System_Byte_System_Object__get_Item
                         (this_00,0x2d,
                          MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                         );
      uVar1 = CONCAT44(TypeInfo__System__Int32,pOVar2);
      if (pOVar2 == (Object *)0x0) goto code_?;
      if ((pOVar2->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
        piVar3 = (int32_t *)func_?(pOVar2);
        (this->fields).slotPosition = *piVar3;
        pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                 Object]::Dictionary_2_System_Byte_System_Object__get_Item
                           (this_00,0x8a,
                            MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                           );
        uVar1 = CONCAT44(TypeInfo__System__Boolean,pOVar2);
        if (pOVar2 == (Object *)0x0) goto code_?;
        if ((pOVar2->klass->_0).element_class == (TypeInfo__System__Boolean->_0).element_class) {
          pbVar8 = (bool *)func_?(pOVar2);
          (this->fields).resellable = *pbVar8;
          pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                   Object]::Dictionary_2_System_Byte_System_Object__get_Item
                             (this_00,0x89,
                              MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                             );
          uVar1 = CONCAT44(TypeInfo__System__Int32,pOVar2);
          if (pOVar2 == (Object *)0x0) goto code_?;
          if ((pOVar2->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
            piVar3 = (int32_t *)func_?(pOVar2);
            (this->fields).authorProfileID = *piVar3;
            pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                     Object]::Dictionary_2_System_Byte_System_Object__get_Item
                               (this_00,0x8b,
                                MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                               );
            uVar1 = CONCAT44(TypeInfo__System__Int32,pOVar2);
            if (pOVar2 == (Object *)0x0) goto code_?;
            if ((pOVar2->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
              piVar3 = (int32_t *)func_?(pOVar2);
              (this->fields).originalItemID = *piVar3;
              pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System
                       ::Object]::Dictionary_2_System_Byte_System_Object__get_Item
                                 (this_00,0x45,
                                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                                 );
              uVar1 = CONCAT44(TypeInfo__System__Int32,pOVar2);
              if (pOVar2 == (Object *)0x0) goto code_?;
              if ((pOVar2->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class)
              {
                piVar3 = (int32_t *)func_?(pOVar2);
                (this->fields).priceGold = *piVar3;
                (this->fields).isDefaultInvItem = 0;
                return;
              }
            }
          }
        }
      }
      goto code_?;
    }
    pBVar7 = (Byte__Array *)func_?(unaff_EBX,TypeInfo__System__Byte);
    if (pBVar7 != (Byte__Array *)0x0) goto code_?;
  }
  func_?(unaff_EBX,data);
  pSVar4 = extraout_ECX;
  pSVar6 = extraout_EDX;
code_?:
  func_?(pSVar4,pSVar6);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* InventoryItem(Int32, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::InventoryItem::InventoryItem__ctor_2
               (InventoryItem *this,int32_t itemID,
               Dictionary_2_System_Object_System_Object_ *itemData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = this;
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  (pIVar1->fields).itemID = itemID;
  this = (InventoryItem *)CONCAT13(0x70,this._0_3_);
  pTVar2 = (Type *)func_?(TypeInfo__System__Byte,(int)&this + 3);
  this_00 = itemData;
  if (itemData == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
  uStack_3 = (Byte__Class *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)itemData,pTVar2,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
  if (uStack_3 == (Byte__Class *)0x0) goto code_?;
  if ((((Pool *)uStack_3)->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class)
  {
    piVar4 = (int32_t *)func_?();
    (pIVar1->fields).itemCategoryID = *piVar4;
    uStack_3 = (Byte__Class *)&stack0xfffffffb;
    pTVar2 = (Type *)func_?(TypeInfo__System__Byte);
    uStack_3 = (Byte__Class *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         ((Dictionary_2_System_Type_Pool_ *)this_00,pTVar2,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
    if (uStack_3 == (Byte__Class *)0x0) goto code_?;
    if ((((Pool *)uStack_3)->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class
       ) goto code_?;
    piVar4 = (int32_t *)func_?();
    (pIVar1->fields).itemTypeID = *piVar4;
    uStack_3 = (Byte__Class *)&stack0xfffffffa;
    pTVar2 = (Type *)func_?(TypeInfo__System__Byte);
    pPVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)this_00,pTVar2,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    pPVar6 = (Pool *)0x0;
    if (pPVar5 == (Pool *)0x0) {
code_?:
      (pIVar1->fields).name = (String *)pPVar6;
      this = (InventoryItem *)&stack0xfffffff9;
      pTVar2 = (Type *)func_?();
      pPVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         ((Dictionary_2_System_Type_Pool_ *)this_00,pTVar2,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      pPVar6 = (Pool *)0x0;
      if (pPVar5 != (Pool *)0x0) {
        if ((String__Class *)pPVar5->klass == TypeInfo__System__String) {
          pPVar6 = pPVar5;
        }
        if (pPVar6 == (Pool *)0x0) goto code_?;
      }
      (pIVar1->fields).description = (String *)pPVar6;
      this = (InventoryItem *)&stack0xfffffff8;
      pTVar2 = (Type *)func_?();
      uStack_3 = (Byte__Class *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                 Dictionary_2_System_Type_Pool__get_Item
                           ((Dictionary_2_System_Type_Pool_ *)this_00,pTVar2,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
      if (uStack_3 == (Byte__Class *)0x0) goto code_?;
      if ((((Pool *)uStack_3)->klass->_0).element_class ==
          (TypeInfo__System__Boolean->_0).element_class) {
        pbVar7 = (bool *)func_?();
        (pIVar1->fields).resellable = *pbVar7;
        uStack_3._0_3_ = (int3)&uStack_3 + 3;
        uStack_3 = (Byte__Class *)CONCAT13(0x4b,(int3)uStack_3);
        pTVar2 = (Type *)func_?(TypeInfo__System__Byte);
        uStack_3 = (Byte__Class *)
                   mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                   Dictionary_2_System_Type_Pool__get_Item
                             ((Dictionary_2_System_Type_Pool_ *)this_00,pTVar2,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             );
        if (uStack_3 == (Byte__Class *)0x0) goto code_?;
        if ((((Pool *)uStack_3)->klass->_0).element_class ==
            (TypeInfo__System__Int32->_0).element_class) {
          piVar4 = (int32_t *)func_?();
          (pIVar1->fields).priceGold = *piVar4;
          uStack_3._3_1_ = (undefined1)((uint)((int)&uStack_3 + 2) >> 0x18);
          uStack_3._0_2_ = (undefined2)((int)&uStack_3 + 2);
          uStack_3._0_3_ = CONCAT12(0x68,(undefined2)uStack_3);
          pTVar2 = (Type *)func_?(TypeInfo__System__Byte);
          uStack_3 = (Byte__Class *)
                     mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                     Dictionary_2_System_Type_Pool__get_Item
                               ((Dictionary_2_System_Type_Pool_ *)this_00,pTVar2,
                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                               );
          if (uStack_3 == (Byte__Class *)0x0) goto code_?;
          if ((((Pool *)uStack_3)->klass->_0).element_class ==
              (TypeInfo__System__Int32->_0).element_class) {
            piVar4 = (int32_t *)func_?();
            (pIVar1->fields).shopInventoryID = *piVar4;
            uStack_3._2_2_ = (undefined2)((uint)((int)&uStack_3 + 1) >> 0x10);
            uStack_3._0_2_ = CONCAT11(0x66,(char)((int)&uStack_3 + 1));
            pTVar2 = (Type *)func_?(TypeInfo__System__Byte);
            uStack_3 = (Byte__Class *)
                       mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                       Dictionary_2_System_Type_Pool__get_Item
                                 ((Dictionary_2_System_Type_Pool_ *)this_00,pTVar2,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                 );
            if (uStack_3 == (Byte__Class *)0x0) goto code_?;
            if ((((Pool *)uStack_3)->klass->_0).element_class ==
                (TypeInfo__System__Int32->_0).element_class) {
              piVar4 = (int32_t *)func_?();
              (pIVar1->fields).authorProfileID = *piVar4;
              uStack_3 = (Byte__Class *)CONCAT31((int3)((uint)&uStack_3 >> 8),0x6a);
              pTVar2 = (Type *)func_?(TypeInfo__System__Byte);
              uStack_3 = (Byte__Class *)
                         mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]
                         ::Dictionary_2_System_Type_Pool__get_Item
                                   ((Dictionary_2_System_Type_Pool_ *)this_00,pTVar2,
                                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                   );
              if (uStack_3 == (Byte__Class *)0x0) goto code_?;
              if ((((Pool *)uStack_3)->klass->_0).element_class ==
                  (TypeInfo__System__Int32->_0).element_class) {
                piVar4 = (int32_t *)func_?();
                (pIVar1->fields).originalItemID = *piVar4;
                uStack_3 = (Byte__Class *)&stack0xfffffff3;
                pTVar2 = (Type *)func_?(CONCAT13(0x69,(int3)TypeInfo__System__Byte));
                uStack_3 = (Byte__Class *)
                           mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                           Type,Pool]::Dictionary_2_System_Type_Pool__get_Item
                                     ((Dictionary_2_System_Type_Pool_ *)this_00,pTVar2,
                                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                     );
                if (uStack_3 == (Byte__Class *)0x0) goto code_?;
                if ((((Pool *)uStack_3)->klass->_0).element_class ==
                    (TypeInfo__System__Boolean->_0).element_class) {
                  pbVar7 = (bool *)func_?();
                  bVar8 = *pbVar7;
                  (pIVar1->fields).isDeleted = bVar8;
                  if (bVar8 == 0) {
                    uStack_3 = (Byte__Class *)((int)&this + 3);
                    this = (InventoryItem *)CONCAT13(0xb,this._0_3_);
                    pTVar2 = (Type *)func_?(TypeInfo__System__Byte);
                    unaff_EBX = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                Type,Pool]::Dictionary_2_System_Type_Pool__get_Item
                                          ((Dictionary_2_System_Type_Pool_ *)this_00,pTVar2,
                                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                          );
                    itemID = (int32_t)TypeInfo__System__Byte;
                    if (unaff_EBX == (Pool *)0x0) {
                      pBVar9 = (Byte__Array *)0x0;
                    }
                    else {
                      uStack_3 = (Byte__Class *)TypeInfo__System__Byte;
                      pBVar9 = (Byte__Array *)func_?(unaff_EBX);
                      if (pBVar9 == (Byte__Array *)0x0) goto code_?;
                    }
                    (pIVar1->fields).data = pBVar9;
                  }
                  this = (InventoryItem *)CONCAT13(0x89,this._0_3_);
                  uStack_3 = TypeInfo__System__Byte;
                  pTVar2 = (Type *)func_?();
                  uStack_3 = (Byte__Class *)
                             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                             Type,Pool]::Dictionary_2_System_Type_Pool__get_Item
                                       ((Dictionary_2_System_Type_Pool_ *)this_00,pTVar2,
                                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                       );
                  if (uStack_3 == (Byte__Class *)0x0) goto code_?;
                  if ((((Pool *)uStack_3)->klass->_0).element_class ==
                      (TypeInfo__System__Boolean->_0).element_class) {
                    pbVar7 = (bool *)func_?();
                    (pIVar1->fields).isDefaultInvItem = *pbVar7;
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
      if ((String__Class *)pPVar5->klass == TypeInfo__System__String) {
        pPVar6 = pPVar5;
      }
      if (pPVar6 != (Pool *)0x0) goto code_?;
code_?:
      this = (InventoryItem *)TypeInfo__System__String;
      func_?();
code_?:
      uStack_3 = (Byte__Class *)itemID;
      uStack_3 = (Byte__Class *)func_?(unaff_EBX);
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* InventoryItem(ShopItem) */

void Assembly-CSharp.dll::InventoryItem::InventoryItem__ctor_3
               (InventoryItem *this,ShopItem *itemToCopy,MethodInfo *method)

{
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  if (itemToCopy != (ShopItem *)0x0) {
    (this->fields).itemCategoryID = (itemToCopy->fields).itemCategoryID;
    (this->fields).itemTypeID = (itemToCopy->fields).itemTypeID;
    (this->fields).name = (itemToCopy->fields).name;
    (this->fields).description = (itemToCopy->fields).description;
    (this->fields).resellable = (itemToCopy->fields).resellable;
    (this->fields).priceGold = (itemToCopy->fields).priceGold;
    (this->fields).data = (itemToCopy->fields).data;
    (this->fields).itemID = (itemToCopy->fields).itemID;
    (this->fields).isDeleted = 0;
    (this->fields).isDefaultInvItem = 0;
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

