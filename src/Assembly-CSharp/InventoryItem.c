
/* Void ApplyLocalDescriptionOverride(MVWorldObjectDocumentationType) */

void Assembly-CSharp.dll::InventoryItem::InventoryItem_ApplyLocalDescriptionOverride
               (InventoryItem *this,MVWorldObjectDocumentationType__Enum t,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__ContainsKey_MVWorldObjectDocumentationType_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__get_Item_MVWorldObjectDocumentationType_
                   );
    func_?(&TypeInfo__InventoryItem);
    cRam_? = '\x01';
  }
  if ((TypeInfo__InventoryItem->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__InventoryItem);
  }
  pDVar1 = TypeInfo__InventoryItem->static_fields->localItemDescriptionOverride;
  if (pDVar1 != (Dictionary_2_MVWorldObjectDocumentationType_InventoryItem_ItemDescription_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
            Single]::Dictionary_2_System_Int32Enum_System_Single__ContainsKey
                      ((Dictionary_2_System_Int32Enum_System_Single_ *)pDVar1,t,
                       MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__ContainsKey_MVWorldObjectDocumentationType_
                      );
    if (bVar2 == 0) {
      return;
    }
    if ((TypeInfo__InventoryItem->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pDVar1 = TypeInfo__InventoryItem->static_fields->localItemDescriptionOverride;
    if ((pDVar1 != (Dictionary_2_MVWorldObjectDocumentationType_InventoryItem_ItemDescription_ *)0x0
        ) && (pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Int32Enum,System::Object]::
                       Dictionary_2_System_Int32Enum_System_Object__get_Item
                                 ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,t,
                                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__get_Item_MVWorldObjectDocumentationType_
                                 ), pOVar3 != (Object *)0x0)) {
      *(undefined4 *)(unaff_EDI + 0x14) = pOVar3[1].klass;
      func_?((undefined4 *)(unaff_EDI + 0x14));
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pSVar4 = mscorlib.dll::System::String::String_Concat_4
                         ((String *)pOVar3[1].monitor,StringLiteral_u000Au000A,
                          (String *)pOVar3[2].klass,(MethodInfo *)0x0);
      *(undefined4 *)(unaff_EDI + 0x18) = pSVar4;
      func_?((undefined4 *)(unaff_EDI + 0x18));
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* InventoryItem() */

void Assembly-CSharp.dll::InventoryItem::InventoryItem__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>
                   );
    func_?(&TypeInfo__InventoryItem);
    func_?(&TypeInfo__InventoryItem__ItemDescription);
    func_?(&StringLiteral_A_handful_of_ninja_shurikens_);
    func_?(&StringLiteral_Cube_Model_Transparency);
    func_?(&StringLiteral_Revolver);
    func_?(&StringLiteral_Vertical_Rotator);
    func_?(&StringLiteral_Use_this_in_close_quarters_to_de);
    func_?(&StringLiteral_Can_be_used_as_a_challenging_way);
    func_?(&StringLiteral_Trigger_Cube);
    func_?(&StringLiteral_A_pair_of_connected_teleporters_);
    func_?(&StringLiteral_A_sentry_tower__shooting_a_beam_);
    func_?(&StringLiteral_Fire_sentries_serve_as_stationar);
    func_?(&StringLiteral_A_customizable_hovercraft_);
    func_?(&StringLiteral_Switches_between_ON_and_OFF_each);
    func_?(&StringLiteral_Make_a_game_where_you_have_to_pi);
    func_?(&StringLiteral_This_scary_monster_can_move_thro);
    func_?(&StringLiteral_Frost_Sentry_Tower);
    func_?(&StringLiteral_Team_Editor);
    func_?(&StringLiteral_Negate_Cube);
    func_?(&StringLiteral_Game_Objective__Eliminate_the_Oc);
    func_?(&StringLiteral_The_player_team_who_first_collec);
    func_?(&StringLiteral_Adjust_the_level_and_color_of_yo);
    func_?(&StringLiteral_Contains_lots_of_coins__which_ca);
    func_?(&StringLiteral_Wind_Turbine);
    func_?(&StringLiteral_Use_this_by_connecting_it_to_a_p);
    func_?(&StringLiteral_This_can_be_used_to_make_a_bette);
    func_?(&StringLiteral_Class);
    func_?(&StringLiteral_Shuriken);
    func_?(&StringLiteral_Text);
    func_?(&StringLiteral_The_bazooka_is_incredibly_powerf);
    func_?(&StringLiteral_This_is_really_neat_when_you_wan);
    func_?(&StringLiteral_Become_one_with_the_shadows_usin);
    func_?(&StringLiteral_Light_Cube);
    func_?(&StringLiteral_Green_Team_Spawn_Point);
    func_?(&StringLiteral_A_sliding_door_that_can_be_opene);
    func_?(&StringLiteral_Crystal_Vein);
    func_?(&StringLiteral_Allows_for_scripted_events_in_a_);
    func_?(&StringLiteral_Records_the_time_it_took_for_a_p);
    func_?(&StringLiteral_Adds_a_global_sound_to_the_game_);
    func_?(&StringLiteral_A_modifiable_projectile_weapon_);
    func_?(&StringLiteral_This_logic_cube_sends_signals_in);
    func_?(&StringLiteral_Great_cube_if_you_want_to_obstru);
    func_?(&StringLiteral_Pressure_Plate);
    func_?(&StringLiteral_Platform);
    func_?(&StringLiteral_Counting_Cube);
    func_?(&StringLiteral_Allows_players_to_spawn_as_a_cla);
    func_?(&StringLiteral_Speaker);
    func_?(&StringLiteral_And_Cube);
    func_?(&StringLiteral_Shotgun);
    func_?(&StringLiteral_Global_Speaker);
    func_?(&StringLiteral_Fire_Sentry_Tower);
    func_?(&StringLiteral_Shoots_cubes_that_stick_to_surfa);
    func_?(&StringLiteral_This_rifle_is_at_its_best_in_clo);
    func_?(&StringLiteral_Can_be_used_for_everything_from_);
    func_?(&StringLiteral_Modify_the_roles_of_your_teams__);
    func_?(&StringLiteral_Light_up_the_dark_areas_of_your_);
    func_?(&StringLiteral_Random_Cube);
    func_?(&StringLiteral_A_high_powered_revolver_);
    func_?(&StringLiteral_Change_the_transparency_for_a_cu);
    func_?(&StringLiteral_Bazooka);
    func_?(&StringLiteral_Infuses_the_player_with_lightnin);
    func_?(&StringLiteral_The_team_or_player_that_reaches_);
    func_?(&StringLiteral_Collect_all_these_sparkly_trinke);
    func_?(&StringLiteral_WARNING__KoGaMians_cannot_breath);
    func_?(&StringLiteral_A_fully_automatic_rifle_capable_);
    func_?(&StringLiteral_Horizontal_Rotator);
    func_?(&StringLiteral_Toggle_Cube);
    func_?(&StringLiteral_Whenever_a_player_steps_on_the_p);
    func_?(&StringLiteral_Spawn_point_for_the_green_team__);
    func_?(&StringLiteral_Devastating_when_used_at_long_ra);
    func_?(&StringLiteral_Hides_connected_cube_model_when_);
    func_?(&StringLiteral_This_enables_players_to_cross_lo);
    func_?(&StringLiteral_Players_pick_these_up_to_pay_for);
    func_?(&StringLiteral_Flamethrower);
    func_?(&StringLiteral_Costume);
    func_?(&StringLiteral_Display_a_game_title__help_text_);
    func_?(&StringLiteral_A_pair_of_high_powered_revolvers);
    func_?(&StringLiteral_Trap_Door);
    func_?(&StringLiteral_Powers_one_connected_object_at_r);
    func_?(&StringLiteral_Growth_Pill);
    func_?(&StringLiteral_Skybox_Cube);
    func_?(&StringLiteral_Equip_this_to_blend_into_the_env);
    func_?(&StringLiteral_An_equippable_costume_);
    func_?(&StringLiteral_Enables_players_to_traverse_grea);
    func_?(&StringLiteral_This_burns_anyone_who_gets_too_c);
    func_?(&StringLiteral_A_weapon_designed_for_close_quar);
    func_?(&StringLiteral_Flags_are_a_great_way_to_give_pl);
    func_?(&StringLiteral_Impulse_Gun);
    func_?(&StringLiteral_A_big_customizable_jetpack_);
    func_?(&StringLiteral_A_gun_generating_a_powerful_forc);
    func_?(&StringLiteral_Spawn_point_for_the_yellow_team_);
    func_?(&StringLiteral_Set_a_player_kill_limit_for_your);
    func_?(&StringLiteral_Melee_Weapon);
    func_?(&StringLiteral_The_health_pack_fully_heals_a_pl);
    func_?(&StringLiteral_You_can_put_these_in_sequence_to);
    func_?(&StringLiteral_An_unkillable_ghost_which_damage);
    func_?(&StringLiteral_Cube_Model_Hider);
    func_?(&StringLiteral_A_pair_consisting_of_a_pickup_an);
    func_?(&StringLiteral_Throw_a_line_of_shurikens__and_s);
    func_?(&StringLiteral_Red_Team_Spawn_Point);
    func_?(&StringLiteral_This_jetpack_offers_unprecedente);
    func_?(&StringLiteral_Frost_sentries_serve_as_stationa);
    func_?(&StringLiteral_Make_your_enemies_bigger_targets);
    func_?(&StringLiteral_Coin_Chest);
    func_?(&StringLiteral_Don_t_let_your_friends_die__shoo);
    func_?(&StringLiteral_Water_Cube);
    func_?(&StringLiteral_Infuses_the_player_with_mutageni);
    func_?(&StringLiteral_A_pistol_that_shrinks_the_target);
    func_?(&StringLiteral_Round_cubes_are_a_great_if_your_);
    func_?(&StringLiteral_Use_this_to_make_an_animated_doo);
    func_?(&StringLiteral_Custom_Gun);
    func_?(&StringLiteral_Useful_when_bridging_the_gap_bet);
    func_?(&StringLiteral_This_is_useful_if_you_want_to_cr);
    func_?(&StringLiteral_A_custom_cube_model__that_rotate);
    func_?(&StringLiteral_The_player_who_reaches_the_flag_);
    func_?(&StringLiteral_Spawn_point_for_the_blue_team__P);
    func_?(&StringLiteral_Transforms_the_target_into_a_gia);
    func_?(&StringLiteral_Create_elevators_or_platforms_wi);
    func_?(&StringLiteral_A_trap_door_that_can_be_opened_b);
    func_?(&StringLiteral_Mutanto);
    func_?(&StringLiteral_Sends_a_signal_when_shot_);
    func_?(&StringLiteral_Become_a_miniature_version_of_yo);
    func_?(&StringLiteral_These_hideous_creatures_only_hav);
    func_?(&StringLiteral_Sends_a_signal_when_pulled_);
    func_?(&StringLiteral_Heal_Ray);
    func_?(&StringLiteral_Open_doors__trigger_explosives__);
    func_?(&StringLiteral_Connect_this_to_an_toggle_box_fo);
    func_?(&StringLiteral_Mouse_Pill);
    func_?(&StringLiteral_A_bundle_of_dynamite_that_will_e);
    func_?(&StringLiteral_Useful_for_separating_different_);
    func_?(&StringLiteral_A_classic_ninja_shuriken_);
    func_?(&StringLiteral_A_giant_hamster_ball_);
    func_?(&StringLiteral_Camera_Cube);
    func_?(&StringLiteral_The_And_Cube_takes_several_input);
    func_?(&StringLiteral_Door);
    func_?(&StringLiteral_Turn_enemy_players_into_helpless);
    func_?(&StringLiteral_A_rocket_launcher_with_devastati);
    func_?(&StringLiteral_Collect_And_Drop);
    func_?(&StringLiteral_Set_a_time_limit_for_a_round__Af);
    func_?(&StringLiteral_Sneak_up_on_your_enemies_to_catc);
    func_?(&StringLiteral_A_fully_customizable_projectile_);
    func_?(&StringLiteral_Yellow_Team_Spawn_Point);
    func_?(&StringLiteral_If_you_want_players_to_stand_on_);
    func_?(&StringLiteral_A_logic_object_which_sends_the_o);
    func_?(&StringLiteral_Round_Time);
    func_?(&StringLiteral_A_colored_light__that_can_be_con);
    func_?(&StringLiteral_Game_Objective__Time_Attack_Flag);
    func_?(&StringLiteral_The_sniper_rifle_uses_a_charged_);
    func_?(&StringLiteral_Ghost);
    func_?(&StringLiteral_A_player_who_reaches_this_will_r);
    func_?(&StringLiteral_Hovercraft);
    func_?(&StringLiteral_This_looks_super_cool_and_can_be);
    func_?(&StringLiteral_Shrinks_a_player_to_the_size_of_);
    func_?(&StringLiteral_A_custom_cube_model__that_rotate);
    func_?(&StringLiteral_Oculus);
    func_?(&StringLiteral_A_classic__Burn_everything_withi);
    func_?(&StringLiteral_Do_you_want_to_open_and_close_th);
    func_?(&StringLiteral_Light_your_enemies_on_fire_with_);
    func_?(&StringLiteral_Coin);
    func_?(&StringLiteral_Blue_Team_Spawn_Point);
    func_?(&StringLiteral_Mouse_Gun);
    func_?(&StringLiteral_Transforms_a_player_into_a_giant);
    func_?(&StringLiteral_Change_transparency_to_cube_mode);
    func_?(&StringLiteral_Set_a_Oculus_kill_limit_for_your);
    func_?(&StringLiteral_Lets_players_take_their_time_rea);
    func_?(&StringLiteral_A_big_fan__which_blows_players_a);
    func_?(&StringLiteral_An_object_enabling_you_to_displa);
    func_?(&StringLiteral_Dragonfly_Jetpack);
    func_?(&StringLiteral_A_gun_modeled_after_the_classic_);
    func_?(&StringLiteral_Place_this_after_difficult_parts);
    func_?(&StringLiteral_Use_this_to_reward_players_for_r);
    func_?(&StringLiteral_Become_a_super_hero__or_super_vi);
    func_?(&StringLiteral_Game_Objective__Flag);
    func_?(&StringLiteral_Sliding_Door);
    func_?(&StringLiteral_Spawn_point_for_the_red_team__Pl);
    func_?(&StringLiteral_Pulse_Cube);
    func_?(&StringLiteral_Dual_Revolvers);
    func_?(&StringLiteral_Can_be_used_to_open_doors_or_sec);
    func_?(&StringLiteral_Vehicle_Energy);
    func_?(&StringLiteral_Lever);
    func_?(&StringLiteral_An_object_specifying_the_distanc);
    func_?(&StringLiteral_This_bouncy_ball_offers_a_hilari);
    func_?(&StringLiteral_A_small_customizable_jetpack_);
    func_?(&StringLiteral_Reward_players_with_coins_used_t);
    func_?(&StringLiteral_A_door_that_can_be_opened_by_a_s);
    func_?(&StringLiteral_Multi_Shuriken);
    func_?(&StringLiteral_Emits_a_cloud_of_smoke__The_smok);
    func_?(&StringLiteral_Lightning_Speed);
    func_?(&StringLiteral_Target_Cube);
    func_?(&StringLiteral_Become_a_giant_KoGaMian__capable);
    func_?(&StringLiteral_Growth_Gun);
    func_?(&StringLiteral_This_is_a_great_way_to_control_t);
    func_?(&StringLiteral_Set_a_count__Each_time_the_cube_);
    func_?(&StringLiteral_This_is_most_commonly_used_to_en);
    func_?(&StringLiteral_Machine_Gun);
    func_?(&StringLiteral_Delay_Cube);
    func_?(&StringLiteral_Cube_Gun);
    func_?(&StringLiteral_Crystal);
    func_?(&StringLiteral_Checkpoint);
    func_?(&StringLiteral_Useful_for_pushing_players_off_p);
    func_?(&StringLiteral_Fire);
    func_?(&StringLiteral_Hamster_Ball);
    func_?(&StringLiteral_Contains_lots_of_crystals__which);
    func_?(&StringLiteral_While_a_player_is_inside_the_are);
    func_?(&StringLiteral_You_can_stack_several_wind_turbi);
    func_?(&StringLiteral_Explosive);
    func_?(&::StringLiteral__);
    func_?(&StringLiteral_Use_this_to_make_an_animated_tra);
    func_?(&StringLiteral_Add_this_to_create_a_death_match);
    func_?(&StringLiteral_Firefly_Jetpack);
    func_?(&StringLiteral_This_is_great_for_creating_the_a);
    func_?(&StringLiteral_Game_Objective__Star);
    func_?(&StringLiteral_Teleporter);
    func_?(&StringLiteral_When_receiving_a_signal_from_ano);
    func_?(&StringLiteral_Use_this_to_make_an_animated_sli);
    func_?(&StringLiteral_This_gun_has_a_very_high_recoil_);
    func_?(&StringLiteral_This_object_allows_you_to_change);
    func_?(&StringLiteral_Most_effective_in_mid_to_long_ra);
    func_?(&StringLiteral_Build_awesome_towers__thick_cast);
    func_?(&StringLiteral_Rail_Gun);
    func_?(&StringLiteral_Adding_this_to_your_project_will);
    func_?(&StringLiteral_Inverting_a_signal_open_up_many_);
    func_?(&StringLiteral_Can_be_used_to_refill_vehicles_e);
    func_?(&StringLiteral_Customize_different_Classes_with);
    func_?(&StringLiteral_Add_sounds_to_your_game__There_s);
    func_?(&StringLiteral_Game_Objective__Death_match);
    func_?(&StringLiteral_A_sentry_tower__shooting_fire_at);
    func_?(&StringLiteral_This_is_a_must_have_for_any_leve);
    func_?(&StringLiteral_You_can_pair_this_with_the_Smoke);
    func_?(&StringLiteral_Players_pick_these_up_to_get_pro);
    func_?(&StringLiteral_Smoke);
    func_?(&StringLiteral_Soar_to_the_skies_with_this_ligh);
    func_?(&StringLiteral_Shoots_a_ray_that_heals_people__);
    func_?(&StringLiteral_Manage_the_look_of_your_game_by_);
    func_?(&StringLiteral_Health_Pack);
    func_?(&StringLiteral_A_customizable_monster_from_anot);
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
         func_?(
                        TypeInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>
                        );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this,
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Dictionary__
            );
  pSVar1 = TM::TM__(StringLiteral_Health_Pack,(MethodInfo *)0x0);
  pSVar2 = TM::TM__(StringLiteral_The_health_pack_fully_heals_a_pl,(MethodInfo *)0x0);
  pSVar3 = TM::TM__(StringLiteral_Place_this_after_difficult_parts,(MethodInfo *)0x0);
  uVar4 = 0;
  pIVar5 = (InventoryItem_ItemDescription *)
           func_?(TypeInfo__InventoryItem__ItemDescription);
  cameraPreviewerOffset_08.y = (float)uVar4;
  cameraPreviewerOffset_08.x = (float)uVar4;
  cameraPreviewerOffset_08.z = 0.0;
  InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor_1
            (pIVar5,pSVar1,pSVar2,pSVar3,cameraPreviewerOffset_08,(MethodInfo *)0x0);
  if (this != (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this,1,(Object *)pIVar5,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pOVar6 = (Object__Class *)TM::TM__(StringLiteral_Machine_Gun,(MethodInfo *)0x0);
    pSVar2 = TM::TM__(StringLiteral_A_fully_automatic_rifle_capable_,(MethodInfo *)0x0);
    pOVar7 = (Object__Class *)
             TM::TM__(StringLiteral_This_rifle_is_at_its_best_in_clo,(MethodInfo *)0x0);
    pIVar8 = TypeInfo__InventoryItem__ItemDescription;
    pOVar9 = (Object *)func_?();
    *(ulonglong *)&pOVar9[2].monitor = CONCAT44(this,this);
    pOVar9[3].monitor = (MonitorData *)0x0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar9,ExceptionArgument__Enum_obj,(MethodInfo *)pIVar8);
    pOVar9[1].klass = pOVar6;
    func_?(pOVar9 + 1,pOVar6);
    pOVar9[1].monitor = (MonitorData *)pSVar2;
    func_?(&pOVar9[1].monitor);
    pOVar9[2].klass = pOVar7;
    func_?(pOVar9 + 2,pOVar7);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)0x2,2,pOVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pDVar10 = (Dictionary_2_MVWorldObjectDocumentationType_InventoryItem_ItemDescription___Class *)
             TM::TM__(StringLiteral_Impulse_Gun,(MethodInfo *)0x0);
    pSVar1 = TM::TM__(StringLiteral_A_gun_generating_a_powerful_forc,(MethodInfo *)0x0);
    pOVar6 = (Object__Class *)
             TM::TM__(StringLiteral_This_gun_has_a_very_high_recoil_,(MethodInfo *)0x0);
    pIVar8 = TypeInfo__InventoryItem__ItemDescription;
    pOVar9 = (Object *)func_?();
    *(ulonglong *)&pOVar9[2].monitor = CONCAT44(pSVar2,pSVar2);
    pOVar9[3].monitor = (MonitorData *)0x0;
    puVar11 = &UNK_?;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar9,ExceptionArgument__Enum_obj,(MethodInfo *)pIVar8);
    this_00 = (Dictionary_2_MVWorldObjectDocumentationType_InventoryItem_ItemDescription_ *)
              (puVar11 + 8);
    this_00->klass = pDVar10;
    pOVar9 = (Object *)&UNK_?;
    func_?(this_00,pDVar10);
    ppMStack12 = &pOVar9[1].monitor;
    *ppMStack12 = (MonitorData *)pSVar1;
    pSStack13 = pSVar1;
    func_?();
    pOStack14 = pOVar9 + 2;
    pOStack14->klass = pOVar6;
    pOStack15 = pOVar6;
    func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,3,pOVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pOVar6 = (Object__Class *)TM::TM__(StringLiteral_Bazooka,(MethodInfo *)0x0);
    pSVar1 = TM::TM__(StringLiteral_A_rocket_launcher_with_devastati,(MethodInfo *)0x0);
    pOVar7 = (Object__Class *)
             TM::TM__(StringLiteral_The_bazooka_is_incredibly_powerf,(MethodInfo *)0x0);
    pIVar8 = TypeInfo__InventoryItem__ItemDescription;
    pOVar9 = (Object *)func_?();
    *(ulonglong *)&pOVar9[2].monitor = CONCAT44(pSVar2,pSVar2);
    pOVar9[3].monitor = (MonitorData *)0x0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar9,ExceptionArgument__Enum_obj,(MethodInfo *)pIVar8);
    pOStack16 = pOVar9 + 1;
    pOStack16->klass = pOVar6;
    func_?();
    ppMStack17 = &pOVar9[1].monitor;
    *ppMStack17 = (MonitorData *)pSVar1;
    pSStack18 = pSVar1;
    func_?();
    pOStack19 = pOVar9 + 2;
    pOStack19->klass = pOVar7;
    pOStack20 = pOVar7;
    func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,4,pOVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pOVar6 = (Object__Class *)TM::TM__(StringLiteral_Rail_Gun,(MethodInfo *)0x0);
    pSVar1 = TM::TM__(StringLiteral_The_sniper_rifle_uses_a_charged_,(MethodInfo *)0x0);
    pOVar7 = (Object__Class *)
             TM::TM__(StringLiteral_Devastating_when_used_at_long_ra,(MethodInfo *)0x0);
    pIVar8 = TypeInfo__InventoryItem__ItemDescription;
    pOVar9 = (Object *)func_?();
    *(ulonglong *)&pOVar9[2].monitor = CONCAT44(pSVar2,pSVar2);
    pOVar9[3].monitor = (MonitorData *)0x0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar9,ExceptionArgument__Enum_obj,(MethodInfo *)pIVar8);
    pOVar9[1].klass = pOVar6;
    func_?();
    ppMStack21 = &pOVar9[1].monitor;
    *ppMStack21 = (MonitorData *)pSVar1;
    pSStack22 = pSVar1;
    func_?();
    pOStack23 = pOVar9 + 2;
    pOStack23->klass = pOVar7;
    pOStack24 = pOVar7;
    func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,5,pOVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pOVar6 = (Object__Class *)TM::TM__(StringLiteral_Melee_Weapon,(MethodInfo *)0x0);
    pSVar1 = TM::TM__(StringLiteral_A_weapon_designed_for_close_quar,(MethodInfo *)0x0);
    pOVar7 = (Object__Class *)
             TM::TM__(StringLiteral_Sneak_up_on_your_enemies_to_catc,(MethodInfo *)0x0);
    pIVar8 = TypeInfo__InventoryItem__ItemDescription;
    pOVar9 = (Object *)func_?();
    *(ulonglong *)&pOVar9[2].monitor = CONCAT44(pSVar2,pSVar2);
    pOVar9[3].monitor = (MonitorData *)0x0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar9,ExceptionArgument__Enum_obj,(MethodInfo *)pIVar8);
    pOVar9[1].klass = pOVar6;
    func_?();
    ppMStack25 = &pOVar9[1].monitor;
    *ppMStack25 = (MonitorData *)pSVar1;
    pSStack26 = pSVar1;
    func_?();
    pOStack27 = pOVar9 + 2;
    pOStack27->klass = pOVar7;
    pOStack28 = pOVar7;
    func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,6,pOVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pOVar6 = (Object__Class *)TM::TM__(StringLiteral_Mutanto,(MethodInfo *)0x0);
    pSVar1 = TM::TM__(StringLiteral_Infuses_the_player_with_mutageni,(MethodInfo *)0x0);
    pOVar7 = (Object__Class *)
             TM::TM__(StringLiteral_Become_a_super_hero__or_super_vi,(MethodInfo *)0x0);
    pIVar8 = TypeInfo__InventoryItem__ItemDescription;
    pOVar9 = (Object *)func_?();
    *(ulonglong *)&pOVar9[2].monitor = CONCAT44(pSVar2,pSVar2);
    pOVar9[3].monitor = (MonitorData *)0x0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar9,ExceptionArgument__Enum_obj,(MethodInfo *)pIVar8);
    pOVar9[1].klass = pOVar6;
    func_?();
    ppMStack29 = &pOVar9[1].monitor;
    *ppMStack29 = (MonitorData *)pSVar1;
    pSStack30 = pSVar1;
    func_?();
    pOStack31 = pOVar9 + 2;
    pOStack31->klass = pOVar7;
    pOStack32 = pOVar7;
    func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,7,pOVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pOVar6 = (Object__Class *)TM::TM__(StringLiteral_Flamethrower,(MethodInfo *)0x0);
    pSVar1 = TM::TM__(StringLiteral_A_classic__Burn_everything_withi,(MethodInfo *)0x0);
    pOVar7 = (Object__Class *)
             TM::TM__(StringLiteral_Light_your_enemies_on_fire_with_,(MethodInfo *)0x0);
    pIVar8 = TypeInfo__InventoryItem__ItemDescription;
    pOVar9 = (Object *)func_?();
    *(ulonglong *)&pOVar9[2].monitor = CONCAT44(pSVar2,pSVar2);
    pOVar9[3].monitor = (MonitorData *)0x0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar9,ExceptionArgument__Enum_obj,(MethodInfo *)pIVar8);
    pOVar9[1].klass = pOVar6;
    func_?();
    ppMStack33 = &pOVar9[1].monitor;
    *ppMStack33 = (MonitorData *)pSVar1;
    pSStack34 = pSVar1;
    func_?();
    pOStack35 = pOVar9 + 2;
    pOStack35->klass = pOVar7;
    pOStack36 = pOVar7;
    func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,8,pOVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pOVar6 = (Object__Class *)TM::TM__(StringLiteral_Shotgun,(MethodInfo *)0x0);
    pSVar1 = TM::TM__(StringLiteral_A_gun_modeled_after_the_classic_,(MethodInfo *)0x0);
    pOVar7 = (Object__Class *)
             TM::TM__(StringLiteral_Use_this_in_close_quarters_to_de,(MethodInfo *)0x0);
    pIVar8 = TypeInfo__InventoryItem__ItemDescription;
    pOVar9 = (Object *)func_?();
    *(ulonglong *)&pOVar9[2].monitor = CONCAT44(pSVar2,pSVar2);
    pOVar9[3].monitor = (MonitorData *)0x0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar9,ExceptionArgument__Enum_obj,(MethodInfo *)pIVar8);
    pOVar9[1].klass = pOVar6;
    func_?();
    ppMStack37 = &pOVar9[1].monitor;
    *ppMStack37 = (MonitorData *)pSVar1;
    pSStack38 = pSVar1;
    func_?();
    pOStack39 = pOVar9 + 2;
    pOStack39->klass = pOVar7;
    pOStack40 = pOVar7;
    func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,9,pOVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pOVar6 = (Object__Class *)TM::TM__(StringLiteral_Game_Objective__Star,(MethodInfo *)0x0);
    pSVar1 = TM::TM__(StringLiteral_The_player_team_who_first_collec,(MethodInfo *)0x0);
    pOVar7 = (Object__Class *)
             TM::TM__(StringLiteral_Collect_all_these_sparkly_trinke,(MethodInfo *)0x0);
    pIVar8 = TypeInfo__InventoryItem__ItemDescription;
    pOVar9 = (Object *)func_?();
    *(ulonglong *)&pOVar9[2].monitor = CONCAT44(pSVar2,pSVar2);
    pOVar9[3].monitor = (MonitorData *)0x0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar9,ExceptionArgument__Enum_obj,(MethodInfo *)pIVar8);
    pOVar9[1].klass = pOVar6;
    func_?();
    ppMStack41 = &pOVar9[1].monitor;
    *ppMStack41 = (MonitorData *)pSVar1;
    pSStack42 = pSVar1;
    func_?();
    pOStack43 = pOVar9 + 2;
    pOStack43->klass = pOVar7;
    pOStack44 = pOVar7;
    func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,10,pOVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pOVar6 = (Object__Class *)TM::TM__(StringLiteral_Growth_Pill,(MethodInfo *)0x0);
    pSVar1 = TM::TM__(StringLiteral_Transforms_a_player_into_a_giant,(MethodInfo *)0x0);
    pOVar7 = (Object__Class *)
             TM::TM__(StringLiteral_Become_a_giant_KoGaMian__capable,(MethodInfo *)0x0);
    pIVar8 = TypeInfo__InventoryItem__ItemDescription;
    pOVar9 = (Object *)func_?();
    *(ulonglong *)&pOVar9[2].monitor = CONCAT44(pSVar2,pSVar2);
    pOVar9[3].monitor = (MonitorData *)0x0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar9,ExceptionArgument__Enum_obj,(MethodInfo *)pIVar8);
    pOVar9[1].klass = pOVar6;
    func_?();
    ppMStack45 = &pOVar9[1].monitor;
    *ppMStack45 = (MonitorData *)pSVar1;
    pSStack46 = pSVar1;
    func_?();
    pOStack47 = pOVar9 + 2;
    pOStack47->klass = pOVar7;
    pOStack48 = pOVar7;
    func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0xb,pOVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pOVar6 = (Object__Class *)TM::TM__(StringLiteral_Mouse_Pill,(MethodInfo *)0x0);
    pSVar1 = TM::TM__(StringLiteral_Shrinks_a_player_to_the_size_of_,(MethodInfo *)0x0);
    pOVar7 = (Object__Class *)
             TM::TM__(StringLiteral_Become_a_miniature_version_of_yo,(MethodInfo *)0x0);
    pIVar8 = TypeInfo__InventoryItem__ItemDescription;
    pOVar9 = (Object *)func_?();
    *(ulonglong *)&pOVar9[2].monitor = CONCAT44(pSVar2,pSVar2);
    pOVar9[3].monitor = (MonitorData *)0x0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar9,ExceptionArgument__Enum_obj,(MethodInfo *)pIVar8);
    pOVar9[1].klass = pOVar6;
    func_?();
    ppMStack49 = &pOVar9[1].monitor;
    *ppMStack49 = (MonitorData *)pSVar1;
    pSStack50 = pSVar1;
    func_?();
    pOStack51 = pOVar9 + 2;
    pOStack51->klass = pOVar7;
    pOStack52 = pOVar7;
    func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0xc,pOVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pOVar6 = (Object__Class *)TM::TM__(StringLiteral_Mouse_Gun,(MethodInfo *)0x0);
    pSVar1 = TM::TM__(StringLiteral_A_pistol_that_shrinks_the_target,(MethodInfo *)0x0);
    pOVar7 = (Object__Class *)
             TM::TM__(StringLiteral_Turn_enemy_players_into_helpless,(MethodInfo *)0x0);
    pIVar8 = TypeInfo__InventoryItem__ItemDescription;
    pOVar9 = (Object *)func_?();
    *(ulonglong *)&pOVar9[2].monitor = CONCAT44(pSVar2,pSVar2);
    pOVar9[3].monitor = (MonitorData *)0x0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar9,ExceptionArgument__Enum_obj,(MethodInfo *)pIVar8);
    pOVar9[1].klass = pOVar6;
    func_?();
    ppMStack53 = &pOVar9[1].monitor;
    *ppMStack53 = (MonitorData *)pSVar1;
    pSStack54 = pSVar1;
    func_?();
    pOStack55 = pOVar9 + 2;
    pOStack55->klass = pOVar7;
    pOStack56 = pOVar7;
    func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0xd,pOVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pOVar6 = (Object__Class *)TM::TM__(StringLiteral_Shuriken,(MethodInfo *)0x0);
    pSVar1 = TM::TM__(StringLiteral_A_classic_ninja_shuriken_,(MethodInfo *)0x0);
    pOVar7 = (Object__Class *)
             TM::TM__(StringLiteral_Become_one_with_the_shadows_usin,(MethodInfo *)0x0);
    pIVar8 = TypeInfo__InventoryItem__ItemDescription;
    pOVar9 = (Object *)func_?();
    *(ulonglong *)&pOVar9[2].monitor = CONCAT44(pSVar2,pSVar2);
    pOVar9[3].monitor = (MonitorData *)0x0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar9,ExceptionArgument__Enum_obj,(MethodInfo *)pIVar8);
    pOVar9[1].klass = pOVar6;
    func_?();
    pOVar9[1].monitor = (MonitorData *)pSVar1;
    func_?();
    pOVar9[2].klass = pOVar7;
    func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0xe,pOVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pOVar6 = (Object__Class *)TM::TM__(StringLiteral_Multi_Shuriken,(MethodInfo *)0x0);
    pSVar1 = TM::TM__(StringLiteral_A_handful_of_ninja_shurikens_,(MethodInfo *)0x0);
    pOVar7 = (Object__Class *)
             TM::TM__(StringLiteral_Throw_a_line_of_shurikens__and_s,(MethodInfo *)0x0);
    pIVar8 = TypeInfo__InventoryItem__ItemDescription;
    pOVar9 = (Object *)func_?();
    *(ulonglong *)&pOVar9[2].monitor = CONCAT44(pSVar2,pSVar2);
    pOVar9[3].monitor = (MonitorData *)0x0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar9,ExceptionArgument__Enum_obj,(MethodInfo *)pIVar8);
    pOVar9[1].klass = pOVar6;
    func_?();
    pOVar9[1].monitor = (MonitorData *)pSVar1;
    func_?();
    pOVar9[2].klass = pOVar7;
    func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0xf,pOVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pOVar6 = (Object__Class *)TM::TM__(StringLiteral_Cube_Gun,(MethodInfo *)0x0);
    pSVar1 = TM::TM__(StringLiteral_Shoots_cubes_that_stick_to_surfa,(MethodInfo *)0x0);
    pOVar7 = (Object__Class *)
             TM::TM__(StringLiteral_Build_awesome_towers__thick_cast,(MethodInfo *)0x0);
    pIVar8 = TypeInfo__InventoryItem__ItemDescription;
    pOVar9 = (Object *)func_?();
    *(ulonglong *)&pOVar9[2].monitor = CONCAT44(pSVar2,pSVar2);
    pOVar9[3].monitor = (MonitorData *)0x0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar9,ExceptionArgument__Enum_obj,(MethodInfo *)pIVar8);
    pOVar9[1].klass = pOVar6;
    func_?();
    pOVar9[1].monitor = (MonitorData *)pSVar1;
    func_?();
    pOVar9[2].klass = pOVar7;
    func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0x10,pOVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pOVar6 = (Object__Class *)TM::TM__(StringLiteral_Coin,(MethodInfo *)0x0);
    pSVar1 = TM::TM__(StringLiteral_Players_pick_these_up_to_pay_for,(MethodInfo *)0x0);
    pOVar7 = (Object__Class *)
             TM::TM__(StringLiteral_Reward_players_with_coins_used_t,(MethodInfo *)0x0);
    pIVar8 = TypeInfo__InventoryItem__ItemDescription;
    pOVar9 = (Object *)func_?();
    *(ulonglong *)&pOVar9[2].monitor = CONCAT44(pSVar2,pSVar2);
    pOVar9[3].monitor = (MonitorData *)0x0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar9,ExceptionArgument__Enum_obj,(MethodInfo *)pIVar8);
    pOVar9[1].klass = pOVar6;
    func_?();
    pOVar9[1].monitor = (MonitorData *)pSVar1;
    func_?();
    pOVar9[2].klass = pOVar7;
    func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0x11,pOVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pOVar6 = (Object__Class *)TM::TM__(StringLiteral_Coin_Chest,(MethodInfo *)0x0);
    pSVar1 = TM::TM__(StringLiteral_Contains_lots_of_coins__which_ca,(MethodInfo *)0x0);
    pOVar7 = (Object__Class *)
             TM::TM__(StringLiteral_Use_this_to_reward_players_for_r,(MethodInfo *)0x0);
    pIVar8 = TypeInfo__InventoryItem__ItemDescription;
    pOVar9 = (Object *)func_?();
    *(ulonglong *)&pOVar9[2].monitor = CONCAT44(pSVar2,pSVar2);
    pOVar9[3].monitor = (MonitorData *)0x0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar9,ExceptionArgument__Enum_obj,(MethodInfo *)pIVar8);
    pOVar9[1].klass = pOVar6;
    func_?();
    pOVar9[1].monitor = (MonitorData *)pSVar1;
    func_?();
    pOVar9[2].klass = pOVar7;
    func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0x12,pOVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pOVar6 = (Object__Class *)TM::TM__(StringLiteral_Dual_Revolvers,(MethodInfo *)0x0);
    pSVar1 = TM::TM__(StringLiteral_A_pair_of_high_powered_revolvers,(MethodInfo *)0x0);
    pOVar7 = (Object__Class *)
             TM::TM__(StringLiteral_Most_effective_in_mid_to_long_ra,(MethodInfo *)0x0);
    pIVar8 = TypeInfo__InventoryItem__ItemDescription;
    pOVar9 = (Object *)func_?();
    *(ulonglong *)&pOVar9[2].monitor = CONCAT44(pSVar2,pSVar2);
    pOVar9[3].monitor = (MonitorData *)0x0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar9,ExceptionArgument__Enum_obj,(MethodInfo *)pIVar8);
    pOVar9[1].klass = pOVar6;
    func_?();
    pOVar9[1].monitor = (MonitorData *)pSVar1;
    func_?();
    pOVar9[2].klass = pOVar7;
    func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0x13,pOVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pOVar6 = (Object__Class *)TM::TM__(StringLiteral_Growth_Gun,(MethodInfo *)0x0);
    pSVar1 = TM::TM__(StringLiteral_Transforms_the_target_into_a_gia,(MethodInfo *)0x0);
    pOVar7 = (Object__Class *)
             TM::TM__(StringLiteral_Make_your_enemies_bigger_targets,(MethodInfo *)0x0);
    pIVar8 = TypeInfo__InventoryItem__ItemDescription;
    pOVar9 = (Object *)func_?();
    *(ulonglong *)&pOVar9[2].monitor = CONCAT44(pSVar2,pSVar2);
    pOVar9[3].monitor = (MonitorData *)0x0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar9,ExceptionArgument__Enum_obj,(MethodInfo *)pIVar8);
    pOVar9[1].klass = pOVar6;
    func_?();
    pOVar9[1].monitor = (MonitorData *)pSVar1;
    func_?();
    pOVar9[2].klass = pOVar7;
    func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0x14,pOVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pOVar6 = (Object__Class *)TM::TM__(StringLiteral_Revolver,(MethodInfo *)0x0);
    pSVar1 = TM::TM__(StringLiteral_A_high_powered_revolver_,(MethodInfo *)0x0);
    pOVar7 = (Object__Class *)
             TM::TM__(StringLiteral_Most_effective_in_mid_to_long_ra,(MethodInfo *)0x0);
    pIVar8 = TypeInfo__InventoryItem__ItemDescription;
    pOVar9 = (Object *)func_?();
    *(ulonglong *)&pOVar9[2].monitor = CONCAT44(pSVar2,pSVar2);
    pOVar9[3].monitor = (MonitorData *)0x0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar9,ExceptionArgument__Enum_obj,(MethodInfo *)pIVar8);
    pOVar9[1].klass = pOVar6;
    func_?();
    pOVar9[1].monitor = (MonitorData *)pSVar1;
    func_?();
    pOVar9[2].klass = pOVar7;
    func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0x15,pOVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pOVar6 = (Object__Class *)TM::TM__(StringLiteral_Lightning_Speed,(MethodInfo *)0x0);
    pSVar1 = TM::TM__(StringLiteral_Infuses_the_player_with_lightnin,(MethodInfo *)0x0);
    pOVar7 = (Object__Class *)
             TM::TM__(StringLiteral_This_enables_players_to_cross_lo,(MethodInfo *)0x0);
    pIVar8 = TypeInfo__InventoryItem__ItemDescription;
    pOVar9 = (Object *)func_?();
    *(ulonglong *)&pOVar9[2].monitor = CONCAT44(pSVar2,pSVar2);
    pOVar9[3].monitor = (MonitorData *)0x0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar9,ExceptionArgument__Enum_obj,(MethodInfo *)pIVar8);
    pOVar9[1].klass = pOVar6;
    func_?();
    pOVar9[1].monitor = (MonitorData *)pSVar1;
    func_?();
    pOVar9[2].klass = pOVar7;
    func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0x16,pOVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pSVar1 = TM::TM__(StringLiteral_Oculus,(MethodInfo *)0x0);
    pSVar3 = TM::TM__(StringLiteral_A_customizable_monster_from_anot,(MethodInfo *)0x0);
    pSVar57 = TM::TM__(StringLiteral_These_hideous_creatures_only_hav,(MethodInfo *)0x0);
    pIVar5 = (InventoryItem_ItemDescription *)func_?();
    cameraPreviewerOffset.y = (float)pSVar2;
    cameraPreviewerOffset.x = (float)pSVar2;
    cameraPreviewerOffset.z = 0.7;
    InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor_1
              (pIVar5,pSVar1,pSVar3,pSVar57,cameraPreviewerOffset,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0x17,(Object *)pIVar5,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pSVar1 = TM::TM__(StringLiteral_Teleporter,(MethodInfo *)0x0);
    pSVar3 = TM::TM__(StringLiteral_A_pair_of_connected_teleporters_,(MethodInfo *)0x0);
    pSVar57 = TM::TM__(StringLiteral_Useful_for_separating_different_,(MethodInfo *)0x0);
    uVar4 = _UNK_?;
    uVar58 = _UNK_?;
    pIVar5 = (InventoryItem_ItemDescription *)func_?();
    cameraPreviewerOffset_00.y = (float)uVar4;
    cameraPreviewerOffset_00.x = (float)uVar58;
    cameraPreviewerOffset_00.z = -1.0;
    InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor_1
              (pIVar5,pSVar1,pSVar3,pSVar57,cameraPreviewerOffset_00,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0x18,(Object *)pIVar5,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pSVar1 = TM::TM__(StringLiteral_Hovercraft,(MethodInfo *)0x0);
    pSVar3 = TM::TM__(StringLiteral_A_customizable_hovercraft_,(MethodInfo *)0x0);
    pSVar57 = TM::TM__(StringLiteral_Enables_players_to_traverse_grea,(MethodInfo *)0x0);
    pIVar5 = (InventoryItem_ItemDescription *)func_?();
    cameraPreviewerOffset_01.y = (float)pSVar2;
    cameraPreviewerOffset_01.x = (float)pSVar2;
    cameraPreviewerOffset_01.z = -0.3;
    InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor_1
              (pIVar5,pSVar1,pSVar3,pSVar57,cameraPreviewerOffset_01,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0x19,(Object *)pIVar5,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pSVar1 = TM::TM__(StringLiteral_Hamster_Ball,(MethodInfo *)0x0);
    pSVar3 = TM::TM__(StringLiteral_A_giant_hamster_ball_,(MethodInfo *)0x0);
    pSVar57 = TM::TM__(StringLiteral_This_bouncy_ball_offers_a_hilari,(MethodInfo *)0x0);
    pIVar5 = (InventoryItem_ItemDescription *)func_?();
    cameraPreviewerOffset_02.y = (float)_UNK_?;
    cameraPreviewerOffset_02.x = (float)uVar4;
    cameraPreviewerOffset_02.z = 0.0;
    InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor_1
              (pIVar5,pSVar1,pSVar3,pSVar57,cameraPreviewerOffset_02,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0x1a,(Object *)pIVar5,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pSVar1 = TM::TM__(StringLiteral_Fire_Sentry_Tower,(MethodInfo *)0x0);
    pSVar3 = TM::TM__(StringLiteral_A_sentry_tower__shooting_fire_at,(MethodInfo *)0x0);
    pSVar57 = TM::TM__(StringLiteral_Fire_sentries_serve_as_stationar,(MethodInfo *)0x0);
    uVar4 = _UNK_?;
    pIVar5 = (InventoryItem_ItemDescription *)func_?();
    cameraPreviewerOffset_03.y = (float)_UNK_?;
    cameraPreviewerOffset_03.x = (float)uVar4;
    cameraPreviewerOffset_03.z = -1.0;
    InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor_1
              (pIVar5,pSVar1,pSVar3,pSVar57,cameraPreviewerOffset_03,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0x1b,(Object *)pIVar5,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pOVar6 = (Object__Class *)TM::TM__(StringLiteral_Platform,(MethodInfo *)0x0);
    pSVar1 = TM::TM__(StringLiteral_Create_elevators_or_platforms_wi,(MethodInfo *)0x0);
    pOVar7 = (Object__Class *)
             TM::TM__(StringLiteral_Useful_when_bridging_the_gap_bet,(MethodInfo *)0x0);
    pIVar8 = TypeInfo__InventoryItem__ItemDescription;
    pOVar9 = (Object *)func_?();
    *(ulonglong *)&pOVar9[2].monitor = CONCAT44(pSVar2,pSVar2);
    pOVar9[3].monitor = (MonitorData *)0x0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar9,ExceptionArgument__Enum_obj,(MethodInfo *)pIVar8);
    pOVar9[1].klass = pOVar6;
    func_?();
    pOVar9[1].monitor = (MonitorData *)pSVar1;
    func_?();
    pOVar9[2].klass = pOVar7;
    func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0x1c,pOVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pOVar6 = (Object__Class *)TM::TM__(StringLiteral_Horizontal_Rotator,(MethodInfo *)0x0);
    pSVar1 = TM::TM__(StringLiteral_A_custom_cube_model__that_rotate,(MethodInfo *)0x0);
    pOVar7 = (Object__Class *)
             TM::TM__(StringLiteral_Can_be_used_as_a_challenging_way,(MethodInfo *)0x0);
    pIVar8 = TypeInfo__InventoryItem__ItemDescription;
    pOVar9 = (Object *)func_?();
    *(ulonglong *)&pOVar9[2].monitor = CONCAT44(pSVar2,pSVar2);
    pOVar9[3].monitor = (MonitorData *)0x0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar9,ExceptionArgument__Enum_obj,(MethodInfo *)pIVar8);
    pOVar9[1].klass = pOVar6;
    func_?();
    pOVar9[1].monitor = (MonitorData *)pSVar1;
    func_?();
    pOVar9[2].klass = pOVar7;
    func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0x1d,pOVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pOVar6 = (Object__Class *)TM::TM__(StringLiteral_Vertical_Rotator,(MethodInfo *)0x0);
    pSVar1 = TM::TM__(StringLiteral_A_custom_cube_model__that_rotate,(MethodInfo *)0x0);
    pOVar7 = (Object__Class *)
             TM::TM__(StringLiteral_Useful_for_pushing_players_off_p,(MethodInfo *)0x0);
    pIVar8 = TypeInfo__InventoryItem__ItemDescription;
    pOVar9 = (Object *)func_?();
    *(ulonglong *)&pOVar9[2].monitor = CONCAT44(pSVar2,pSVar2);
    pOVar9[3].monitor = (MonitorData *)0x0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar9,ExceptionArgument__Enum_obj,(MethodInfo *)pIVar8);
    pOVar9[1].klass = pOVar6;
    func_?();
    pOVar9[1].monitor = (MonitorData *)pSVar1;
    func_?();
    pOVar9[2].klass = pOVar7;
    func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0x1e,pOVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pSVar1 = TM::TM__(StringLiteral_Dragonfly_Jetpack,(MethodInfo *)0x0);
    pSVar3 = TM::TM__(StringLiteral_A_big_customizable_jetpack_,(MethodInfo *)0x0);
    pSVar57 = TM::TM__(StringLiteral_This_jetpack_offers_unprecedente,(MethodInfo *)0x0);
    pIVar5 = (InventoryItem_ItemDescription *)func_?();
    cameraPreviewerOffset_04.y = (float)_UNK_?;
    cameraPreviewerOffset_04.x = (float)pSVar2;
    cameraPreviewerOffset_04.z = 0.2;
    InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor_1
              (pIVar5,pSVar1,pSVar3,pSVar57,cameraPreviewerOffset_04,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0x1f,(Object *)pIVar5,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pOVar6 = (Object__Class *)TM::TM__(StringLiteral_Ghost,(MethodInfo *)0x0);
    pSVar1 = TM::TM__(StringLiteral_An_unkillable_ghost_which_damage,(MethodInfo *)0x0);
    pOVar7 = (Object__Class *)
             TM::TM__(StringLiteral_This_scary_monster_can_move_thro,(MethodInfo *)0x0);
    pIVar8 = TypeInfo__InventoryItem__ItemDescription;
    pOVar9 = (Object *)func_?();
    *(ulonglong *)&pOVar9[2].monitor = CONCAT44(pSVar2,pSVar2);
    pOVar9[3].monitor = (MonitorData *)0x0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar9,ExceptionArgument__Enum_obj,(MethodInfo *)pIVar8);
    pOVar9[1].klass = pOVar6;
    func_?();
    pOVar9[1].monitor = (MonitorData *)pSVar1;
    func_?();
    pOVar9[2].klass = pOVar7;
    func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0x20,pOVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pSVar1 = TM::TM__(StringLiteral_Frost_Sentry_Tower,(MethodInfo *)0x0);
    pSVar3 = TM::TM__(StringLiteral_A_sentry_tower__shooting_a_beam_,(MethodInfo *)0x0);
    pSVar57 = TM::TM__(StringLiteral_Frost_sentries_serve_as_stationa,(MethodInfo *)0x0);
    pIVar5 = (InventoryItem_ItemDescription *)func_?();
    cameraPreviewerOffset_05.y = (float)_UNK_?;
    cameraPreviewerOffset_05.x = (float)uVar4;
    cameraPreviewerOffset_05.z = -1.0;
    InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor_1
              (pIVar5,pSVar1,pSVar3,pSVar57,cameraPreviewerOffset_05,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0x21,(Object *)pIVar5,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pSVar1 = TM::TM__(StringLiteral_Firefly_Jetpack,(MethodInfo *)0x0);
    pSVar3 = TM::TM__(StringLiteral_A_small_customizable_jetpack_,(MethodInfo *)0x0);
    pSVar57 = TM::TM__(StringLiteral_Soar_to_the_skies_with_this_ligh,(MethodInfo *)0x0);
    pIVar5 = (InventoryItem_ItemDescription *)func_?();
    cameraPreviewerOffset_06.y = (float)_UNK_?;
    cameraPreviewerOffset_06.x = (float)pSVar2;
    cameraPreviewerOffset_06.z = -0.5;
    InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor_1
              (pIVar5,pSVar1,pSVar3,pSVar57,cameraPreviewerOffset_06,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0x22,(Object *)pIVar5,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pOVar6 = (Object__Class *)TM::TM__(StringLiteral_Light_Cube,(MethodInfo *)0x0);
    pSVar1 = TM::TM__(StringLiteral_A_colored_light__that_can_be_con,(MethodInfo *)0x0);
    pOVar7 = (Object__Class *)
             TM::TM__(StringLiteral_Light_up_the_dark_areas_of_your_,(MethodInfo *)0x0);
    pIVar8 = TypeInfo__InventoryItem__ItemDescription;
    pOVar9 = (Object *)func_?();
    *(ulonglong *)&pOVar9[2].monitor = CONCAT44(pSVar2,pSVar2);
    pOVar9[3].monitor = (MonitorData *)0x0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar9,ExceptionArgument__Enum_obj,(MethodInfo *)pIVar8);
    pOVar9[1].klass = pOVar6;
    func_?();
    pOVar9[1].monitor = (MonitorData *)pSVar1;
    func_?();
    pOVar9[2].klass = pOVar7;
    func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0x23,pOVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pOVar6 = (Object__Class *)TM::TM__(StringLiteral_Blue_Team_Spawn_Point,(MethodInfo *)0x0);
    pSVar3 = TM::TM__(StringLiteral_Spawn_point_for_the_blue_team__P,(MethodInfo *)0x0);
    pIVar8 = TypeInfo__InventoryItem__ItemDescription;
    pOVar9 = (Object *)func_?();
    pSVar1 = ::StringLiteral__;
    *(ulonglong *)&pOVar9[2].monitor = CONCAT44(pSVar2,pSVar2);
    pOVar9[3].monitor = (MonitorData *)0x0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar9,ExceptionArgument__Enum_obj,(MethodInfo *)pIVar8);
    pOVar9[1].klass = pOVar6;
    func_?();
    pOVar9[1].monitor = (MonitorData *)pSVar3;
    func_?();
    pOVar9[2].klass = (Object__Class *)pSVar1;
    func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0x24,pOVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pOVar6 = (Object__Class *)TM::TM__(StringLiteral_Red_Team_Spawn_Point,(MethodInfo *)0x0);
    pSVar3 = TM::TM__(StringLiteral_Spawn_point_for_the_red_team__Pl,(MethodInfo *)0x0);
    pIVar8 = TypeInfo__InventoryItem__ItemDescription;
    pOVar9 = (Object *)func_?();
    pSVar1 = ::StringLiteral__;
    *(ulonglong *)&pOVar9[2].monitor = CONCAT44(pSVar2,pSVar2);
    pOVar9[3].monitor = (MonitorData *)0x0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar9,ExceptionArgument__Enum_obj,(MethodInfo *)pIVar8);
    pOVar9[1].klass = pOVar6;
    func_?();
    pOVar9[1].monitor = (MonitorData *)pSVar3;
    func_?();
    pOVar9[2].klass = (Object__Class *)pSVar1;
    func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0x25,pOVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pOVar6 = (Object__Class *)TM::TM__(StringLiteral_Green_Team_Spawn_Point,(MethodInfo *)0x0);
    pSVar3 = TM::TM__(StringLiteral_Spawn_point_for_the_green_team__,(MethodInfo *)0x0);
    pIVar8 = TypeInfo__InventoryItem__ItemDescription;
    pOVar9 = (Object *)func_?();
    pSVar1 = ::StringLiteral__;
    *(ulonglong *)&pOVar9[2].monitor = CONCAT44(pSVar2,pSVar2);
    pOVar9[3].monitor = (MonitorData *)0x0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar9,ExceptionArgument__Enum_obj,(MethodInfo *)pIVar8);
    pOVar9[1].klass = pOVar6;
    func_?();
    pOVar9[1].monitor = (MonitorData *)pSVar3;
    func_?();
    pOVar9[2].klass = (Object__Class *)pSVar1;
    func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0x26,pOVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pOVar6 = (Object__Class *)TM::TM__(StringLiteral_Yellow_Team_Spawn_Point,(MethodInfo *)0x0);
    pSVar3 = TM::TM__(StringLiteral_Spawn_point_for_the_yellow_team_,(MethodInfo *)0x0);
    pIVar8 = TypeInfo__InventoryItem__ItemDescription;
    pOVar9 = (Object *)func_?();
    pSVar1 = ::StringLiteral__;
    *(ulonglong *)&pOVar9[2].monitor = CONCAT44(pSVar2,pSVar2);
    pOVar9[3].monitor = (MonitorData *)0x0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar9,ExceptionArgument__Enum_obj,(MethodInfo *)pIVar8);
    pOVar9[1].klass = pOVar6;
    func_?();
    pOVar9[1].monitor = (MonitorData *)pSVar3;
    func_?();
    pOVar9[2].klass = (Object__Class *)pSVar1;
    func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0x27,pOVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pOVar6 = (Object__Class *)TM::TM__(StringLiteral_Game_Objective__Flag,(MethodInfo *)0x0);
    pSVar1 = TM::TM__(StringLiteral_The_player_who_reaches_the_flag_,(MethodInfo *)0x0);
    pOVar7 = (Object__Class *)
             TM::TM__(StringLiteral_Flags_are_a_great_way_to_give_pl,(MethodInfo *)0x0);
    pIVar8 = TypeInfo__InventoryItem__ItemDescription;
    pOVar9 = (Object *)func_?();
    *(ulonglong *)&pOVar9[2].monitor = CONCAT44(pSVar2,pSVar2);
    pOVar9[3].monitor = (MonitorData *)0x0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar9,ExceptionArgument__Enum_obj,(MethodInfo *)pIVar8);
    pOVar9[1].klass = pOVar6;
    func_?();
    pOVar9[1].monitor = (MonitorData *)pSVar1;
    func_?();
    pOVar9[2].klass = pOVar7;
    func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0x28,pOVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pOVar6 = (Object__Class *)TM::TM__(StringLiteral_Explosive,(MethodInfo *)0x0);
    pSVar1 = TM::TM__(StringLiteral_A_bundle_of_dynamite_that_will_e,(MethodInfo *)0x0);
    pOVar7 = (Object__Class *)
             TM::TM__(StringLiteral_Use_this_by_connecting_it_to_a_p,(MethodInfo *)0x0);
    pIVar8 = TypeInfo__InventoryItem__ItemDescription;
    pOVar9 = (Object *)func_?();
    *(ulonglong *)&pOVar9[2].monitor = CONCAT44(pSVar2,pSVar2);
    pOVar9[3].monitor = (MonitorData *)0x0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar9,ExceptionArgument__Enum_obj,(MethodInfo *)pIVar8);
    pOVar9[1].klass = pOVar6;
    func_?();
    pOVar9[1].monitor = (MonitorData *)pSVar1;
    func_?();
    pOVar9[2].klass = pOVar7;
    func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0x29,pOVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pOVar6 = (Object__Class *)TM::TM__(StringLiteral_Fire,(MethodInfo *)0x0);
    pSVar1 = TM::TM__(StringLiteral_This_burns_anyone_who_gets_too_c,(MethodInfo *)0x0);
    pOVar7 = (Object__Class *)
             TM::TM__(StringLiteral_You_can_pair_this_with_the_Smoke,(MethodInfo *)0x0);
    pIVar8 = TypeInfo__InventoryItem__ItemDescription;
    pOVar9 = (Object *)func_?();
    *(ulonglong *)&pOVar9[2].monitor = CONCAT44(pSVar2,pSVar2);
    pOVar9[3].monitor = (MonitorData *)0x0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar9,ExceptionArgument__Enum_obj,(MethodInfo *)pIVar8);
    pOVar9[1].klass = pOVar6;
    func_?();
    pOVar9[1].monitor = (MonitorData *)pSVar1;
    func_?();
    pOVar9[2].klass = pOVar7;
    func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0x2a,pOVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pOVar6 = (Object__Class *)TM::TM__(StringLiteral_Smoke,(MethodInfo *)0x0);
    pSVar1 = TM::TM__(StringLiteral_Emits_a_cloud_of_smoke__The_smok,(MethodInfo *)0x0);
    pOVar7 = (Object__Class *)
             TM::TM__(StringLiteral_Great_cube_if_you_want_to_obstru,(MethodInfo *)0x0);
    pIVar8 = TypeInfo__InventoryItem__ItemDescription;
    pOVar9 = (Object *)func_?();
    *(ulonglong *)&pOVar9[2].monitor = CONCAT44(pSVar2,pSVar2);
    pOVar9[3].monitor = (MonitorData *)0x0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar9,ExceptionArgument__Enum_obj,(MethodInfo *)pIVar8);
    pOVar9[1].klass = pOVar6;
    func_?();
    pOVar9[1].monitor = (MonitorData *)pSVar1;
    func_?();
    pOVar9[2].klass = pOVar7;
    func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0x2b,pOVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pOVar6 = (Object__Class *)TM::TM__(StringLiteral_Text,(MethodInfo *)0x0);
    pSVar1 = TM::TM__(StringLiteral_An_object_enabling_you_to_displa,(MethodInfo *)0x0);
    pOVar7 = (Object__Class *)
             TM::TM__(StringLiteral_Display_a_game_title__help_text_,(MethodInfo *)0x0);
    pIVar8 = TypeInfo__InventoryItem__ItemDescription;
    pOVar9 = (Object *)func_?();
    *(ulonglong *)&pOVar9[2].monitor = CONCAT44(pSVar2,pSVar2);
    pOVar9[3].monitor = (MonitorData *)0x0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar9,ExceptionArgument__Enum_obj,(MethodInfo *)pIVar8);
    pOVar9[1].klass = pOVar6;
    func_?();
    pOVar9[1].monitor = (MonitorData *)pSVar1;
    func_?();
    pOVar9[2].klass = pOVar7;
    func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0x2c,pOVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pOVar6 = (Object__Class *)TM::TM__(StringLiteral_Skybox_Cube,(MethodInfo *)0x0);
    pSVar1 = TM::TM__(StringLiteral_Manage_the_look_of_your_game_by_,(MethodInfo *)0x0);
    pOVar7 = (Object__Class *)
             TM::TM__(StringLiteral_Adding_this_to_your_project_will,(MethodInfo *)0x0);
    pIVar8 = TypeInfo__InventoryItem__ItemDescription;
    pOVar9 = (Object *)func_?();
    *(ulonglong *)&pOVar9[2].monitor = CONCAT44(pSVar2,pSVar2);
    pOVar9[3].monitor = (MonitorData *)0x0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar9,ExceptionArgument__Enum_obj,(MethodInfo *)pIVar8);
    pOVar9[1].klass = pOVar6;
    func_?();
    pOVar9[1].monitor = (MonitorData *)pSVar1;
    func_?();
    pOVar9[2].klass = pOVar7;
    func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0x2d,pOVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pOVar6 = (Object__Class *)TM::TM__(StringLiteral_Water_Cube,(MethodInfo *)0x0);
    pSVar1 = TM::TM__(StringLiteral_Adjust_the_level_and_color_of_yo,(MethodInfo *)0x0);
    pOVar7 = (Object__Class *)
             TM::TM__(StringLiteral_WARNING__KoGaMians_cannot_breath,(MethodInfo *)0x0);
    pIVar8 = TypeInfo__InventoryItem__ItemDescription;
    pOVar9 = (Object *)func_?();
    *(ulonglong *)&pOVar9[2].monitor = CONCAT44(pSVar2,pSVar2);
    pOVar9[3].monitor = (MonitorData *)0x0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar9,ExceptionArgument__Enum_obj,(MethodInfo *)pIVar8);
    pOVar9[1].klass = pOVar6;
    func_?();
    pOVar9[1].monitor = (MonitorData *)pSVar1;
    func_?();
    pOVar9[2].klass = pOVar7;
    func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0x2e,pOVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pOVar6 = (Object__Class *)TM::TM__(StringLiteral_Speaker,(MethodInfo *)0x0);
    pSVar1 = TM::TM__(StringLiteral_Add_sounds_to_your_game__There_s,(MethodInfo *)0x0);
    pOVar7 = (Object__Class *)
             TM::TM__(StringLiteral_This_is_great_for_creating_the_a,(MethodInfo *)0x0);
    pIVar8 = TypeInfo__InventoryItem__ItemDescription;
    pOVar9 = (Object *)func_?();
    *(ulonglong *)&pOVar9[2].monitor = CONCAT44(pSVar2,pSVar2);
    pOVar9[3].monitor = (MonitorData *)0x0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar9,ExceptionArgument__Enum_obj,(MethodInfo *)pIVar8);
    pOVar9[1].klass = pOVar6;
    func_?();
    pOVar9[1].monitor = (MonitorData *)pSVar1;
    func_?();
    pOVar9[2].klass = pOVar7;
    func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0x2f,pOVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pOVar6 = (Object__Class *)TM::TM__(StringLiteral_Checkpoint,(MethodInfo *)0x0);
    pSVar1 = TM::TM__(StringLiteral_A_player_who_reaches_this_will_r,(MethodInfo *)0x0);
    pOVar7 = (Object__Class *)
             TM::TM__(StringLiteral_This_is_a_must_have_for_any_leve,(MethodInfo *)0x0);
    pIVar8 = TypeInfo__InventoryItem__ItemDescription;
    pOVar9 = (Object *)func_?();
    *(ulonglong *)&pOVar9[2].monitor = CONCAT44(pSVar2,pSVar2);
    pOVar9[3].monitor = (MonitorData *)0x0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar9,ExceptionArgument__Enum_obj,(MethodInfo *)pIVar8);
    pOVar9[1].klass = pOVar6;
    func_?();
    pOVar9[1].monitor = (MonitorData *)pSVar1;
    func_?();
    pOVar9[2].klass = pOVar7;
    func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0x31,pOVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pOVar6 = (Object__Class *)
             TM::TM__(StringLiteral_Game_Objective__Eliminate_the_Oc,(MethodInfo *)0x0);
    pSVar1 = TM::TM__(StringLiteral_Set_a_Oculus_kill_limit_for_your,(MethodInfo *)0x0);
    pOVar7 = (Object__Class *)
             TM::TM__(StringLiteral_The_team_or_player_that_reaches_,(MethodInfo *)0x0);
    pIVar8 = TypeInfo__InventoryItem__ItemDescription;
    pOVar9 = (Object *)func_?();
    *(ulonglong *)&pOVar9[2].monitor = CONCAT44(pSVar2,pSVar2);
    pOVar9[3].monitor = (MonitorData *)0x0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar9,ExceptionArgument__Enum_obj,(MethodInfo *)pIVar8);
    pOVar9[1].klass = pOVar6;
    func_?();
    pOVar9[1].monitor = (MonitorData *)pSVar1;
    func_?();
    pOVar9[2].klass = pOVar7;
    func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0x32,pOVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pOVar6 = (Object__Class *)TM::TM__(StringLiteral_Wind_Turbine,(MethodInfo *)0x0);
    pSVar1 = TM::TM__(StringLiteral_A_big_fan__which_blows_players_a,(MethodInfo *)0x0);
    pOVar7 = (Object__Class *)
             TM::TM__(StringLiteral_You_can_stack_several_wind_turbi,(MethodInfo *)0x0);
    pIVar8 = TypeInfo__InventoryItem__ItemDescription;
    pOVar9 = (Object *)func_?();
    *(ulonglong *)&pOVar9[2].monitor = CONCAT44(pSVar2,pSVar2);
    pOVar9[3].monitor = (MonitorData *)0x0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar9,ExceptionArgument__Enum_obj,(MethodInfo *)pIVar8);
    pOVar9[1].klass = pOVar6;
    func_?();
    pOVar9[1].monitor = (MonitorData *)pSVar1;
    func_?();
    pOVar9[2].klass = pOVar7;
    func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0x33,pOVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pOVar6 = (Object__Class *)TM::TM__(StringLiteral_Round_Time,(MethodInfo *)0x0);
    pSVar1 = TM::TM__(StringLiteral_Set_a_time_limit_for_a_round__Af,(MethodInfo *)0x0);
    pOVar7 = (Object__Class *)
             TM::TM__(StringLiteral_Round_cubes_are_a_great_if_your_,(MethodInfo *)0x0);
    pIVar8 = TypeInfo__InventoryItem__ItemDescription;
    pOVar9 = (Object *)func_?();
    *(ulonglong *)&pOVar9[2].monitor = CONCAT44(pSVar2,pSVar2);
    pOVar9[3].monitor = (MonitorData *)0x0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar9,ExceptionArgument__Enum_obj,(MethodInfo *)pIVar8);
    pOVar9[1].klass = pOVar6;
    func_?();
    pOVar9[1].monitor = (MonitorData *)pSVar1;
    func_?();
    pOVar9[2].klass = pOVar7;
    func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0x34,pOVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pOVar6 = (Object__Class *)TM::TM__(StringLiteral_Game_Objective__Death_match,(MethodInfo *)0x0);
    pSVar1 = TM::TM__(StringLiteral_Set_a_player_kill_limit_for_your,(MethodInfo *)0x0);
    pOVar7 = (Object__Class *)
             TM::TM__(StringLiteral_Add_this_to_create_a_death_match,(MethodInfo *)0x0);
    pIVar8 = TypeInfo__InventoryItem__ItemDescription;
    pOVar9 = (Object *)func_?();
    *(ulonglong *)&pOVar9[2].monitor = CONCAT44(pSVar2,pSVar2);
    pOVar9[3].monitor = (MonitorData *)0x0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar9,ExceptionArgument__Enum_obj,(MethodInfo *)pIVar8);
    pOVar9[1].klass = pOVar6;
    func_?();
    pOVar9[1].monitor = (MonitorData *)pSVar1;
    func_?();
    pOVar9[2].klass = pOVar7;
    func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0x35,pOVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pOVar6 = (Object__Class *)TM::TM__(StringLiteral_Camera_Cube,(MethodInfo *)0x0);
    pSVar1 = TM::TM__(StringLiteral_An_object_specifying_the_distanc,(MethodInfo *)0x0);
    pOVar7 = (Object__Class *)
             TM::TM__(StringLiteral_This_is_a_great_way_to_control_t,(MethodInfo *)0x0);
    pIVar8 = TypeInfo__InventoryItem__ItemDescription;
    pOVar9 = (Object *)func_?();
    *(ulonglong *)&pOVar9[2].monitor = CONCAT44(pSVar2,pSVar2);
    pOVar9[3].monitor = (MonitorData *)0x0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar9,ExceptionArgument__Enum_obj,(MethodInfo *)pIVar8);
    pOVar9[1].klass = pOVar6;
    func_?();
    pOVar9[1].monitor = (MonitorData *)pSVar1;
    func_?();
    pOVar9[2].klass = pOVar7;
    func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0x36,pOVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pOVar6 = (Object__Class *)TM::TM__(StringLiteral_Delay_Cube,(MethodInfo *)0x0);
    pSVar1 = TM::TM__(StringLiteral_When_receiving_a_signal_from_ano,(MethodInfo *)0x0);
    pOVar7 = (Object__Class *)
             TM::TM__(StringLiteral_You_can_put_these_in_sequence_to,(MethodInfo *)0x0);
    pIVar8 = TypeInfo__InventoryItem__ItemDescription;
    pOVar9 = (Object *)func_?();
    *(ulonglong *)&pOVar9[2].monitor = CONCAT44(pSVar2,pSVar2);
    pOVar9[3].monitor = (MonitorData *)0x0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar9,ExceptionArgument__Enum_obj,(MethodInfo *)pIVar8);
    pOVar9[1].klass = pOVar6;
    func_?();
    pOVar9[1].monitor = (MonitorData *)pSVar1;
    func_?();
    pOVar9[2].klass = pOVar7;
    func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0x37,pOVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pOVar6 = (Object__Class *)TM::TM__(StringLiteral_Toggle_Cube,(MethodInfo *)0x0);
    pSVar1 = TM::TM__(StringLiteral_Switches_between_ON_and_OFF_each,(MethodInfo *)0x0);
    pOVar7 = (Object__Class *)
             TM::TM__(StringLiteral_Do_you_want_to_open_and_close_th,(MethodInfo *)0x0);
    pIVar8 = TypeInfo__InventoryItem__ItemDescription;
    pOVar9 = (Object *)func_?();
    *(ulonglong *)&pOVar9[2].monitor = CONCAT44(pSVar2,pSVar2);
    pOVar9[3].monitor = (MonitorData *)0x0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar9,ExceptionArgument__Enum_obj,(MethodInfo *)pIVar8);
    pOVar9[1].klass = pOVar6;
    func_?();
    pOVar9[1].monitor = (MonitorData *)pSVar1;
    func_?();
    pOVar9[2].klass = pOVar7;
    func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0x38,pOVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pOVar6 = (Object__Class *)TM::TM__(StringLiteral_Negate_Cube,(MethodInfo *)0x0);
    pSVar1 = TM::TM__(StringLiteral_A_logic_object_which_sends_the_o,(MethodInfo *)0x0);
    pOVar7 = (Object__Class *)
             TM::TM__(StringLiteral_Inverting_a_signal_open_up_many_,(MethodInfo *)0x0);
    pIVar8 = TypeInfo__InventoryItem__ItemDescription;
    pOVar9 = (Object *)func_?();
    *(ulonglong *)&pOVar9[2].monitor = CONCAT44(pSVar2,pSVar2);
    pOVar9[3].monitor = (MonitorData *)0x0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar9,ExceptionArgument__Enum_obj,(MethodInfo *)pIVar8);
    pOVar9[1].klass = pOVar6;
    func_?();
    pOVar9[1].monitor = (MonitorData *)pSVar1;
    func_?();
    pOVar9[2].klass = pOVar7;
    func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0x39,pOVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pOVar6 = (Object__Class *)TM::TM__(StringLiteral_And_Cube,(MethodInfo *)0x0);
    pSVar1 = TM::TM__(StringLiteral_The_And_Cube_takes_several_input,(MethodInfo *)0x0);
    pOVar7 = (Object__Class *)
             TM::TM__(StringLiteral_If_you_want_players_to_stand_on_,(MethodInfo *)0x0);
    pIVar8 = TypeInfo__InventoryItem__ItemDescription;
    pOVar9 = (Object *)func_?();
    *(ulonglong *)&pOVar9[2].monitor = CONCAT44(pSVar2,pSVar2);
    pOVar9[3].monitor = (MonitorData *)0x0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar9,ExceptionArgument__Enum_obj,(MethodInfo *)pIVar8);
    pOVar9[1].klass = pOVar6;
    func_?();
    pOVar9[1].monitor = (MonitorData *)pSVar1;
    func_?();
    pOVar9[2].klass = pOVar7;
    func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0x3a,pOVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pOVar6 = (Object__Class *)TM::TM__(StringLiteral_Pressure_Plate,(MethodInfo *)0x0);
    pSVar1 = TM::TM__(StringLiteral_Whenever_a_player_steps_on_the_p,(MethodInfo *)0x0);
    pOVar7 = (Object__Class *)
             TM::TM__(StringLiteral_Connect_this_to_an_toggle_box_fo,(MethodInfo *)0x0);
    pIVar8 = TypeInfo__InventoryItem__ItemDescription;
    pOVar9 = (Object *)func_?();
    *(ulonglong *)&pOVar9[2].monitor = CONCAT44(pSVar2,pSVar2);
    pOVar9[3].monitor = (MonitorData *)0x0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar9,ExceptionArgument__Enum_obj,(MethodInfo *)pIVar8);
    pOVar9[1].klass = pOVar6;
    func_?();
    pOVar9[1].monitor = (MonitorData *)pSVar1;
    func_?();
    pOVar9[2].klass = pOVar7;
    func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0x3b,pOVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pOVar6 = (Object__Class *)TM::TM__(StringLiteral_Cube_Model_Hider,(MethodInfo *)0x0);
    pSVar1 = TM::TM__(StringLiteral_Hides_connected_cube_model_when_,(MethodInfo *)0x0);
    pOVar7 = (Object__Class *)
             TM::TM__(StringLiteral_This_is_most_commonly_used_to_en,(MethodInfo *)0x0);
    pIVar8 = TypeInfo__InventoryItem__ItemDescription;
    pOVar9 = (Object *)func_?();
    *(ulonglong *)&pOVar9[2].monitor = CONCAT44(pSVar2,pSVar2);
    pOVar9[3].monitor = (MonitorData *)0x0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar9,ExceptionArgument__Enum_obj,(MethodInfo *)pIVar8);
    pOVar9[1].klass = pOVar6;
    func_?();
    pOVar9[1].monitor = (MonitorData *)pSVar1;
    func_?();
    pOVar9[2].klass = pOVar7;
    func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0x3c,pOVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pOVar6 = (Object__Class *)TM::TM__(StringLiteral_Pulse_Cube,(MethodInfo *)0x0);
    pSVar1 = TM::TM__(StringLiteral_This_logic_cube_sends_signals_in,(MethodInfo *)0x0);
    pOVar7 = (Object__Class *)
             TM::TM__(StringLiteral_This_is_really_neat_when_you_wan,(MethodInfo *)0x0);
    pIVar8 = TypeInfo__InventoryItem__ItemDescription;
    pOVar9 = (Object *)func_?();
    *(ulonglong *)&pOVar9[2].monitor = CONCAT44(pSVar2,pSVar2);
    pOVar9[3].monitor = (MonitorData *)0x0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar9,ExceptionArgument__Enum_obj,(MethodInfo *)pIVar8);
    pOVar9[1].klass = pOVar6;
    func_?();
    pOVar9[1].monitor = (MonitorData *)pSVar1;
    func_?();
    pOVar9[2].klass = pOVar7;
    func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0x3d,pOVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pOVar6 = (Object__Class *)TM::TM__(StringLiteral_Random_Cube,(MethodInfo *)0x0);
    pSVar1 = TM::TM__(StringLiteral_Powers_one_connected_object_at_r,(MethodInfo *)0x0);
    pOVar7 = (Object__Class *)
             TM::TM__(StringLiteral_This_is_useful_if_you_want_to_cr,(MethodInfo *)0x0);
    pIVar8 = TypeInfo__InventoryItem__ItemDescription;
    pOVar9 = (Object *)func_?();
    *(ulonglong *)&pOVar9[2].monitor = CONCAT44(pSVar2,pSVar2);
    pOVar9[3].monitor = (MonitorData *)0x0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar9,ExceptionArgument__Enum_obj,(MethodInfo *)pIVar8);
    pOVar9[1].klass = pOVar6;
    func_?();
    pOVar9[1].monitor = (MonitorData *)pSVar1;
    func_?();
    pOVar9[2].klass = pOVar7;
    func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0x3e,pOVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pOVar6 = (Object__Class *)TM::TM__(StringLiteral_Counting_Cube,(MethodInfo *)0x0);
    pSVar1 = TM::TM__(StringLiteral_Set_a_count__Each_time_the_cube_,(MethodInfo *)0x0);
    pOVar7 = (Object__Class *)
             TM::TM__(StringLiteral_This_looks_super_cool_and_can_be,(MethodInfo *)0x0);
    pIVar8 = TypeInfo__InventoryItem__ItemDescription;
    pOVar9 = (Object *)func_?();
    *(ulonglong *)&pOVar9[2].monitor = CONCAT44(pSVar2,pSVar2);
    pOVar9[3].monitor = (MonitorData *)0x0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar9,ExceptionArgument__Enum_obj,(MethodInfo *)pIVar8);
    pOVar9[1].klass = pOVar6;
    func_?();
    pOVar9[1].monitor = (MonitorData *)pSVar1;
    func_?();
    pOVar9[2].klass = pOVar7;
    func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0x3f,pOVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pOVar6 = (Object__Class *)TM::TM__(StringLiteral_Target_Cube,(MethodInfo *)0x0);
    pSVar1 = TM::TM__(StringLiteral_Sends_a_signal_when_shot_,(MethodInfo *)0x0);
    pOVar7 = (Object__Class *)
             TM::TM__(StringLiteral_Can_be_used_to_open_doors_or_sec,(MethodInfo *)0x0);
    pIVar8 = TypeInfo__InventoryItem__ItemDescription;
    pOVar9 = (Object *)func_?();
    *(ulonglong *)&pOVar9[2].monitor = CONCAT44(pSVar2,pSVar2);
    pOVar9[3].monitor = (MonitorData *)0x0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar9,ExceptionArgument__Enum_obj,(MethodInfo *)pIVar8);
    pOVar9[1].klass = pOVar6;
    func_?();
    pOVar9[1].monitor = (MonitorData *)pSVar1;
    func_?();
    pOVar9[2].klass = pOVar7;
    func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0x40,pOVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pOVar6 = (Object__Class *)TM::TM__(StringLiteral_Lever,(MethodInfo *)0x0);
    pSVar1 = TM::TM__(StringLiteral_Sends_a_signal_when_pulled_,(MethodInfo *)0x0);
    pOVar7 = (Object__Class *)
             TM::TM__(StringLiteral_Open_doors__trigger_explosives__,(MethodInfo *)0x0);
    pIVar8 = TypeInfo__InventoryItem__ItemDescription;
    pOVar9 = (Object *)func_?();
    *(ulonglong *)&pOVar9[2].monitor = CONCAT44(pSVar2,pSVar2);
    pOVar9[3].monitor = (MonitorData *)0x0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar9,ExceptionArgument__Enum_obj,(MethodInfo *)pIVar8);
    pOVar9[1].klass = pOVar6;
    func_?();
    pOVar9[1].monitor = (MonitorData *)pSVar1;
    func_?();
    pOVar9[2].klass = pOVar7;
    func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0x41,pOVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pOVar6 = (Object__Class *)TM::TM__(StringLiteral_Collect_And_Drop,(MethodInfo *)0x0);
    pSVar1 = TM::TM__(StringLiteral_A_pair_consisting_of_a_pickup_an,(MethodInfo *)0x0);
    pOVar7 = (Object__Class *)
             TM::TM__(StringLiteral_Can_be_used_for_everything_from_,(MethodInfo *)0x0);
    pIVar8 = TypeInfo__InventoryItem__ItemDescription;
    pOVar9 = (Object *)func_?();
    *(ulonglong *)&pOVar9[2].monitor = CONCAT44(pSVar2,pSVar2);
    pOVar9[3].monitor = (MonitorData *)0x0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar9,ExceptionArgument__Enum_obj,(MethodInfo *)pIVar8);
    pOVar9[1].klass = pOVar6;
    func_?();
    pOVar9[1].monitor = (MonitorData *)pSVar1;
    func_?();
    pOVar9[2].klass = pOVar7;
    func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0x42,pOVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pOVar6 = (Object__Class *)TM::TM__(StringLiteral_Heal_Ray,(MethodInfo *)0x0);
    pSVar1 = TM::TM__(StringLiteral_Shoots_a_ray_that_heals_people__,(MethodInfo *)0x0);
    pOVar7 = (Object__Class *)
             TM::TM__(StringLiteral_Don_t_let_your_friends_die__shoo,(MethodInfo *)0x0);
    pIVar8 = TypeInfo__InventoryItem__ItemDescription;
    pOVar9 = (Object *)func_?();
    *(ulonglong *)&pOVar9[2].monitor = CONCAT44(pSVar2,pSVar2);
    pOVar9[3].monitor = (MonitorData *)0x0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar9,ExceptionArgument__Enum_obj,(MethodInfo *)pIVar8);
    pOVar9[1].klass = pOVar6;
    func_?();
    pOVar9[1].monitor = (MonitorData *)pSVar1;
    func_?();
    pOVar9[2].klass = pOVar7;
    func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0x43,pOVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pOVar6 = (Object__Class *)TM::TM__(StringLiteral_Global_Speaker,(MethodInfo *)0x0);
    pSVar1 = TM::TM__(StringLiteral_Adds_a_global_sound_to_the_game_,(MethodInfo *)0x0);
    pOVar7 = (Object__Class *)
             TM::TM__(StringLiteral_This_can_be_used_to_make_a_bette,(MethodInfo *)0x0);
    pIVar8 = TypeInfo__InventoryItem__ItemDescription;
    pOVar9 = (Object *)func_?();
    *(ulonglong *)&pOVar9[2].monitor = CONCAT44(pSVar2,pSVar2);
    pOVar9[3].monitor = (MonitorData *)0x0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar9,ExceptionArgument__Enum_obj,(MethodInfo *)pIVar8);
    pOVar9[1].klass = pOVar6;
    func_?();
    pOVar9[1].monitor = (MonitorData *)pSVar1;
    func_?();
    pOVar9[2].klass = pOVar7;
    func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0x30,pOVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pOVar6 = (Object__Class *)
             TM::TM__(StringLiteral_Game_Objective__Time_Attack_Flag,(MethodInfo *)0x0);
    pSVar1 = TM::TM__(StringLiteral_Records_the_time_it_took_for_a_p,(MethodInfo *)0x0);
    pOVar7 = (Object__Class *)
             TM::TM__(StringLiteral_Lets_players_take_their_time_rea,(MethodInfo *)0x0);
    pIVar8 = TypeInfo__InventoryItem__ItemDescription;
    pOVar9 = (Object *)func_?();
    *(ulonglong *)&pOVar9[2].monitor = CONCAT44(pSVar2,pSVar2);
    pOVar9[3].monitor = (MonitorData *)0x0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar9,ExceptionArgument__Enum_obj,(MethodInfo *)pIVar8);
    pOVar9[1].klass = pOVar6;
    func_?();
    pOVar9[1].monitor = (MonitorData *)pSVar1;
    func_?();
    pOVar9[2].klass = pOVar7;
    func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0x44,pOVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pOVar6 = (Object__Class *)TM::TM__(StringLiteral_Trigger_Cube,(MethodInfo *)0x0);
    pSVar1 = TM::TM__(StringLiteral_While_a_player_is_inside_the_are,(MethodInfo *)0x0);
    pOVar7 = (Object__Class *)
             TM::TM__(StringLiteral_Allows_for_scripted_events_in_a_,(MethodInfo *)0x0);
    pIVar8 = TypeInfo__InventoryItem__ItemDescription;
    pOVar9 = (Object *)func_?();
    *(ulonglong *)&pOVar9[2].monitor = CONCAT44(pSVar2,pSVar2);
    pOVar9[3].monitor = (MonitorData *)0x0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar9,ExceptionArgument__Enum_obj,(MethodInfo *)pIVar8);
    pOVar9[1].klass = pOVar6;
    func_?();
    pOVar9[1].monitor = (MonitorData *)pSVar1;
    func_?();
    pOVar9[2].klass = pOVar7;
    func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0x45,pOVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pOVar6 = (Object__Class *)TM::TM__(StringLiteral_Team_Editor,(MethodInfo *)0x0);
    pSVar1 = TM::TM__(StringLiteral_This_object_allows_you_to_change,(MethodInfo *)0x0);
    pOVar7 = (Object__Class *)
             TM::TM__(StringLiteral_Modify_the_roles_of_your_teams__,(MethodInfo *)0x0);
    pIVar8 = TypeInfo__InventoryItem__ItemDescription;
    pOVar9 = (Object *)func_?();
    *(ulonglong *)&pOVar9[2].monitor = CONCAT44(pSVar2,pSVar2);
    pOVar9[3].monitor = (MonitorData *)0x0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar9,ExceptionArgument__Enum_obj,(MethodInfo *)pIVar8);
    pOVar9[1].klass = pOVar6;
    func_?();
    pOVar9[1].monitor = (MonitorData *)pSVar1;
    func_?();
    pOVar9[2].klass = pOVar7;
    func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0x46,pOVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pOVar6 = (Object__Class *)TM::TM__(StringLiteral_Crystal,(MethodInfo *)0x0);
    pSVar1 = TM::TM__(StringLiteral_Players_pick_these_up_to_get_pro,(MethodInfo *)0x0);
    pOVar7 = (Object__Class *)
             TM::TM__(StringLiteral_Use_this_to_reward_players_for_r,(MethodInfo *)0x0);
    pIVar8 = TypeInfo__InventoryItem__ItemDescription;
    pOVar9 = (Object *)func_?();
    *(ulonglong *)&pOVar9[2].monitor = CONCAT44(pSVar2,pSVar2);
    pOVar9[3].monitor = (MonitorData *)0x0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar9,ExceptionArgument__Enum_obj,(MethodInfo *)pIVar8);
    pOVar9[1].klass = pOVar6;
    func_?();
    pOVar9[1].monitor = (MonitorData *)pSVar1;
    func_?();
    pOVar9[2].klass = pOVar7;
    func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0x47,pOVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pOVar6 = (Object__Class *)TM::TM__(StringLiteral_Crystal_Vein,(MethodInfo *)0x0);
    pSVar1 = TM::TM__(StringLiteral_Contains_lots_of_crystals__which,(MethodInfo *)0x0);
    pOVar7 = (Object__Class *)
             TM::TM__(StringLiteral_Use_this_to_reward_players_for_r,(MethodInfo *)0x0);
    pIVar8 = TypeInfo__InventoryItem__ItemDescription;
    pOVar9 = (Object *)func_?();
    *(ulonglong *)&pOVar9[2].monitor = CONCAT44(pSVar2,pSVar2);
    pOVar9[3].monitor = (MonitorData *)0x0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar9,ExceptionArgument__Enum_obj,(MethodInfo *)pIVar8);
    pOVar9[1].klass = pOVar6;
    func_?();
    pOVar9[1].monitor = (MonitorData *)pSVar1;
    func_?();
    pOVar9[2].klass = pOVar7;
    func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0x48,pOVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pOVar6 = (Object__Class *)TM::TM__(StringLiteral_Class,(MethodInfo *)0x0);
    pSVar1 = TM::TM__(StringLiteral_Allows_players_to_spawn_as_a_cla,(MethodInfo *)0x0);
    pOVar7 = (Object__Class *)
             TM::TM__(StringLiteral_Customize_different_Classes_with,(MethodInfo *)0x0);
    pIVar8 = TypeInfo__InventoryItem__ItemDescription;
    pOVar9 = (Object *)func_?();
    *(ulonglong *)&pOVar9[2].monitor = CONCAT44(pSVar2,pSVar2);
    pOVar9[3].monitor = (MonitorData *)0x0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar9,ExceptionArgument__Enum_obj,(MethodInfo *)pIVar8);
    pOVar9[1].klass = pOVar6;
    func_?();
    pOVar9[1].monitor = (MonitorData *)pSVar1;
    func_?();
    pOVar9[2].klass = pOVar7;
    func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0x49,pOVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pOVar6 = (Object__Class *)TM::TM__(StringLiteral_Vehicle_Energy,(MethodInfo *)0x0);
    pSVar1 = TM::TM__(StringLiteral_Can_be_used_to_refill_vehicles_e,(MethodInfo *)0x0);
    pOVar7 = (Object__Class *)
             TM::TM__(StringLiteral_Make_a_game_where_you_have_to_pi,(MethodInfo *)0x0);
    pIVar8 = TypeInfo__InventoryItem__ItemDescription;
    pOVar9 = (Object *)func_?();
    *(ulonglong *)&pOVar9[2].monitor = CONCAT44(pSVar2,pSVar2);
    pOVar9[3].monitor = (MonitorData *)0x0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar9,ExceptionArgument__Enum_obj,(MethodInfo *)pIVar8);
    pOVar9[1].klass = pOVar6;
    func_?();
    pOVar9[1].monitor = (MonitorData *)pSVar1;
    func_?();
    pOVar9[2].klass = pOVar7;
    func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0x4a,pOVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pOVar6 = (Object__Class *)TM::TM__(StringLiteral_Door,(MethodInfo *)0x0);
    pSVar1 = TM::TM__(StringLiteral_A_door_that_can_be_opened_by_a_s,(MethodInfo *)0x0);
    pOVar7 = (Object__Class *)
             TM::TM__(StringLiteral_Use_this_to_make_an_animated_doo,(MethodInfo *)0x0);
    pIVar8 = TypeInfo__InventoryItem__ItemDescription;
    pOVar9 = (Object *)func_?();
    *(ulonglong *)&pOVar9[2].monitor = CONCAT44(pSVar2,pSVar2);
    pOVar9[3].monitor = (MonitorData *)0x0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar9,ExceptionArgument__Enum_obj,(MethodInfo *)pIVar8);
    pOVar9[1].klass = pOVar6;
    func_?();
    pOVar9[1].monitor = (MonitorData *)pSVar1;
    func_?();
    pOVar9[2].klass = pOVar7;
    func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0x4b,pOVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pOVar6 = (Object__Class *)TM::TM__(StringLiteral_Sliding_Door,(MethodInfo *)0x0);
    pSVar1 = TM::TM__(StringLiteral_A_sliding_door_that_can_be_opene,(MethodInfo *)0x0);
    pOVar7 = (Object__Class *)
             TM::TM__(StringLiteral_Use_this_to_make_an_animated_sli,(MethodInfo *)0x0);
    pIVar8 = TypeInfo__InventoryItem__ItemDescription;
    pOVar9 = (Object *)func_?();
    *(ulonglong *)&pOVar9[2].monitor = CONCAT44(pSVar2,pSVar2);
    pOVar9[3].monitor = (MonitorData *)0x0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar9,ExceptionArgument__Enum_obj,(MethodInfo *)pIVar8);
    pOVar9[1].klass = pOVar6;
    func_?();
    pOVar9[1].monitor = (MonitorData *)pSVar1;
    func_?();
    pOVar9[2].klass = pOVar7;
    func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0x4c,pOVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pSVar1 = TM::TM__(StringLiteral_Trap_Door,(MethodInfo *)0x0);
    pSVar3 = TM::TM__(StringLiteral_A_trap_door_that_can_be_opened_b,(MethodInfo *)0x0);
    pSVar57 = TM::TM__(StringLiteral_Use_this_to_make_an_animated_tra,(MethodInfo *)0x0);
    pIVar5 = (InventoryItem_ItemDescription *)func_?();
    cameraPreviewerOffset_07.y = (float)_UNK_?;
    cameraPreviewerOffset_07.x = (float)uVar4;
    cameraPreviewerOffset_07.z = -1.0;
    InventoryItem+ItemDescription::InventoryItem_ItemDescription__ctor_1
              (pIVar5,pSVar1,pSVar3,pSVar57,cameraPreviewerOffset_07,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0x4d,(Object *)pIVar5,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pOVar6 = (Object__Class *)TM::TM__(StringLiteral_Costume,(MethodInfo *)0x0);
    pSVar1 = TM::TM__(StringLiteral_An_equippable_costume_,(MethodInfo *)0x0);
    pOVar7 = (Object__Class *)
             TM::TM__(StringLiteral_Equip_this_to_blend_into_the_env,(MethodInfo *)0x0);
    pIVar8 = TypeInfo__InventoryItem__ItemDescription;
    pOVar9 = (Object *)func_?();
    *(ulonglong *)&pOVar9[2].monitor = CONCAT44(pSVar2,pSVar2);
    pOVar9[3].monitor = (MonitorData *)0x0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar9,ExceptionArgument__Enum_obj,(MethodInfo *)pIVar8);
    pOVar9[1].klass = pOVar6;
    func_?();
    pOVar9[1].monitor = (MonitorData *)pSVar1;
    func_?();
    pOVar9[2].klass = pOVar7;
    func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0x4e,pOVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pOVar6 = (Object__Class *)TM::TM__(StringLiteral_Cube_Model_Transparency,(MethodInfo *)0x0);
    pSVar1 = TM::TM__(StringLiteral_Change_transparency_to_cube_mode,(MethodInfo *)0x0);
    pOVar7 = (Object__Class *)
             TM::TM__(StringLiteral_Change_the_transparency_for_a_cu,(MethodInfo *)0x0);
    pIVar8 = TypeInfo__InventoryItem__ItemDescription;
    pOVar9 = (Object *)func_?();
    *(ulonglong *)&pOVar9[2].monitor = CONCAT44(pSVar2,pSVar2);
    pOVar9[3].monitor = (MonitorData *)0x0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar9,ExceptionArgument__Enum_obj,(MethodInfo *)pIVar8);
    pOVar9[1].klass = pOVar6;
    func_?();
    pOVar9[1].monitor = (MonitorData *)pSVar1;
    func_?();
    pOVar9[2].klass = pOVar7;
    func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0x4f,pOVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    pOVar6 = (Object__Class *)TM::TM__(StringLiteral_Custom_Gun,(MethodInfo *)0x0);
    pSVar1 = TM::TM__(StringLiteral_A_modifiable_projectile_weapon_,(MethodInfo *)0x0);
    pOVar7 = (Object__Class *)
             TM::TM__(StringLiteral_A_fully_customizable_projectile_,(MethodInfo *)0x0);
    pIVar8 = TypeInfo__InventoryItem__ItemDescription;
    pOVar9 = (Object *)func_?();
    *(ulonglong *)&pOVar9[2].monitor = CONCAT44(pSVar2,pSVar2);
    pOVar9[3].monitor = (MonitorData *)0x0;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar9,ExceptionArgument__Enum_obj,(MethodInfo *)pIVar8);
    pOVar9[1].klass = pOVar6;
    func_?();
    pOVar9[1].monitor = (MonitorData *)pSVar1;
    func_?();
    pOVar9[2].klass = pOVar7;
    func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0x50,pOVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__Add_MVWorldObjectDocumentationType__InventoryItem__ItemDescription_
              );
    TypeInfo__InventoryItem->static_fields->localItemDescriptionOverride = this_00;
    func_?();
    return;
  }
  func_?();
  pcVar59 = (code *)swi(3);
  (*pcVar59)();
  return;
}


/* InventoryItem() */

void Assembly-CSharp.dll::InventoryItem::InventoryItem__ctor(InventoryItem *this,MethodInfo *method)

{
  (this->fields).hasData = 1;
  (this->fields).purchased = 1;
  return;
}


/* InventoryItem(Dictionary`2[System.Byte,System.Object]) */

void Assembly-CSharp.dll::InventoryItem::InventoryItem__ctor_1
               (InventoryItem *this,Dictionary_2_System_Byte_System_Object_ *data,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__String);
    cRam_? = '\x01';
  }
  (this->fields).hasData = 1;
  (this->fields).purchased = 1;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  if ((data == (Dictionary_2_System_Byte_System_Object_ *)0x0) ||
     (pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
               ::Dictionary_2_System_Byte_System_Object__get_Item
                         (data,0x28,
                          MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                         ), pOVar1 == (Object *)0x0)) {
code_?:
    func_?();
    goto code_?;
  }
  if ((pOVar1->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
  goto code_?;
  piVar2 = (int32_t *)func_?();
  (this->fields).itemID = *piVar2;
  pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
           Dictionary_2_System_Byte_System_Object__get_Item
                     (data,0x96,
                      MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                     );
  if (pOVar1 == (Object *)0x0) goto code_?;
  if ((pOVar1->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
  goto code_?;
  piVar2 = (int32_t *)func_?();
  (this->fields).itemCategoryID = *piVar2;
  pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
           Dictionary_2_System_Byte_System_Object__get_Item
                     (data,0x29,
                      MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                     );
  if (pOVar1 == (Object *)0x0) goto code_?;
  if ((pOVar1->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
    piVar2 = (int32_t *)func_?();
    (this->fields).itemTypeID = *piVar2;
    pSVar3 = (String *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
             Dictionary_2_System_Byte_System_Object__get_Item
                       (data,0x2a,
                        MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                       );
    if (pSVar3 == (String *)0x0) {
      (this->fields).name = (String *)0x0;
    }
    else {
      pSVar4 = (String *)0x0;
      if (pSVar3->klass == TypeInfo__System__String) {
        pSVar4 = pSVar3;
      }
      if (pSVar4 == (String *)0x0) goto code_?;
      (this->fields).name = pSVar4;
      pSVar4 = (String *)0x0;
      if (pSVar3->klass == TypeInfo__System__String) {
        pSVar4 = pSVar3;
      }
      if (pSVar4 == (String *)0x0) goto code_?;
    }
    func_?();
    (this->fields).isDeleted = 0;
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
             Dictionary_2_System_Byte_System_Object__get_Item
                       (data,0x2b,
                        MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                       );
    if (pOVar1 == (Object *)0x0) {
      (this->fields).data = (Byte__Array *)0x0;
code_?:
      func_?();
      pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
               ::Dictionary_2_System_Byte_System_Object__get_Item
                         (data,0x2d,
                          MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                         );
      if (pOVar1 == (Object *)0x0) goto code_?;
      if ((pOVar1->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
        piVar2 = (int32_t *)func_?();
        (this->fields).slotPosition = *piVar2;
        pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                 Object]::Dictionary_2_System_Byte_System_Object__get_Item
                           (data,0x8a,
                            MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                           );
        if (pOVar1 == (Object *)0x0) goto code_?;
        if ((pOVar1->klass->_0).element_class == (TypeInfo__System__Boolean->_0).element_class) {
          pbVar5 = (bool *)func_?();
          (this->fields).resellable = *pbVar5;
          pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                   Object]::Dictionary_2_System_Byte_System_Object__get_Item
                             (data,0x45,
                              MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                             );
          if (pOVar1 == (Object *)0x0) goto code_?;
          if ((pOVar1->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
            piVar2 = (int32_t *)func_?();
            (this->fields).priceGold = *piVar2;
            pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                     Object]::Dictionary_2_System_Byte_System_Object__get_Item
                               (data,0x89,
                                MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                               );
            if (pOVar1 == (Object *)0x0) goto code_?;
            if ((pOVar1->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
              piVar2 = (int32_t *)func_?();
              (this->fields).authorProfileID = *piVar2;
              pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System
                       ::Object]::Dictionary_2_System_Byte_System_Object__get_Item
                                 (data,0x8b,
                                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                                 );
              if (pOVar1 == (Object *)0x0) goto code_?;
              if ((pOVar1->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class)
              {
                piVar2 = (int32_t *)func_?();
                (this->fields).originalItemID = *piVar2;
                (this->fields).purchased = 1;
                (this->fields).isDefaultInvItem = 0;
                return;
              }
            }
          }
        }
      }
      goto code_?;
    }
    pBVar6 = (Byte__Array *)func_?();
    if (pBVar6 != (Byte__Array *)0x0) {
      (this->fields).data = pBVar6;
      iVar7 = func_?();
      if (iVar7 != 0) goto code_?;
      goto code_?;
    }
  }
  else {
code_?:
    func_?();
code_?:
    func_?();
  }
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* InventoryItem(Int32, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::InventoryItem::InventoryItem__ctor_2
               (InventoryItem *this,int32_t itemID,
               Dictionary_2_System_Object_System_Object_ *itemData,MethodInfo *method)

{
  value = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__System__Byte);
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__String);
    cRam_? = '\x01';
  }
  (value->fields).hasData = 1;
  (value->fields).purchased = 1;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,unaff_EDI);
  (value->fields).itemID = itemID;
  this = (InventoryItem *)CONCAT13(0x70,this._0_3_);
  pOVar1 = (Object *)func_?(TypeInfo__System__Byte,(int)&this + 3);
  this_00 = itemData;
  if ((itemData == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
     (TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)itemData,
                         pOVar1,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        ), TVar2.m_Index == 0)) goto code_?;
  if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) != (TypeInfo__System__Int32->_0).element_class
     ) goto code_?;
  piVar3 = (int32_t *)func_?();
  (value->fields).itemCategoryID = *piVar3;
  pOVar1 = (Object *)func_?();
  TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::TextureId]::
          Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                    ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_00,pOVar1,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                    );
  if (TVar2.m_Index == 0) goto code_?;
  if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) == (TypeInfo__System__Int32->_0).element_class
     ) {
    piVar3 = (int32_t *)func_?();
    (value->fields).itemTypeID = *piVar3;
    pOVar1 = (Object *)func_?(TypeInfo__System__Byte);
    TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_00,
                       pOVar1,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if (TVar2.m_Index != 0) {
      TVar4.m_Index = (int32_t)(String *)0x0;
      if (*(String__Class **)TVar2.m_Index == TypeInfo__System__String) {
        TVar4 = TVar2;
      }
      if ((String *)TVar4.m_Index != (String *)0x0) {
        (value->fields).name = (String *)TVar4.m_Index;
        TVar4.m_Index = 0;
        if (*(String__Class **)TVar2.m_Index == TypeInfo__System__String) {
          TVar4 = TVar2;
        }
        unaff_EBX.m_Index = (int32_t)TypeInfo__System__String;
        if (TVar4.m_Index != 0) goto code_?;
code_?:
        unaff_EBX.m_Index = (int32_t)TypeInfo__System__String;
        func_?();
      }
      goto code_?;
    }
    (value->fields).name = (String *)0x0;
code_?:
    func_?();
    pOVar1 = (Object *)func_?(TypeInfo__System__Byte);
    TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_00,
                       pOVar1,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if (TVar2.m_Index == 0) {
      (value->fields).description = (String *)0x0;
    }
    else {
      TVar4.m_Index = (int32_t)(String *)0x0;
      if (*(String__Class **)TVar2.m_Index == TypeInfo__System__String) {
        TVar4 = TVar2;
      }
      if ((String *)TVar4.m_Index == (String *)0x0) goto code_?;
      (value->fields).description = (String *)TVar4.m_Index;
      TVar4.m_Index = 0;
      if (*(String__Class **)TVar2.m_Index == TypeInfo__System__String) {
        TVar4 = TVar2;
      }
      unaff_EBX.m_Index = (int32_t)TypeInfo__System__String;
      if (TVar4.m_Index == 0) goto code_?;
    }
    func_?();
    pOVar1 = (Object *)func_?(TypeInfo__System__Byte);
    TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_00,
                       pOVar1,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if (TVar2.m_Index == 0) goto code_?;
    if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) !=
        (TypeInfo__System__Boolean->_0).element_class) goto code_?;
    pbVar5 = (bool *)func_?();
    bVar6 = *pbVar5;
    (value->fields).isDeleted = bVar6;
    if (bVar6 != 0) {
code_?:
      unaff_EBX.m_Index = (int)&this + 3;
      this = (InventoryItem *)CONCAT13(100,this._0_3_);
      pOVar1 = (Object *)func_?();
      TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_00,
                         pOVar1,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      if (TVar2.m_Index != 0) {
        if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) ==
            (TypeInfo__System__Boolean->_0).element_class) {
          pbVar5 = (bool *)func_?();
          (value->fields).resellable = *pbVar5;
          itemID = CONCAT13(0x4b,(undefined3)itemID);
          pOVar1 = (Object *)func_?();
          TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                            ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_00
                             ,pOVar1,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
          if (TVar2.m_Index == 0) goto code_?;
          if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) ==
              (TypeInfo__System__Int32->_0).element_class) {
            piVar3 = (int32_t *)func_?();
            (value->fields).priceGold = *piVar3;
            itemData = (Dictionary_2_System_Object_System_Object_ *)CONCAT13(0x68,itemData._0_3_);
            pOVar1 = (Object *)func_?();
            TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Object,UnityEngine::UIElements::TextureId]::
                    Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                              ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                               this_00,pOVar1,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                              );
            if (TVar2.m_Index == 0) goto code_?;
            if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) ==
                (TypeInfo__System__Int32->_0).element_class) {
              piVar3 = (int32_t *)func_?();
              (value->fields).shopInventoryID = *piVar3;
              pOVar1 = (Object *)func_?();
              TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Object,UnityEngine::UIElements::TextureId]::
                      Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                 this_00,pOVar1,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                );
              if (TVar2.m_Index == 0) goto code_?;
              if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) ==
                  (TypeInfo__System__Int32->_0).element_class) {
                piVar3 = (int32_t *)func_?();
                (value->fields).authorProfileID = *piVar3;
                pOVar1 = (Object *)func_?();
                TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Object,UnityEngine::UIElements::TextureId]::
                        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                  ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                   this_00,pOVar1,
                                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                  );
                if (TVar2.m_Index == 0) goto code_?;
                if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) ==
                    (TypeInfo__System__Int32->_0).element_class) {
                  piVar3 = (int32_t *)func_?();
                  (value->fields).originalItemID = *piVar3;
                  pOVar1 = (Object *)func_?();
                  bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Object,UnityEngine::UIElements::TextureId]::
                          Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                                    ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *
                                     )this_00,pOVar1,
                                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                    );
                  if (bVar6 != 0) {
                    itemData = (Dictionary_2_System_Object_System_Object_ *)((int)&this + 3);
                    itemID = (int32_t)TypeInfo__System__Byte;
                    this = (InventoryItem *)&UNK_?;
                    pOVar1 = (Object *)func_?();
                    TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Object,UnityEngine::UIElements::TextureId]::
                            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_
                                        *)this_00,pOVar1,
                                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                      );
                    if (TVar2.m_Index == 0) goto code_?;
                    if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) !=
                        (TypeInfo__System__Boolean->_0).element_class) goto code_?;
                    pbVar5 = (bool *)func_?();
                    (value->fields).purchased = *pbVar5;
                  }
                  itemData = (Dictionary_2_System_Object_System_Object_ *)((int)&this + 3);
                  itemID = (int32_t)TypeInfo__System__Byte;
                  this = (InventoryItem *)&UNK_?;
                  pOVar1 = (Object *)func_?();
                  TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Object,UnityEngine::UIElements::TextureId]::
                          Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                    ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *
                                     )this_00,pOVar1,
                                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                    );
                  if (TVar2.m_Index == 0) goto code_?;
                  if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) ==
                      (TypeInfo__System__Boolean->_0).element_class) {
                    pbVar5 = (bool *)func_?();
                    (value->fields).isDefaultInvItem = *pbVar5;
                    itemID = CONCAT13(0xc,(undefined3)itemID);
                    pOVar1 = (Object *)func_?();
                    bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Object,UnityEngine::UIElements::TextureId]::
                            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_
                                        *)this_00,pOVar1,
                                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                      );
                    if (bVar6 == 0) {
                      return;
                    }
                    itemData = (Dictionary_2_System_Object_System_Object_ *)((int)&this + 3);
                    itemID = (int32_t)TypeInfo__System__Byte;
                    this = (InventoryItem *)&UNK_?;
                    pOVar1 = (Object *)func_?();
                    TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Object,UnityEngine::UIElements::TextureId]::
                            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_
                                        *)this_00,pOVar1,
                                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                      );
                    if (TVar2.m_Index == 0) {
                      (value->fields).imagePath = (String *)0x0;
                      func_?();
                      return;
                    }
                    TVar4.m_Index = (int32_t)(String *)0x0;
                    if (*(String__Class **)TVar2.m_Index == TypeInfo__System__String) {
                      TVar4 = TVar2;
                    }
                    if ((String *)TVar4.m_Index != (String *)0x0) {
                      (value->fields).imagePath = (String *)TVar4.m_Index;
                      TVar4.m_Index = 0;
                      if (*(String__Class **)TVar2.m_Index == TypeInfo__System__String) {
                        TVar4 = TVar2;
                      }
                      if (TVar4.m_Index != 0) {
                        func_?();
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto code_?;
      }
      goto code_?;
    }
    this = (InventoryItem *)CONCAT13(0xb,this._0_3_);
    pOVar1 = (Object *)func_?();
    unaff_EBX = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_00,
                           pOVar1,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
    if (unaff_EBX.m_Index == 0) {
      pDVar7 = (Dictionary_2_System_Object_System_Object_ *)0x0;
      (value->fields).data = (Byte__Array *)0x0;
code_?:
      itemID = (int32_t)&(value->fields).data;
      this = (InventoryItem *)&UNK_?;
      itemData = pDVar7;
      func_?();
      this = (InventoryItem *)((int)&itemID + 3);
      itemID = CONCAT13(0x26,(undefined3)itemID);
      pOVar1 = (Object *)func_?();
      TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_00,
                         pOVar1,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      if (TVar2.m_Index == 0) goto code_?;
      if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) !=
          (TypeInfo__System__Boolean->_0).element_class) goto code_?;
      pbVar5 = (bool *)func_?();
      (value->fields).hasData = *pbVar5;
      goto code_?;
    }
    itemData = (Dictionary_2_System_Object_System_Object_ *)TypeInfo__System__Byte;
    this = (InventoryItem *)&UNK_?;
    itemID = unaff_EBX.m_Index;
    pBVar8 = (Byte__Array *)func_?();
    if (pBVar8 == (Byte__Array *)0x0) goto code_?;
    (value->fields).data = pBVar8;
    itemData = (Dictionary_2_System_Object_System_Object_ *)TypeInfo__System__Byte;
    this = (InventoryItem *)&UNK_?;
    itemID = unaff_EBX.m_Index;
    pDVar7 = (Dictionary_2_System_Object_System_Object_ *)func_?();
    if (pDVar7 != (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
  }
  else {
code_?:
    func_?();
code_?:
    func_?();
  }
  this = (InventoryItem *)&UNK_?;
  itemID = unaff_EBX.m_Index;
  func_?();
code_?:
  this = (InventoryItem *)&UNK_?;
  itemID = unaff_EBX.m_Index;
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* InventoryItem(ShopItem) */

void Assembly-CSharp.dll::InventoryItem::InventoryItem__ctor_3
               (InventoryItem *this,ShopItem *itemToCopy,MethodInfo *method)

{
  (this->fields).hasData = 1;
  (this->fields).purchased = 1;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  if (itemToCopy != (ShopItem *)0x0) {
    ppSVar1 = &(this->fields).name;
    (this->fields).itemID = (itemToCopy->fields).itemID;
    (this->fields).itemCategoryID = (itemToCopy->fields).itemCategoryID;
    (this->fields).itemTypeID = (itemToCopy->fields).itemTypeID;
    pSVar2 = (itemToCopy->fields).name;
    *ppSVar1 = pSVar2;
    func_?(ppSVar1,pSVar2);
    pSVar2 = (itemToCopy->fields).description;
    ppSVar1 = &(this->fields).description;
    *ppSVar1 = pSVar2;
    func_?(ppSVar1,pSVar2);
    (this->fields).isDeleted = 0;
    ppBVar3 = &(this->fields).data;
    pBVar4 = (itemToCopy->fields).data;
    *ppBVar3 = pBVar4;
    func_?(ppBVar3,pBVar4);
    (this->fields).resellable = (itemToCopy->fields).resellable;
    (this->fields).priceGold = (itemToCopy->fields).priceGold;
    (this->fields).purchased = 1;
    (this->fields).isDefaultInvItem = 0;
    return;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

